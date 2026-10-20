/* Entry point for the Link's Awakening DX recompilation.
 *
 * rom.h / rom_init come from gen/, the recompiler output generated locally
 * from the user's ROM. Everything else is the gb-recompiled runtime.
 *
 * --headless runs with SDL's dummy video and audio drivers, so no window opens
 * (safe over RDP), and --record pipes every frame to ffmpeg.
 */
#include "rom.h"
#include "gbrt.h"
#include "hwtrace.h"
#include "platform_sdl.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#define popen _popen
#define pclose _pclose
#define POPEN_W "wb"
#else
#define POPEN_W "w"
#endif

static void set_env(const char* k, const char* v) {
#ifdef _WIN32
    _putenv_s(k, v);
#else
    setenv(k, v, 1);
#endif
}

int main(int argc, char* argv[]) {
    int max_frames = 0; /* 0 = unlimited */
    int headless = 0;
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
            max_frames = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--headless") == 0) {
            headless = 1;
        } else if (strcmp(argv[i], "--record") == 0 && i + 1 < argc) {
            record = argv[++i];
        } else {
            fprintf(stderr, "unknown argument: %s\n", argv[i]);
            return 2;
        }
    }

    if (headless) {
        set_env("SDL_VIDEODRIVER", "dummy");
        set_env("SDL_AUDIODRIVER", "dummy");
    }

    FILE* rec = NULL;
    if (record) {
        char cmd[1024];
        snprintf(cmd, sizeof cmd,
                 "ffmpeg -loglevel error -y -f rawvideo -pix_fmt bgra -s 160x144 -r 59.7275 -i - "
                 "-vf scale=480:432:flags=neighbor -pix_fmt yuv420p \"%s\"", record);
        rec = popen(cmd, POPEN_W);
        if (!rec) {
            fprintf(stderr, "could not start ffmpeg (is it on PATH?)\n");
            return 1;
        }
    }

    GBContext* ctx = gb_context_create(NULL);
    if (!ctx) {
        fprintf(stderr, "Failed to create context\n");
        return 1;
    }
    if (!gb_platform_init(3)) {
        fprintf(stderr, "Failed to initialize platform\n");
        gb_context_destroy(ctx);
        return 1;
    }
    /* Before rom_init, so the save file loads during gb_context_load_rom. */
    gb_platform_register_context(ctx);
    rom_init(ctx);

    int frame_count = 0;
    for (;;) {
        gb_run_frame(ctx);
        if (!gb_platform_poll_events(ctx)) break;
        if (!ctx->frame_done) continue;
        const uint32_t* fb = gb_get_framebuffer(ctx);
        if (fb) {
            gb_platform_render_frame(fb);
            if (rec) fwrite(fb, sizeof(uint32_t), 160 * 144, rec);
        }
        gb_reset_frame(ctx);
        ctx->stopped = 0;
        if (!headless) gb_platform_vsync();
        if (max_frames > 0 && ++frame_count >= max_frames) break;
    }

    if (rec) pclose(rec);
    gb_platform_shutdown();
    gb_context_destroy(ctx);
    return 0;
}
