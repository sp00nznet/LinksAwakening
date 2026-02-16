#ifndef CONFIG_H
#define CONFIG_H

#include <stdbool.h>
#include <SDL2/SDL.h>

#define CONFIG_FILE_NAME "zelda_la.ini"

typedef struct {
    int scale;
    bool fullscreen;

    /* Key bindings (SDL scancodes) */
    SDL_Scancode key_a;
    SDL_Scancode key_b;
    SDL_Scancode key_select;
    SDL_Scancode key_start;
    SDL_Scancode key_up;
    SDL_Scancode key_down;
    SDL_Scancode key_left;
    SDL_Scancode key_right;
} config_t;

extern config_t config;

void config_init(void);
bool config_load(const char *path);
bool config_save(const char *path);
void config_apply_to_input(void);

/* Controls dialog (Win32 only) */
void config_show_controls_dialog(void *hwnd);

#endif /* CONFIG_H */
