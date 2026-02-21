#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL2/SDL.h>

#include "gb_runtime.h"
#include "gb_cpu.h"
#include "gb_ppu.h"
#include "gb_apu.h"
#include "gb_input.h"
#include "win32_menu.h"
#include "save_system.h"
#include "config.h"

/* Forward declarations for transpiled game code */
extern void bank_00_entry(void);
extern void Start(void);
extern void RenderLoop(void);
extern void InterruptVBlank(void);

/* Frame timing */
#define TARGET_FPS  59.7275
#define FRAME_TIME  (1000.0 / TARGET_FPS)

static SDL_Window *window = NULL;
static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;
static SDL_AudioDeviceID audio_device = 0;
static bool running = true;
static bool paused = false;

static void cleanup(void) {
    if (audio_device) SDL_CloseAudioDevice(audio_device);
    if (texture)  SDL_DestroyTexture(texture);
    if (renderer) SDL_DestroyRenderer(renderer);
    if (window)   SDL_DestroyWindow(window);
    input_close_controller();
    SDL_Quit();
}

static void resize_window(int scale) {
    config.scale = scale;
    SDL_SetWindowSize(window, SCREEN_WIDTH * scale, SCREEN_HEIGHT * scale);
}

static void toggle_fullscreen(void) {
    config.fullscreen = !config.fullscreen;
    SDL_SetWindowFullscreen(window,
        config.fullscreen ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0);
}

static void handle_menu_action(menu_action_t action) {
    switch (action) {
    case MENU_NEW_GAME:
        clear_sram();
        gb_init();
        break;
    case MENU_SAVE:
        save_sram(SAVE_FILE_NAME);
        break;
    case MENU_LOAD:
        load_sram(SAVE_FILE_NAME);
        break;
    case MENU_EXIT:
        running = false;
        break;
    case MENU_CONTROLS:
        config_show_controls_dialog(NULL);
        break;
    case MENU_SCALE2:
        resize_window(2);
        break;
    case MENU_SCALE3:
        resize_window(3);
        break;
    case MENU_SCALE4:
        resize_window(4);
        break;
    case MENU_FULLSCREEN:
        toggle_fullscreen();
        break;
    default:
        break;
    }
}

