#ifndef GB_INPUT_H
#define GB_INPUT_H

#include <stdint.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

/* GB joypad button bits */
#define BTN_A      0x01
#define BTN_B      0x02
#define BTN_SELECT 0x04
#define BTN_START  0x08
#define BTN_RIGHT  0x10
#define BTN_LEFT   0x20
#define BTN_UP     0x40
#define BTN_DOWN   0x80

typedef struct {
    /* Current button state (active-low bits) */
    uint8_t buttons;    /* A, B, Select, Start */
    uint8_t dpad;       /* Right, Left, Up, Down */
    uint8_t joyp_select; /* P14/P15 select lines */

    /* Keyboard bindings */
    SDL_Scancode key_a;
    SDL_Scancode key_b;
    SDL_Scancode key_select;
    SDL_Scancode key_start;
    SDL_Scancode key_up;
    SDL_Scancode key_down;
    SDL_Scancode key_left;
    SDL_Scancode key_right;

    /* Controller */
    SDL_GameController *controller;
} input_state_t;

extern input_state_t input;

void input_init(void);
void input_update(const uint8_t *keyboard_state);
void input_update_controller(void);
uint8_t input_read_joyp(void);
void input_write_joyp(uint8_t val);
void input_set_default_keys(void);
void input_open_controller(int index);
void input_close_controller(void);

#endif /* GB_INPUT_H */
