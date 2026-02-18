#include "gb_input.h"
#include "gb_runtime.h"

input_state_t input;

void input_set_default_keys(void) {
    input.key_a      = SDL_SCANCODE_Z;
    input.key_b      = SDL_SCANCODE_X;
    input.key_select = SDL_SCANCODE_RSHIFT;
    input.key_start  = SDL_SCANCODE_RETURN;
    input.key_up     = SDL_SCANCODE_UP;
    input.key_down   = SDL_SCANCODE_DOWN;
    input.key_left   = SDL_SCANCODE_LEFT;
    input.key_right  = SDL_SCANCODE_RIGHT;
}

void input_init(void) {
    memset(&input, 0, sizeof(input));
    input.buttons = 0x0F; /* all released (active-low) */
    input.dpad = 0x0F;
    input.joyp_select = 0x30;
    input_set_default_keys();
}

void input_update(const uint8_t *keyboard_state) {
    uint8_t buttons = 0x0F;
    uint8_t dpad = 0x0F;

    if (keyboard_state[input.key_a])      buttons &= ~0x01;
    if (keyboard_state[input.key_b])      buttons &= ~0x02;
    if (keyboard_state[input.key_select]) buttons &= ~0x04;
    if (keyboard_state[input.key_start])  buttons &= ~0x08;
    if (keyboard_state[input.key_right])  dpad &= ~0x01;
    if (keyboard_state[input.key_left])   dpad &= ~0x02;
    if (keyboard_state[input.key_up])     dpad &= ~0x04;
    if (keyboard_state[input.key_down])   dpad &= ~0x08;

    input.buttons = buttons;
    input.dpad = dpad;
}

void input_update_controller(void) {
    if (!input.controller) return;

    /* D-pad */
    if (SDL_GameControllerGetButton(input.controller, SDL_CONTROLLER_BUTTON_DPAD_RIGHT))
        input.dpad &= ~0x01;
    if (SDL_GameControllerGetButton(input.controller, SDL_CONTROLLER_BUTTON_DPAD_LEFT))
        input.dpad &= ~0x02;
    if (SDL_GameControllerGetButton(input.controller, SDL_CONTROLLER_BUTTON_DPAD_UP))
        input.dpad &= ~0x04;
    if (SDL_GameControllerGetButton(input.controller, SDL_CONTROLLER_BUTTON_DPAD_DOWN))
        input.dpad &= ~0x08;

    /* Also accept left stick */
    int16_t lx = SDL_GameControllerGetAxis(input.controller, SDL_CONTROLLER_AXIS_LEFTX);
    int16_t ly = SDL_GameControllerGetAxis(input.controller, SDL_CONTROLLER_AXIS_LEFTY);
    if (lx > 8000)  input.dpad &= ~0x01;
    if (lx < -8000) input.dpad &= ~0x02;
    if (ly < -8000) input.dpad &= ~0x04;
    if (ly > 8000)  input.dpad &= ~0x08;

    /* Buttons: A=A(east on Xbox), B=B(south on Xbox) - swapped to match GB feel */
    if (SDL_GameControllerGetButton(input.controller, SDL_CONTROLLER_BUTTON_A))
        input.buttons &= ~0x01; /* GB A */
    if (SDL_GameControllerGetButton(input.controller, SDL_CONTROLLER_BUTTON_B))
        input.buttons &= ~0x02; /* GB B */
    if (SDL_GameControllerGetButton(input.controller, SDL_CONTROLLER_BUTTON_BACK))
        input.buttons &= ~0x04; /* Select */
    if (SDL_GameControllerGetButton(input.controller, SDL_CONTROLLER_BUTTON_START))
        input.buttons &= ~0x08; /* Start */
}

uint8_t input_read_joyp(void) {
    uint8_t result = input.joyp_select | 0xC0;

    if (!(input.joyp_select & 0x10)) {
        /* P14 selected: direction keys */
        result |= (input.dpad & 0x0F);
    }
    if (!(input.joyp_select & 0x20)) {
        /* P15 selected: action buttons (A, B, Select, Start) */
        result |= (input.buttons & 0x0F);
    }

    /* If neither selected, all bits high */
    if ((input.joyp_select & 0x30) == 0x30) {
        result |= 0x0F;
    }

    return result;
}

void input_write_joyp(uint8_t val) {
    input.joyp_select = val & 0x30;
}

void input_open_controller(int index) {
    if (input.controller) {
        SDL_GameControllerClose(input.controller);
    }
    input.controller = SDL_GameControllerOpen(index);
}

void input_close_controller(void) {
    if (input.controller) {
        SDL_GameControllerClose(input.controller);
        input.controller = NULL;
    }
}
