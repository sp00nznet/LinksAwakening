#include "gb_ppu.h"
#include "gb_runtime.h"
#include <string.h>

/* STAT interrupt handler from transpiled game code */
extern void InterruptLCDStatus(void);

ppu_state_t ppu;

static const uint32_t dmg_palette[4] = {
    DMG_WHITE, DMG_LIGHT_GRAY, DMG_DARK_GRAY, DMG_BLACK
};

void ppu_init(void) {
    memset(&ppu, 0, sizeof(ppu));
    for (int i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i++) {
        ppu.framebuffer[i] = DMG_WHITE;
    }
    for (int i = 0; i < 4; i++) {
        ppu.dmg_colors[i] = dmg_palette[i];
    }
}

/* Decode a DMG palette register into 4 ARGB colors */
static void decode_palette(uint8_t pal_reg, uint32_t *out) {
    for (int i = 0; i < 4; i++) {
        out[i] = dmg_palette[(pal_reg >> (i * 2)) & 3];
    }
}

/* Convert GBC RGB555 color to ARGB8888 */
static uint32_t gbc_color_to_argb(uint8_t lo, uint8_t hi) {
    uint16_t rgb555 = lo | (hi << 8);
    uint8_t r5 = rgb555 & 0x1F;
    uint8_t g5 = (rgb555 >> 5) & 0x1F;
    uint8_t b5 = (rgb555 >> 10) & 0x1F;
    /* Scale 5-bit to 8-bit */
    uint8_t r = (r5 << 3) | (r5 >> 2);
    uint8_t g = (g5 << 3) | (g5 >> 2);
    uint8_t b = (b5 << 3) | (b5 >> 2);
    return 0xFF000000 | (r << 16) | (g << 8) | b;
}

/* Get 4 colors from a GBC palette (BG or OBJ) */
static void decode_gbc_palette(const uint8_t *palette_data, int pal_num, uint32_t *out) {
    int base = pal_num * 8; /* 8 bytes per palette (4 colors * 2 bytes) */
    for (int i = 0; i < 4; i++) {
        out[i] = gbc_color_to_argb(palette_data[base + i*2], palette_data[base + i*2 + 1]);
    }
}

/* Get a pixel from a tile in VRAM (2bpp format) with VRAM bank offset */
static uint8_t get_tile_pixel_ex(uint8_t tile_num, uint8_t x, uint8_t y,
                                  bool signed_addr, int vram_bank_offset) {
    uint16_t tile_addr;
    if (signed_addr) {
        /* $8800 addressing: tile 0 is at $9000 */
        tile_addr = 0x1000 + ((int8_t)tile_num) * 16;
    } else {
        /* $8000 addressing: tile 0 is at $8000 */
        tile_addr = tile_num * 16;
    }
    tile_addr += (y & 7) * 2;

    uint8_t lo = gb.vram[vram_bank_offset + tile_addr];
    uint8_t hi = gb.vram[vram_bank_offset + tile_addr + 1];
    uint8_t bit = 7 - (x & 7);

    return ((hi >> bit) & 1) << 1 | ((lo >> bit) & 1);
}