int main(int argc, char *argv[]) {
    (void)argc; (void)argv;

    /* Initialize config */
    config_init();
    config_load(CONFIG_FILE_NAME);

    /* Initialize SDL */
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_GAMECONTROLLER) < 0) {
        fprintf(stderr, "SDL_Init failed: %s\n", SDL_GetError());
        return 1;
    }

    /* Create window */
    int win_w = SCREEN_WIDTH * config.scale;
    int win_h = SCREEN_HEIGHT * config.scale;
    window = SDL_CreateWindow(
        "The Legend of Zelda: Link's Awakening",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        win_w, win_h,
        SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE
    );
    if (!window) {
        fprintf(stderr, "SDL_CreateWindow failed: %s\n", SDL_GetError());
        cleanup();
        return 1;
    }

    renderer = SDL_CreateRenderer(window, -1,
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (!renderer) {
        fprintf(stderr, "SDL_CreateRenderer failed: %s\n", SDL_GetError());
        cleanup();
        return 1;
    }

    SDL_RenderSetLogicalSize(renderer, SCREEN_WIDTH, SCREEN_HEIGHT);
    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "0"); /* nearest-neighbor */

    texture = SDL_CreateTexture(renderer,
        SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING,
        SCREEN_WIDTH, SCREEN_HEIGHT);
    if (!texture) {
        fprintf(stderr, "SDL_CreateTexture failed: %s\n", SDL_GetError());
        cleanup();
        return 1;
    }

    /* Initialize audio */
    SDL_AudioSpec want, have;
    memset(&want, 0, sizeof(want));
    want.freq = APU_SAMPLE_RATE;
    want.format = AUDIO_S16SYS;
    want.channels = 2;
    want.samples = APU_BUFFER_SIZE;
    want.callback = apu_audio_callback;

    audio_device = SDL_OpenAudioDevice(NULL, 0, &want, &have, 0);
    if (audio_device) {
        SDL_PauseAudioDevice(audio_device, 0);
    }

    /* Attach Win32 menu bar */
    menu_init(window);

    /* Open first available controller */
    for (int i = 0; i < SDL_NumJoysticks(); i++) {
        if (SDL_IsGameController(i)) {
            input_open_controller(i);
            break;
        }
    }

    /* Initialize GB runtime */
    input_init();
    config_apply_to_input();
    gb_init();
    load_sram(SAVE_FILE_NAME);

    if (config.fullscreen) {
        SDL_SetWindowFullscreen(window, SDL_WINDOW_FULLSCREEN_DESKTOP);
    }

    printf("Link's Awakening - Static Recompilation\n");
    printf("Controls: Arrow Keys=D-pad, Z=A, X=B, Enter=Start, RShift=Select\n");

    /* Main loop */
    Uint32 frame_start;
    while (running) {
        frame_start = SDL_GetTicks();

        /* Poll events */
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
            case SDL_QUIT:
                running = false;
                break;
            case SDL_CONTROLLERDEVICEADDED:
                if (!input.controller) {
                    input_open_controller(event.cdevice.which);
                }
                break;
            case SDL_CONTROLLERDEVICEREMOVED:
                input_close_controller();
                break;
            case SDL_KEYDOWN:
                if (event.key.keysym.sym == SDLK_ESCAPE) {
                    running = false;
                }
                if (event.key.keysym.sym == SDLK_F11) {
                    toggle_fullscreen();
                }
                if (event.key.keysym.sym == SDLK_p) {
                    paused = !paused;
                }
                if (event.key.keysym.sym == SDLK_m) {
                    apu.master_enable = !apu.master_enable;
                }
                break;
            }
        }

        /* Handle menu actions */
        menu_action_t action = menu_poll_action();
        if (action != MENU_NONE) {
            handle_menu_action(action);
        }

        if (!paused) {
            /* Update input */
            const uint8_t *keyboard = SDL_GetKeyboardState(NULL);
            input_update(keyboard);
            input_update_controller();

            /* Debug: write save data to SRAM early, then auto-press to load */
            if (gb.frame_count == 100) {
                /* Write minimal save file to SRAM slot 0 (bank 0) */
                /* Prefix validation: 01 03 05 07 09 at $A100 */
                gb.sram[0x0100] = 0x01;
                gb.sram[0x0101] = 0x03;
                gb.sram[0x0102] = 0x05;
                gb.sram[0x0103] = 0x07;
                gb.sram[0x0104] = 0x09;

                /* Name for file select display at $A454 (via SaveSlotNameAddresses ROM table).
                   Note: name[3] at $A457 overlaps with wSpawnIsIndoor in the
                   transpiled bulk copy mapping, so we only write 3 chars. */
                gb.sram[0x0454] = 0x15; /* L */
                gb.sram[0x0455] = 0x12; /* I */
                gb.sram[0x0456] = 0x17; /* N */

                /* Save data within .main region ($A105 + offset → WRAM $D8B5 + offset).
                   These offsets are based on the transpiled WRAM layout. */
                /* wHealth at .main[$34D] = $A452 → WRAM $DC02 */
                gb.sram[0x0452] = 0x18; /* 3 hearts */
                /* wMaxHearts at .main[$34E] = $A453 → WRAM $DC03 */
                gb.sram[0x0453] = 0x03;

                /* Spawn location data - MUST have wSpawnX non-zero or
                   LoadSavedFile falls through to initNewGame */
                /* wSpawnIsIndoor at .main[$352] = $A457 → WRAM $DC07 */
                gb.sram[0x0457] = 0x01; /* indoor (Marin's house) */
                /* wSpawnMapId at .main[$353] = $A458 → WRAM $DC08 */
                gb.sram[0x0458] = 0x10;
                /* wSpawnRoom at .main[$354] = $A459 → WRAM $DC09 */
                gb.sram[0x0459] = 0xA3; /* Marin's house */
                /* wSpawnX at .main[$355] = $A45A → WRAM $DC0A */
                gb.sram[0x045A] = 0x50;
                /* wSpawnY at .main[$356] = $A45B → WRAM $DC0B */
                gb.sram[0x045B] = 0x60;
            }
            if (gb.frame_count >= 1600 && gb.frame_count <= 1605) {
                input.buttons &= ~0x08; /* Start: title animation start */
            }
            if (gb.frame_count >= 1650 && gb.frame_count <= 1655) {
                input.buttons &= ~0x08; /* Start: sub=$0B → file select */
            }
            if (gb.frame_count >= 1800 && gb.frame_count <= 1805) {
                input.buttons &= ~0x01; /* A: load save file → start game */
            }

            /* Run one frame of game logic.
               gb_halt() longjmps back here when a frame is ready,
               preventing infinite recursion in RenderLoop. */
            gb.frame_ready = false;
            if (setjmp(gb.halt_jmp) == 0) {
                gb.halt_jmp_set = true;
                if (!gb.initialized) {
                    gb.initialized = true;
                    FILE *dbg = fopen("debug.log", "w");
                    if (dbg) { fprintf(dbg, "Calling Start()...\n"); fclose(dbg); }
                    Start();
                } else {
                    RenderLoop();
                }
            }
            gb.halt_jmp_set = false;

            /* Debug: log state progression */
            if (gb.frame_count > 0 && gb.frame_count <= 8000
                && (gb.frame_count <= 5 || gb.frame_count % 100 == 0
                    || (gb.frame_count >= 1595 && gb.frame_count <= 1660)
                    || (gb.frame_count >= 1800 && gb.frame_count <= 1830))) {
                FILE *dbg = fopen("debug.log", "a");
                if (dbg) {
                    uint8_t mode = gb.wram[0xDC3D - 0xC000];
                    uint8_t sub = gb.wram[0xDC3E - 0xC000];
                    uint8_t d7b3 = gb.wram[0xD7B3 - 0xC000];
                    uint8_t c145 = gb.wram[0xC145 - 0xC000];
                    uint8_t ff9d = gb.hram[0xFF9D - 0xFF80];
                    uint8_t dc4d = gb.wram[0xDC4D - 0xC000];
                    uint8_t fff6 = gb.hram[0xFFF6 - 0xFF80];
                    fprintf(dbg, "F%u: mode=$%02X sub=$%02X d7b3=$%02X c145=$%02X dc4d=$%02X room=$%02X ff9d=$%02X SCY=$%02X SCX=$%02X LCDC=$%02X\n",
                        gb.frame_count, mode, sub, d7b3, c145, dc4d, fff6, ff9d, gb.io[0x42], gb.io[0x43], gb.io[0x40]);
                    fflush(dbg);
                    fclose(dbg);
                }
            }

            /* Debug: capture screenshots at key frames */
            if (gb.frame_count == 500 || gb.frame_count == 1000 ||
                gb.frame_count == 1500 || gb.frame_count == 1650 ||
                gb.frame_count == 1850 || gb.frame_count == 2000) {
                SDL_Surface *surf = SDL_CreateRGBSurfaceFrom(
                    ppu.framebuffer, SCREEN_WIDTH, SCREEN_HEIGHT,
                    32, SCREEN_WIDTH * 4,
                    0x00FF0000, 0x0000FF00, 0x000000FF, 0xFF000000);
                if (surf) {
                    char fname[64];
                    snprintf(fname, sizeof(fname), "frame%u.bmp", gb.frame_count);
                    SDL_SaveBMP(surf, fname);
                    SDL_FreeSurface(surf);
                }
            }


            /* Render frame to texture */
            SDL_UpdateTexture(texture, NULL, ppu.framebuffer,
                              SCREEN_WIDTH * sizeof(uint32_t));
        }

        /* Present */
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);

        /* Frame timing (if vsync isn't handling it) */
        Uint32 frame_elapsed = SDL_GetTicks() - frame_start;
        if (frame_elapsed < (Uint32)FRAME_TIME) {
            SDL_Delay((Uint32)FRAME_TIME - frame_elapsed);
        }
    }

    /* Save before exit */
    save_sram(SAVE_FILE_NAME);
    config_save(CONFIG_FILE_NAME);

    cleanup();
    return 0;
}
