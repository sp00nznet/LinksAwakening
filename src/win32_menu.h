#ifndef WIN32_MENU_H
#define WIN32_MENU_H

#include <stdbool.h>

/* Menu command IDs */
#define IDM_FILE_NEW      1001
#define IDM_FILE_SAVE     1002
#define IDM_FILE_LOAD     1003
#define IDM_FILE_EXIT     1004
#define IDM_CFG_CONTROLS  2001
#define IDM_CFG_SCALE2    2002
#define IDM_CFG_SCALE3    2003
#define IDM_CFG_SCALE4    2004
#define IDM_CFG_FULLSCREEN 2005

/* Menu action callback types */
typedef enum {
    MENU_NONE = 0,
    MENU_NEW_GAME,
    MENU_SAVE,
    MENU_LOAD,
    MENU_EXIT,
    MENU_CONTROLS,
    MENU_SCALE2,
    MENU_SCALE3,
    MENU_SCALE4,
    MENU_FULLSCREEN
} menu_action_t;

/* Initializes the Win32 menu bar on the SDL window */
bool menu_init(void *sdl_window);

/* Polls for menu action (non-blocking, returns MENU_NONE if nothing) */
menu_action_t menu_poll_action(void);

#endif /* WIN32_MENU_H */
