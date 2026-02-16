#include "save_system.h"
#include "gb_runtime.h"
#include <stdio.h>
#include <string.h>

bool save_sram(const char *path) {
    FILE *f = fopen(path, "wb");
    if (!f) return false;
    size_t written = fwrite(gb.sram, 1, SRAM_SIZE, f);
    fclose(f);
    return written == SRAM_SIZE;
}

bool load_sram(const char *path) {
    FILE *f = fopen(path, "rb");
    if (!f) return false;
    size_t read_bytes = fread(gb.sram, 1, SRAM_SIZE, f);
    fclose(f);
    return read_bytes == SRAM_SIZE;
}

void clear_sram(void) {
    memset(gb.sram, 0, SRAM_SIZE);
}
