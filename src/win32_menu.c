#include "win32_menu.h"

#ifdef _WIN32
#include <windows.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_syswm.h>

static HMENU h_menu = NULL;
static WNDPROC original_wndproc = NULL;
static menu_action_t pending_action = MENU_NONE;

static LRESULT CALLBACK menu_wndproc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    if (msg == WM_COMMAND) {
        switch (LOWORD(wParam)) {
        case IDM_FILE_NEW:      pending_action = MENU_NEW_GAME;  break;
        case IDM_FILE_SAVE:     pending_action = MENU_SAVE;      break;
        case IDM_FILE_LOAD:     pending_action = MENU_LOAD;      break;
        case IDM_FILE_EXIT:     pending_action = MENU_EXIT;      break;
        case IDM_CFG_CONTROLS:  pending_action = MENU_CONTROLS;  break;
        case IDM_CFG_SCALE2:    pending_action = MENU_SCALE2;    break;
        case IDM_CFG_SCALE3:    pending_action = MENU_SCALE3;    break;
        case IDM_CFG_SCALE4:    pending_action = MENU_SCALE4;    break;
        case IDM_CFG_FULLSCREEN: pending_action = MENU_FULLSCREEN; break;
        }
        return 0;
    }
    return CallWindowProcW(original_wndproc, hwnd, msg, wParam, lParam);
}

bool menu_init(void *sdl_window) {
    SDL_SysWMinfo wminfo;
    SDL_VERSION(&wminfo.version);
    if (!SDL_GetWindowWMInfo((SDL_Window *)sdl_window, &wminfo)) {
        return false;
    }

    HWND hwnd = wminfo.info.win.window;

    /* Create menu bar */
    h_menu = CreateMenu();

    /* File menu */
    HMENU file_menu = CreatePopupMenu();
    AppendMenuW(file_menu, MF_STRING, IDM_FILE_NEW,  L"&New Game");
    AppendMenuW(file_menu, MF_SEPARATOR, 0, NULL);
    AppendMenuW(file_menu, MF_STRING, IDM_FILE_SAVE, L"&Save");
    AppendMenuW(file_menu, MF_STRING, IDM_FILE_LOAD, L"&Load");
    AppendMenuW(file_menu, MF_SEPARATOR, 0, NULL);
    AppendMenuW(file_menu, MF_STRING, IDM_FILE_EXIT, L"E&xit");
    AppendMenuW(h_menu, MF_POPUP, (UINT_PTR)file_menu, L"&File");

    /* Config menu */
    HMENU config_menu = CreatePopupMenu();
    AppendMenuW(config_menu, MF_STRING, IDM_CFG_CONTROLS, L"&Controls...");
    AppendMenuW(config_menu, MF_SEPARATOR, 0, NULL);
    AppendMenuW(config_menu, MF_STRING, IDM_CFG_SCALE2, L"2x Scale");
    AppendMenuW(config_menu, MF_STRING, IDM_CFG_SCALE3, L"3x Scale");
    AppendMenuW(config_menu, MF_STRING, IDM_CFG_SCALE4, L"4x Scale");
    AppendMenuW(config_menu, MF_SEPARATOR, 0, NULL);
    AppendMenuW(config_menu, MF_STRING, IDM_CFG_FULLSCREEN, L"&Fullscreen");
    AppendMenuW(h_menu, MF_POPUP, (UINT_PTR)config_menu, L"&Config");

    SetMenu(hwnd, h_menu);

    /* Subclass window to intercept WM_COMMAND */
    original_wndproc = (WNDPROC)SetWindowLongPtrW(hwnd, GWLP_WNDPROC, (LONG_PTR)menu_wndproc);

    return true;
}

menu_action_t menu_poll_action(void) {
    menu_action_t action = pending_action;
    pending_action = MENU_NONE;
    return action;
}

#else
/* Stubs for non-Windows platforms */
bool menu_init(void *sdl_window) { (void)sdl_window; return false; }
menu_action_t menu_poll_action(void) { return MENU_NONE; }
#endif
