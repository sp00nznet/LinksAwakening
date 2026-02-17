#include "gb_ppu.h"
#include "gb_runtime.h"
#include <string.h>

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

/* Decode a palette register into 4 ARGB colors */
static void decode_palette(uint8_t pal_reg, uint32_t *out) {
    for (int i = 0; i < 4; i++) {
        out[i] = dmg_palette[(pal_reg >> (i * 2)) & 3];
    }
}

/* Get a pixel from a tile in VRAM (2bpp format) */
static uint8_t get_tile_pixel(uint8_t tile_num, uint8_t x, uint8_t y, bool signed_addr) {
    uint16_t tile_addr;
    if (signed_addr) {
        /* $8800 addressing: tile 0 is at $9000 */
        tile_addr = 0x1000 + ((int8_t)tile_num) * 16;
    } else {
        /* $8000 addressing: tile 0 is at $8000 */
        tile_addr = tile_num * 16;
    }
    tile_addr += (y & 7) * 2;

    uint8_t lo = gb.vram[tile_addr];
    uint8_t hi = gb.vram[tile_addr + 1];
    uint8_t bit = 7 - (x & 7);

    return ((hi >> bit) & 1) << 1 | ((lo >> bit) & 1);
}

void ppu_render_scanline(uint8_t line) {
    if (line >= SCREEN_HEIGHT) return;

    uint8_t lcdc = gb.io[IO_LCDC];
    uint32_t *scanline = &ppu.framebuffer[line * SCREEN_WIDTH];
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

            uint8_t tile_num = gb.vram[tile_map + tile_row * 32 + tile_col];
            uint8_t color_idx = get_tile_pixel(tile_num, bg_x, bg_y, signed_tile);

            scanline[x] = bg_pal[color_idx];
            ppu.bg_priority[x] = color_idx;
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

                uint8_t tile_num = gb.vram[tile_map + tile_row * 32 + tile_col];
                uint8_t color_idx = get_tile_pixel(tile_num, win_x, win_y, signed_tile);

                scanline[x] = bg_pal[color_idx];
                ppu.bg_priority[x] = color_idx;
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
            uint32_t *pal = (flags & 0x10) ? obp1_pal : obp0_pal;

            uint8_t py = line - sy;
            if (flip_y) py = sprite_height - 1 - py;

            if (sprite_height == 16) {
                tile &= 0xFE;
            }

            uint16_t tile_addr = tile * 16 + py * 2;
            uint8_t lo = gb.vram[tile_addr];
            uint8_t hi = gb.vram[tile_addr + 1];

            for (int px = 0; px < 8; px++) {
                int screen_x = sx + px;
                if (screen_x < 0 || screen_x >= SCREEN_WIDTH) continue;

                uint8_t bit = flip_x ? px : (7 - px);
                uint8_t color_idx = ((hi >> bit) & 1) << 1 | ((lo >> bit) & 1);

                if (color_idx == 0) continue; /* transparent */
                if (bg_over && ppu.bg_priority[screen_x] != 0) continue;

                scanline[screen_x] = pal[color_idx];
            }
        }
    }
}

void ppu_render_frame(void) {
    for (int line = 0; line < SCREEN_HEIGHT; line++) {
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
