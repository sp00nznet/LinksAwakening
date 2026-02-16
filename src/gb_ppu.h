#ifndef GB_PPU_H
#define GB_PPU_H

#include <stdint.h>
#include <stdbool.h>

#define SCREEN_WIDTH  160
#define SCREEN_HEIGHT 144

/* DMG palette colors (ARGB8888) */
#define DMG_WHITE      0xFFE0F8D0
#define DMG_LIGHT_GRAY 0xFF88C070
#define DMG_DARK_GRAY  0xFF346856
#define DMG_BLACK      0xFF081820

/* PPU state */
typedef struct {
    uint32_t framebuffer[SCREEN_WIDTH * SCREEN_HEIGHT];
    uint8_t bg_priority[SCREEN_WIDTH]; /* per-pixel BG priority for sprite rendering */
    uint8_t ly;          /* current scanline */
    uint32_t dmg_colors[4]; /* resolved DMG palette */
} ppu_state_t;

extern ppu_state_t ppu;

void ppu_init(void);
void ppu_render_frame(void);
void ppu_render_scanline(uint8_t line);
void ppu_write_reg(uint8_t reg, uint8_t val);
uint8_t ppu_get_ly(void);

#endif /* GB_PPU_H */
