#ifndef GB_RUNTIME_H
#define GB_RUNTIME_H

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <setjmp.h>

/* SM83 CPU registers */
typedef struct {
    union {
        struct { uint8_t f; uint8_t a; };  /* little-endian: F low, A high */
        uint16_t af;
    };
    union {
        struct { uint8_t c; uint8_t b; };
        uint16_t bc;
    };
    union {
        struct { uint8_t e; uint8_t d; };
        uint16_t de;
    };
    union {
        struct { uint8_t l; uint8_t h; };
        uint16_t hl;
    };
    uint16_t sp;
    uint16_t pc;
    bool ime;       /* interrupt master enable */
    bool halted;
    bool ime_pending; /* EI delays by one instruction */
} gb_regs_t;

/* Flag bit positions */
#define FLAG_Z  0x80
#define FLAG_N  0x40
#define FLAG_H  0x20
#define FLAG_C  0x10

/* Flag helpers */
#define GET_FLAG_Z() ((gb.regs.f & FLAG_Z) != 0)
#define GET_FLAG_N() ((gb.regs.f & FLAG_N) != 0)
#define GET_FLAG_H() ((gb.regs.f & FLAG_H) != 0)
#define GET_FLAG_C() ((gb.regs.f & FLAG_C) != 0)

#define SET_FLAG_Z(v) do { if (v) gb.regs.f |= FLAG_Z; else gb.regs.f &= ~FLAG_Z; } while(0)
#define SET_FLAG_N(v) do { if (v) gb.regs.f |= FLAG_N; else gb.regs.f &= ~FLAG_N; } while(0)
#define SET_FLAG_H(v) do { if (v) gb.regs.f |= FLAG_H; else gb.regs.f &= ~FLAG_H; } while(0)
#define SET_FLAG_C(v) do { if (v) gb.regs.f |= FLAG_C; else gb.regs.f &= ~FLAG_C; } while(0)

#define SET_FLAGS(z,n,h,c) do { \
    gb.regs.f = ((z) ? FLAG_Z : 0) | ((n) ? FLAG_N : 0) | \
                ((h) ? FLAG_H : 0) | ((c) ? FLAG_C : 0); \
} while(0)

/* Memory map sizes */
#define ROM_BANK_SIZE   0x4000  /* 16KB */
#define VRAM_SIZE       0x4000  /* 16KB (GBC: 2 banks) */
#define WRAM_SIZE       0x8000  /* 32KB (GBC: 8 banks) */
#define OAM_SIZE        0xA0    /* 160 bytes */
#define HRAM_SIZE       0x7F    /* 127 bytes */
#define SRAM_SIZE       0x8000  /* 32KB (DX uses 4 banks) */
#define IO_SIZE         0x80    /* 128 bytes */
#define NUM_ROM_BANKS   64

/* IO register addresses (offset from $FF00) */
#define IO_JOYP     0x00
#define IO_SB       0x01
#define IO_SC       0x02
#define IO_DIV      0x04
#define IO_TIMA     0x05
#define IO_TMA      0x06
#define IO_TAC      0x07
#define IO_IF       0x0F
#define IO_NR10     0x10
#define IO_NR11     0x11
#define IO_NR12     0x12
#define IO_NR13     0x13
#define IO_NR14     0x14
#define IO_NR21     0x16
#define IO_NR22     0x17
#define IO_NR23     0x18
#define IO_NR24     0x19
#define IO_NR30     0x1A
#define IO_NR31     0x1B
#define IO_NR32     0x1C
#define IO_NR33     0x1D
#define IO_NR34     0x1E
#define IO_NR41     0x20
#define IO_NR42     0x21
#define IO_NR43     0x22
#define IO_NR44     0x23
#define IO_NR50     0x24
#define IO_NR51     0x25
#define IO_NR52     0x26
#define IO_LCDC     0x40
#define IO_STAT     0x41
#define IO_SCY      0x42
#define IO_SCX      0x43
#define IO_LY       0x44
#define IO_LYC      0x45
#define IO_DMA      0x46
#define IO_BGP      0x47
#define IO_OBP0     0x48
#define IO_OBP1     0x49
#define IO_WY       0x4A
#define IO_WX       0x4B
#define IO_IE       0xFF  /* at $FFFF, stored at io[0x7F] for convenience */

/* GB state */
typedef struct {
    gb_regs_t regs;

    /* Memory */
    const uint8_t *rom_bank0;               /* bank 0: always $0000-$3FFF */
    const uint8_t *rom_banks[NUM_ROM_BANKS]; /* pointers to rom_data bank arrays */
    uint8_t current_rom_bank;               /* selected ROM bank for $4000-$7FFF */
    uint8_t vram[VRAM_SIZE];
    uint8_t wram[WRAM_SIZE];
    uint8_t oam[OAM_SIZE];
    uint8_t hram[HRAM_SIZE];
    uint8_t sram[SRAM_SIZE];
    uint8_t io[IO_SIZE];

    /* GBC banking */
    uint8_t vram_bank;                      /* 0 or 1 */
    uint8_t wram_bank;                      /* 1-7 (0 maps to 1) */
    uint8_t sram_bank;                      /* 0-3 */

    /* Timer */
    uint16_t div_counter;
    uint16_t timer_counter;
    bool timer_enabled;
    uint16_t timer_freq;

    /* Frame state */
    bool frame_ready;
    uint32_t frame_count;

    /* DMA */
    bool dma_active;

    /* Interrupt state */
    uint8_t ie_reg;  /* $FFFF interrupt enable */

    /* Frame yield: longjmp back to main loop from gb_halt() */
    jmp_buf halt_jmp;
    bool halt_jmp_set;

    /* Track whether game has been initialized */
    bool initialized;
} gb_state_t;

extern gb_state_t gb;

/* Core functions */
void gb_init(void);
uint8_t gb_read(uint16_t addr);
void gb_write(uint16_t addr, uint8_t val);
uint16_t gb_read16(uint16_t addr);
void gb_write16(uint16_t addr, uint16_t val);

/* Bank switching */
void gb_switch_bank(uint8_t bank);

/* Halt / frame sync */
void gb_halt(void);

/* Stack operations */
void gb_push16(uint16_t val);
uint16_t gb_pop16(void);

/* Interrupt handling */
void gb_handle_interrupts(void);
void gb_request_interrupt(uint8_t bit);

/* Timer */
void gb_timer_tick(uint32_t cycles);

/* Cross-bank call support */
void gb_call_bank(uint8_t bank, void (*func)(void));

#endif /* GB_RUNTIME_H */
