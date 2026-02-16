#ifndef SAVE_SYSTEM_H
#define SAVE_SYSTEM_H

#include <stdbool.h>
#include <stdint.h>

#define SAVE_FILE_NAME "zelda_la.sav"

/* Save SRAM to file */
bool save_sram(const char *path);

/* Load SRAM from file */
bool load_sram(const char *path);

/* Clear SRAM (new game) */
void clear_sram(void);

#endif /* SAVE_SYSTEM_H */
