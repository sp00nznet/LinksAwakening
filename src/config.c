#include "config.h"
#include "gb_input.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

config_t config;

void config_init(void) {
    config.scale = 3;
    config.fullscreen = false;
    config.key_a      = SDL_SCANCODE_Z;
    config.key_b      = SDL_SCANCODE_X;
    config.key_select = SDL_SCANCODE_RSHIFT;
    config.key_start  = SDL_SCANCODE_RETURN;
    config.key_up     = SDL_SCANCODE_UP;
    config.key_down   = SDL_SCANCODE_DOWN;
    config.key_left   = SDL_SCANCODE_LEFT;
    config.key_right  = SDL_SCANCODE_RIGHT;
}

bool config_load(const char *path) {
    FILE *f = fopen(path, "r");
    if (!f) return false;

    char line[256];
    while (fgets(line, sizeof(line), f)) {
        char key[64], val[64];
        if (sscanf(line, "%63[^=]=%63s", key, val) == 2) {
            /* Trim whitespace */
            char *k = key;
            while (*k == ' ') k++;
            char *v = val;

            if (strcmp(k, "scale") == 0)      config.scale = atoi(v);
            else if (strcmp(k, "fullscreen") == 0) config.fullscreen = atoi(v);
            else if (strcmp(k, "key_a") == 0)      config.key_a = atoi(v);
            else if (strcmp(k, "key_b") == 0)      config.key_b = atoi(v);
            else if (strcmp(k, "key_select") == 0)  config.key_select = atoi(v);
            else if (strcmp(k, "key_start") == 0)   config.key_start = atoi(v);
            else if (strcmp(k, "key_up") == 0)      config.key_up = atoi(v);
            else if (strcmp(k, "key_down") == 0)     config.key_down = atoi(v);
            else if (strcmp(k, "key_left") == 0)     config.key_left = atoi(v);
            else if (strcmp(k, "key_right") == 0)    config.key_right = atoi(v);
        }
    }

    fclose(f);

    if (config.scale < 1) config.scale = 1;
    if (config.scale > 8) config.scale = 8;

    return true;
}

bool config_save(const char *path) {
    FILE *f = fopen(path, "w");
    if (!f) return false;

    fprintf(f, "[display]\n");
    fprintf(f, "scale=%d\n", config.scale);
    fprintf(f, "fullscreen=%d\n", config.fullscreen ? 1 : 0);
    fprintf(f, "\n[controls]\n");
    fprintf(f, "key_a=%d\n", config.key_a);
    fprintf(f, "key_b=%d\n", config.key_b);
    fprintf(f, "key_select=%d\n", config.key_select);
    fprintf(f, "key_start=%d\n", config.key_start);
    fprintf(f, "key_up=%d\n", config.key_up);
    fprintf(f, "key_down=%d\n", config.key_down);
    fprintf(f, "key_left=%d\n", config.key_left);
    fprintf(f, "key_right=%d\n", config.key_right);

    fclose(f);
    return true;
}

void config_apply_to_input(void) {
    input.key_a      = config.key_a;
    input.key_b      = config.key_b;
    input.key_select = config.key_select;
    input.key_start  = config.key_start;
    input.key_up     = config.key_up;
    input.key_down   = config.key_down;
    input.key_left   = config.key_left;
    input.key_right  = config.key_right;
}

#ifdef _WIN32
#include <windows.h>

static const char *button_names[] = {
    "A Button", "B Button", "Select", "Start",
    "Up", "Down", "Left", "Right"
};

static SDL_Scancode *key_ptrs[8];
static bool waiting_for_key = false;
static int waiting_button_index = -1;

static INT_PTR CALLBACK controls_dlg_proc(HWND hdlg, UINT msg, WPARAM wParam, LPARAM lParam) {
    (void)lParam;
    switch (msg) {
    case WM_INITDIALOG: {
        /* Populate the list with current bindings */
        key_ptrs[0] = &config.key_a;
        key_ptrs[1] = &config.key_b;
        key_ptrs[2] = &config.key_select;
        key_ptrs[3] = &config.key_start;
        key_ptrs[4] = &config.key_up;
        key_ptrs[5] = &config.key_down;
        key_ptrs[6] = &config.key_left;
        key_ptrs[7] = &config.key_right;

        char info[512] = "Current key bindings:\n\n";
        for (int i = 0; i < 8; i++) {
            char buf[64];
            snprintf(buf, sizeof(buf), "%s: %s\n",
                     button_names[i], SDL_GetScancodeName(*key_ptrs[i]));
            strcat(info, buf);
        }
        strcat(info, "\nClose this dialog and use the game window.\n");
        strcat(info, "Key bindings can be edited in zelda_la.ini");
        SetDlgItemTextA(hdlg, 1000, info);
        return TRUE;
    }
    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL) {
            EndDialog(hdlg, 0);
            return TRUE;
        }
        break;
    }
    return FALSE;
}

void config_show_controls_dialog(void *hwnd) {
    /* Simple message box showing controls since creating a full dialog
       resource is complex without RC files */
    char info[512] = "Current Key Bindings:\n\n";
    const SDL_Scancode *keys[] = {
        &config.key_a, &config.key_b, &config.key_select, &config.key_start,
        &config.key_up, &config.key_down, &config.key_left, &config.key_right
    };
    for (int i = 0; i < 8; i++) {
        char buf[64];
        snprintf(buf, sizeof(buf), "%s: %s\n",
                 button_names[i], SDL_GetScancodeName(*keys[i]));
        strcat(info, buf);
    }
    strcat(info, "\nEdit zelda_la.ini to change key bindings.");
    MessageBoxA((HWND)hwnd, info, "Controls", MB_OK | MB_ICONINFORMATION);
}

#else
void config_show_controls_dialog(void *hwnd) { (void)hwnd; }
#endif
