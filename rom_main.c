/* Entry point for the Link's Awakening DX recompilation, on every target.
 *
 * rom.h / rom_init come from gen/, the recompiler output generated locally
 * from the user's ROM. Everything else is the gb-recompiled runtime; the
 * platform backend (SDL2, or a console's platform_*.c) supplies gb_platform_*.
 *
 * LA_DESKTOP (set by CMakeLists.txt for desktop builds) adds --headless, which
 * runs with SDL's dummy video and audio drivers so no window opens (safe over
 * RDP), and --record, which pipes every frame to ffmpeg. Consoles have no
 * popen/setenv, so they build without it.
 *
 * In the browser the frame loop can't block, so Emscripten drives frame()
 * from requestAnimationFrame instead of the while loop.
 */
#include "rom.h"
#include "gbrt.h"
#include "hwtrace.h"
#include "platform_sdl.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif

#ifdef LA_DESKTOP
#ifdef _WIN32
#define popen _popen
#define pclose _pclose
#define POPEN_W "wb"
#define set_env(k, v) _putenv_s(k, v)
#else
#define POPEN_W "w"
#define set_env(k, v) setenv(k, v, 1)
#endif
#endif

static GBContext* g_ctx;
static int g_max_frames;   /* 0 = unlimited */
static int g_frame_count;
static int g_headless;
static FILE* g_rec;

/* One iteration of the game loop. Returns 0 when it's time to quit. */
static int frame(void) {
    gb_run_frame(g_ctx);
    if (!gb_platform_poll_events(g_ctx)) return 0;
    if (!g_ctx->frame_done) return 1;
    const uint32_t* fb = gb_get_framebuffer(g_ctx);
    if (fb) {
        gb_platform_render_frame(fb);
        if (g_rec) fwrite(fb, sizeof(uint32_t), 160 * 144, g_rec);
    }
    gb_reset_frame(g_ctx);
    g_ctx->stopped = 0;
    if (!g_headless) gb_platform_vsync();
    return !(g_max_frames > 0 && ++g_frame_count >= g_max_frames);
}

#ifdef __EMSCRIPTEN__
static void em_frame(void) { frame(); }
#endif

int main(int argc, char* argv[]) {
    const char* record = NULL;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--trace") == 0) {
            gbrt_trace_enabled = true;
        } else if (strcmp(argv[i], "--trace-entries") == 0 && i + 1 < argc) {
            gbrt_set_trace_file(argv[++i]);
        } else if (strcmp(argv[i], "--limit") == 0 && i + 1 < argc) {
            gbrt_instruction_limit = strtoull(argv[++i], NULL, 10);
        } else if (strcmp(argv[i], "--input") == 0 && i + 1 < argc) {
            gb_platform_set_input_script(argv[++i]);
        } else if (strcmp(argv[i], "--dump-frames") == 0 && i + 1 < argc) {
            gb_platform_set_dump_frames(argv[++i]);
        } else if (strcmp(argv[i], "--screenshot-prefix") == 0 && i + 1 < argc) {
            gb_platform_set_screenshot_prefix(argv[++i]);
        } else if (strcmp(argv[i], "--hw-trace") == 0 && i + 1 < argc) {
            hwtrace_init(argv[++i]);
        } else if (strcmp(argv[i], "--frames") == 0 && i + 1 < argc) {
            g_max_frames = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--headless") == 0) {
            g_headless = 1;
        } else if (strcmp(argv[i], "--record") == 0 && i + 1 < argc) {
            record = argv[++i];
        } else {
            fprintf(stderr, "unknown argument: %s\n", argv[i]);
            return 2;
        }
    }

#ifdef LA_DESKTOP
    if (g_headless) {
        set_env("SDL_VIDEODRIVER", "dummy");
        set_env("SDL_AUDIODRIVER", "dummy");
    }
    if (record) {
        char cmd[1024];
        snprintf(cmd, sizeof cmd,
                 "ffmpeg -loglevel error -y -f rawvideo -pix_fmt bgra -s 160x144 -r 59.7275 -i - "
                 "-vf scale=480:432:flags=neighbor -pix_fmt yuv420p \"%s\"", record);
        g_rec = popen(cmd, POPEN_W);
        if (!g_rec) {
            fprintf(stderr, "could not start ffmpeg (is it on PATH?)\n");
            return 1;
        }
    }
#else
    if (g_headless || record) {
        fprintf(stderr, "--headless and --record are desktop-only\n");
        return 2;
    }
#endif

    g_ctx = gb_context_create(NULL);
    if (!g_ctx) {
        fprintf(stderr, "Failed to create context\n");
        return 1;
    }
    if (!gb_platform_init(3)) {
        fprintf(stderr, "Failed to initialize platform\n");
        gb_context_destroy(g_ctx);
        return 1;
    }
    /* Before rom_init, so the save file loads during gb_context_load_rom. */
    gb_platform_register_context(g_ctx);
    rom_init(g_ctx);

#ifdef __EMSCRIPTEN__
    /* Never returns: the browser owns the loop from here. */
    emscripten_set_main_loop(em_frame, 0, 1);
#else
    while (frame()) {}
#endif

#ifdef LA_DESKTOP
    if (g_rec) pclose(g_rec);
#endif
    gb_platform_shutdown();
    gb_context_destroy(g_ctx);
    return 0;
}