void ppu_render_scanline(uint8_t line) {
    if (line >= SCREEN_HEIGHT) return;

    uint8_t lcdc = gb.io[IO_LCDC];
    uint32_t *scanline = &ppu.framebuffer[line * SCREEN_WIDTH];

    /* GBC mode check: use GBC palette rendering only if meaningful
       palette data has been loaded (not all-same-value fills).
       Until GBC palette loading stubs are implemented, this will
       fall back to DMG rendering which uses BGP/OBP0/OBP1 registers. */
    bool gbc_mode = false;
    if (gb.hram[0xFFFE - 0xFF80] != 0) {
        /* Check if palette data has real variety (not all same byte) */
        uint8_t first = gb.bg_palette_data[0];
        bool varied = false;
        for (int i = 1; i < 64; i++) {
            if (gb.bg_palette_data[i] != first) { varied = true; break; }
        }
        gbc_mode = varied;
    }

    /* DMG palettes (used as fallback or in DMG mode) */
    uint32_t bg_pal[4], obp0_pal[4], obp1_pal[4];
    decode_palette(gb.io[IO_BGP], bg_pal);
    decode_palette(gb.io[IO_OBP0], obp0_pal);
    decode_palette(gb.io[IO_OBP1], obp1_pal);

    /* Clear BG priority array */
    memset(ppu.bg_priority, 0, SCREEN_WIDTH);

    if (!(lcdc & 0x80)) {
        /* LCD off - blank white */
        for (int x = 0; x < SCREEN_WIDTH; x++) {
            scanline[x] = DMG_WHITE;
        }
        return;
    }

    /* Background layer */
    if (lcdc & 0x01) {
        uint8_t scy = gb.io[IO_SCY];
        uint8_t scx = gb.io[IO_SCX];
        uint16_t tile_map = (lcdc & 0x08) ? 0x1C00 : 0x1800;
        bool signed_tile = !(lcdc & 0x10);

        uint8_t bg_y = (line + scy) & 0xFF;
        uint8_t tile_row = bg_y >> 3;

        for (int x = 0; x < SCREEN_WIDTH; x++) {
            uint8_t bg_x = (x + scx) & 0xFF;
            uint8_t tile_col = bg_x >> 3;

            uint16_t map_offset = tile_map + tile_row * 32 + tile_col;
            uint8_t tile_num = gb.vram[map_offset];

            if (gbc_mode) {
                /* GBC: read BG map attributes from VRAM bank 1 */
                uint8_t attr = gb.vram[0x2000 + map_offset];
                int tile_vram_bank = (attr & 0x08) ? 0x2000 : 0;
                bool h_flip = attr & 0x20;
                bool v_flip = attr & 0x40;
                int gbc_pal_num = attr & 0x07;

                uint8_t px = h_flip ? (7 - (bg_x & 7)) : (bg_x & 7);
                uint8_t py = v_flip ? (7 - (bg_y & 7)) : (bg_y & 7);

                /* Get pixel using flipped coordinates */
                uint16_t tile_addr;
                if (signed_tile) {
                    tile_addr = 0x1000 + ((int8_t)tile_num) * 16;
                } else {
                    tile_addr = tile_num * 16;
                }
                tile_addr += py * 2;
                uint8_t lo = gb.vram[tile_vram_bank + tile_addr];
                uint8_t hi = gb.vram[tile_vram_bank + tile_addr + 1];
                uint8_t bit = 7 - px;
                uint8_t color_idx = ((hi >> bit) & 1) << 1 | ((lo >> bit) & 1);

                /* Use GBC palette */
                uint32_t gbc_pal[4];
                decode_gbc_palette(gb.bg_palette_data, gbc_pal_num, gbc_pal);
                scanline[x] = gbc_pal[color_idx];
                ppu.bg_priority[x] = color_idx;
            } else {
                uint8_t color_idx = get_tile_pixel_ex(tile_num, bg_x, bg_y, signed_tile, 0);
                scanline[x] = bg_pal[color_idx];
                ppu.bg_priority[x] = color_idx;
            }
        }
    } else {
        for (int x = 0; x < SCREEN_WIDTH; x++) {
            scanline[x] = DMG_WHITE;
        }
    }

    /* Window layer */
    if ((lcdc & 0x20) && (lcdc & 0x01)) {
        uint8_t wy = gb.io[IO_WY];
        int wx = gb.io[IO_WX] - 7;

        if (line >= wy) {
            uint16_t tile_map = (lcdc & 0x40) ? 0x1C00 : 0x1800;
            bool signed_tile = !(lcdc & 0x10);
            uint8_t win_y = line - wy;
            uint8_t tile_row = win_y >> 3;

            for (int x = (wx < 0 ? 0 : wx); x < SCREEN_WIDTH; x++) {
                uint8_t win_x = x - wx;
                uint8_t tile_col = win_x >> 3;

                uint16_t map_offset = tile_map + tile_row * 32 + tile_col;
                uint8_t tile_num = gb.vram[map_offset];

                if (gbc_mode) {
                    uint8_t attr = gb.vram[0x2000 + map_offset];
                    int tile_vram_bank = (attr & 0x08) ? 0x2000 : 0;
                    bool h_flip = attr & 0x20;
                    bool v_flip = attr & 0x40;
                    int gbc_pal_num = attr & 0x07;

                    uint8_t px = h_flip ? (7 - (win_x & 7)) : (win_x & 7);
                    uint8_t py = v_flip ? (7 - (win_y & 7)) : (win_y & 7);

                    uint16_t tile_addr;
                    if (signed_tile) {
                        tile_addr = 0x1000 + ((int8_t)tile_num) * 16;
                    } else {
                        tile_addr = tile_num * 16;
                    }
                    tile_addr += py * 2;
                    uint8_t lo = gb.vram[tile_vram_bank + tile_addr];
                    uint8_t hi = gb.vram[tile_vram_bank + tile_addr + 1];
                    uint8_t bit = 7 - px;
                    uint8_t color_idx = ((hi >> bit) & 1) << 1 | ((lo >> bit) & 1);

                    uint32_t gbc_pal[4];
                    decode_gbc_palette(gb.bg_palette_data, gbc_pal_num, gbc_pal);
                    scanline[x] = gbc_pal[color_idx];
                    ppu.bg_priority[x] = color_idx;
                } else {
                    uint8_t color_idx = get_tile_pixel_ex(tile_num, win_x, win_y, signed_tile, 0);
                    scanline[x] = bg_pal[color_idx];
                    ppu.bg_priority[x] = color_idx;
                }
            }
        }
    }

    /* Sprite layer */
    if (lcdc & 0x02) {
        uint8_t sprite_height = (lcdc & 0x04) ? 16 : 8;
        int sprites_drawn = 0;

        /* Scan OAM for sprites on this line (max 10) */
        for (int i = 0; i < 40 && sprites_drawn < 10; i++) {
            uint8_t sy = gb.oam[i * 4 + 0] - 16;
            uint8_t sx = gb.oam[i * 4 + 1] - 8;
            uint8_t tile = gb.oam[i * 4 + 2];
            uint8_t flags = gb.oam[i * 4 + 3];

            if (line < sy || line >= sy + sprite_height) continue;
            sprites_drawn++;

            bool flip_y = flags & 0x40;
            bool flip_x = flags & 0x20;
            bool bg_over = flags & 0x80;
            /* GBC: bit 3 selects VRAM bank for tile data */
            int vram_bank_offset = (flags & 0x08) ? 0x2000 : 0;

            /* Select palette */
            uint32_t sprite_pal[4];
            if (gbc_mode) {
                int gbc_pal_num = flags & 0x07;
                decode_gbc_palette(gb.obj_palette_data, gbc_pal_num, sprite_pal);
            } else {
                uint32_t *dmg_pal = (flags & 0x10) ? obp1_pal : obp0_pal;
                memcpy(sprite_pal, dmg_pal, sizeof(sprite_pal));
            }

            uint8_t py = line - sy;
            if (flip_y) py = sprite_height - 1 - py;

            if (sprite_height == 16) {
                tile &= 0xFE;
            }

            /* Sprites always use $8000 addressing */
            uint16_t tile_addr = vram_bank_offset + tile * 16 + py * 2;
            uint8_t lo = gb.vram[tile_addr];
            uint8_t hi = gb.vram[tile_addr + 1];

            for (int px = 0; px < 8; px++) {
                int screen_x = sx + px;
                if (screen_x < 0 || screen_x >= SCREEN_WIDTH) continue;

                uint8_t bit = flip_x ? px : (7 - px);
                uint8_t color_idx = ((hi >> bit) & 1) << 1 | ((lo >> bit) & 1);

                if (color_idx == 0) continue; /* transparent */
                if (bg_over && ppu.bg_priority[screen_x] != 0) continue;

                scanline[screen_x] = sprite_pal[color_idx];
            }
        }
    }
}

void ppu_render_frame(void) {
    for (int line = 0; line < SCREEN_HEIGHT; line++) {
        /* Update LY to current scanline */
        gb.io[IO_LY] = line;

        /* Check for STAT LYC=LY interrupt (bit 6 of STAT register) */
        if (line == gb.io[IO_LYC] && (gb.io[IO_STAT] & 0x40) && gb.regs.ime) {
            InterruptLCDStatus();
        }

        ppu_render_scanline(line);
    }
}

void ppu_write_reg(uint8_t reg, uint8_t val) {
    gb.io[reg] = val;
}

uint8_t ppu_get_ly(void) {
    /* In static recomp, simulate LY advancing each read.
       This prevents infinite loops in code that polls LY
       (e.g., LCDOff waits for LY == 0x91). */
    ppu.ly_counter = (ppu.ly_counter + 1) % 154;
    gb.io[IO_LY] = ppu.ly_counter;
    return ppu.ly_counter;
}
