#include "gb_runtime.h"
#include "gb_ppu.h"
#include "gb_apu.h"
#include "gb_input.h"
#include "rom_data.h"

/* VBlank ISR from transpiled game code */
extern void InterruptVBlank(void);

gb_state_t gb;

void gb_init(void) {
    memset(&gb, 0, sizeof(gb));

    /* Set up ROM bank pointers */
    gb.rom_bank0 = rom_bank_00;
    for (int i = 0; i < NUM_ROM_DATA_BANKS; i++) {
        gb.rom_banks[i] = rom_bank_ptrs[i];
    }
    /* Fill remaining slots with bank 0 as fallback */
    for (int i = NUM_ROM_DATA_BANKS; i < NUM_ROM_BANKS; i++) {
        gb.rom_banks[i] = rom_bank_00;
    }
    gb.current_rom_bank = 1;

    /* Post-boot register state depends on ROM type */
    if (rom_is_gbc) {
        /* GBC boot: register A = 0x11 */
        gb.regs.af = 0x11B0;
        gb.regs.bc = 0x0000;
        gb.regs.de = 0xFF56;
        gb.regs.hl = 0x000D;
    } else {
        /* DMG boot: register A = 0x01 */
        gb.regs.af = 0x01B0;
        gb.regs.bc = 0x0013;
        gb.regs.de = 0x00D8;
        gb.regs.hl = 0x014D;
    }
    gb.regs.sp = 0xFFFE;
    gb.regs.pc = 0x0100;
    gb.regs.ime = true;

    /* Initial IO register values */
    gb.io[IO_LCDC] = 0x91;
    gb.io[IO_BGP]  = 0xFC;
    gb.io[IO_OBP0] = 0xFF;
    gb.io[IO_OBP1] = 0xFF;
    gb.io[IO_JOYP] = 0xCF;

    /* Timer */
    gb.timer_enabled = false;
    gb.timer_freq = 1024;

    ppu_init();
    apu_init();
}

uint8_t gb_read(uint16_t addr) {
    if (addr < 0x4000) {
        /* ROM bank 0 */
        return gb.rom_bank0[addr];
    } else if (addr < 0x8000) {
        /* Switchable ROM bank */
        return gb.rom_banks[gb.current_rom_bank][addr - 0x4000];
    } else if (addr < 0xA000) {
        /* VRAM (GBC: banked via FF4F) */
        return gb.vram[(gb.vram_bank * 0x2000) + (addr - 0x8000)];
    } else if (addr < 0xC000) {
        /* SRAM (MBC5: banked via 4000-5FFF writes) */
        return gb.sram[(gb.sram_bank * 0x2000) + (addr - 0xA000)];
    } else if (addr < 0xD000) {
        /* WRAM bank 0 (always at C000-CFFF) */
        return gb.wram[addr - 0xC000];
    } else if (addr < 0xE000) {
        /* WRAM bank 1-7 (GBC: banked via FF70, at D000-DFFF) */
        uint8_t bank = gb.wram_bank ? gb.wram_bank : 1;
        return gb.wram[(bank * 0x1000) + (addr - 0xD000)];
    } else if (addr < 0xFE00) {
        /* Echo RAM -> WRAM mirror */
        if (addr < 0xF000)
            return gb.wram[addr - 0xE000];
        else {
            uint8_t bank = gb.wram_bank ? gb.wram_bank : 1;
            return gb.wram[(bank * 0x1000) + (addr - 0xF000)];
        }
    } else if (addr < 0xFEA0) {
        /* OAM */
        return gb.oam[addr - 0xFE00];
    } else if (addr < 0xFF00) {
        /* Unusable */
        return 0xFF;
    } else if (addr < 0xFF80) {
        /* IO registers */
        uint8_t reg = addr & 0x7F;
        if (reg == IO_JOYP) {
            return input_read_joyp();
        }
        if (reg == IO_LY) {
            return ppu_get_ly();
        }
        if (reg == 0x4F) {
            return gb.vram_bank | 0xFE;  /* VBK */
        }
        if (reg == 0x70) {
            return gb.wram_bank;  /* SVBK */
        }
        if (reg == 0x68) return gb.bcps | 0x40;  /* BCPS */
        if (reg == 0x69) return gb.bg_palette_data[gb.bcps & 0x3F];  /* BCPD */
        if (reg == 0x6A) return gb.ocps | 0x40;  /* OCPS */
        if (reg == 0x6B) return gb.obj_palette_data[gb.ocps & 0x3F];  /* OCPD */
        return gb.io[reg];
    } else if (addr < 0xFFFF) {
        /* HRAM */
        return gb.hram[addr - 0xFF80];
    } else {
        /* IE register at $FFFF */
        return gb.ie_reg;
    }
}

void gb_write(uint16_t addr, uint8_t val) {
    if (addr < 0x2000) {
        /* RAM enable (MBC5) - ignored for now */
        return;
    } else if (addr < 0x3000) {
        /* ROM bank number lower 8 bits (MBC5) */
        gb.current_rom_bank = (gb.current_rom_bank & 0x100) | val;
        if (gb.current_rom_bank >= NUM_ROM_BANKS)
            gb.current_rom_bank = gb.current_rom_bank % NUM_ROM_BANKS;
        return;
    } else if (addr < 0x4000) {
        /* ROM bank number upper bit (MBC5) */
        gb.current_rom_bank = (gb.current_rom_bank & 0xFF) | ((val & 1) << 8);
        if (gb.current_rom_bank >= NUM_ROM_BANKS)
            gb.current_rom_bank = gb.current_rom_bank % NUM_ROM_BANKS;
        return;
    } else if (addr < 0x6000) {
        /* SRAM bank select (MBC5) */
        gb.sram_bank = val & 0x03;
        return;
    } else if (addr < 0x8000) {
        /* ROM area - ignore writes */
        return;
    } else if (addr < 0xA000) {
        /* VRAM (GBC: banked via FF4F) */
        gb.vram[(gb.vram_bank * 0x2000) + (addr - 0x8000)] = val;
        gb.vram_write_count++;
        gb.vram_last_write_addr = addr;
        return;
    } else if (addr < 0xC000) {
        /* SRAM (MBC5: banked) */
        gb.sram[(gb.sram_bank * 0x2000) + (addr - 0xA000)] = val;
        return;
    } else if (addr < 0xD000) {
        /* WRAM bank 0 */
        gb.wram[addr - 0xC000] = val;
        return;
    } else if (addr < 0xE000) {
        /* WRAM bank 1-7 (GBC: banked via FF70) */
        uint8_t bank = gb.wram_bank ? gb.wram_bank : 1;
        gb.wram[(bank * 0x1000) + (addr - 0xD000)] = val;
        return;
    } else if (addr < 0xFE00) {
        /* Echo RAM */
        if (addr < 0xF000)
            gb.wram[addr - 0xE000] = val;
        else {
            uint8_t bank = gb.wram_bank ? gb.wram_bank : 1;
            gb.wram[(bank * 0x1000) + (addr - 0xF000)] = val;
        }
        return;
    } else if (addr < 0xFEA0) {
        /* OAM */
        gb.oam[addr - 0xFE00] = val;
        return;
    } else if (addr < 0xFF00) {
        /* Unusable */
        return;
    } else if (addr < 0xFF80) {
        /* IO registers */
        uint8_t reg = addr & 0x7F;
        gb.io[reg] = val;

        /* Side effects */
        if (reg == IO_JOYP) {
            input_write_joyp(val);
        } else if (reg == IO_DMA) {
            /* OAM DMA transfer */
            uint16_t src = val << 8;
            for (int i = 0; i < OAM_SIZE; i++) {
                gb.oam[i] = gb_read(src + i);
            }
        } else if (reg == IO_DIV) {
            gb.io[IO_DIV] = 0;
            gb.div_counter = 0;
        } else if (reg == IO_TAC) {
            gb.timer_enabled = (val & 0x04) != 0;
            switch (val & 0x03) {
                case 0: gb.timer_freq = 1024; break;
                case 1: gb.timer_freq = 16;   break;
                case 2: gb.timer_freq = 64;   break;
                case 3: gb.timer_freq = 256;  break;
            }
        } else if (reg == 0x68) {
            /* FF68: BCPS - BG palette specification */
            gb.bcps = val;
        } else if (reg == 0x69) {
            /* FF69: BCPD - BG palette data (auto-increment) */
            gb.bg_palette_data[gb.bcps & 0x3F] = val;
            if (gb.bcps & 0x80) gb.bcps = 0x80 | ((gb.bcps + 1) & 0x3F);
        } else if (reg == 0x6A) {
            /* FF6A: OCPS - OBJ palette specification */
            gb.ocps = val;
        } else if (reg == 0x6B) {
            /* FF6B: OCPD - OBJ palette data (auto-increment) */
            gb.obj_palette_data[gb.ocps & 0x3F] = val;
            if (gb.ocps & 0x80) gb.ocps = 0x80 | ((gb.ocps + 1) & 0x3F);
        } else if (reg == 0x4F) {
            /* FF4F: VBK - VRAM bank select (GBC) */
            gb.vram_bank = val & 1;
        } else if (reg == 0x70) {
            /* FF70: SVBK - WRAM bank select (GBC) */
            gb.wram_bank = val & 7;
        } else if (reg >= IO_NR10 && reg <= 0x3F) {
            apu_write_reg(reg, val);
        } else if (reg == IO_LCDC || reg == IO_STAT ||
                   reg == IO_SCY || reg == IO_SCX ||
                   reg == IO_LYC || reg == IO_BGP ||
                   reg == IO_OBP0 || reg == IO_OBP1 ||
                   reg == IO_WY || reg == IO_WX) {
            ppu_write_reg(reg, val);
        }
        return;
    } else if (addr < 0xFFFF) {
        /* HRAM */
        gb.hram[addr - 0xFF80] = val;
        return;
    } else {
        /* IE register */
        gb.ie_reg = val;
        return;
    }
}

uint16_t gb_read16(uint16_t addr) {
    return gb_read(addr) | (gb_read(addr + 1) << 8);
}

void gb_write16(uint16_t addr, uint16_t val) {
    gb_write(addr, val & 0xFF);
    gb_write(addr + 1, (val >> 8) & 0xFF);
}

void gb_switch_bank(uint8_t bank) {
    gb.current_rom_bank = bank;
    if (gb.current_rom_bank >= NUM_ROM_BANKS)
        gb.current_rom_bank = gb.current_rom_bank % NUM_ROM_BANKS;
}

void gb_push16(uint16_t val) {
    gb.regs.sp -= 2;
    gb_write(gb.regs.sp, val & 0xFF);
    gb_write(gb.regs.sp + 1, (val >> 8) & 0xFF);
}

uint16_t gb_pop16(void) {
    uint16_t val = gb_read(gb.regs.sp) | (gb_read(gb.regs.sp + 1) << 8);
    gb.regs.sp += 2;
    return val;
}

void gb_halt(void) {
    /* In static recompilation, halt means "end of frame" */
    gb.frame_count++;

    /* Handle timer ticks for one frame (~70224 T-cycles) */
    gb_timer_tick(70224);

    /* Call the game's VBlank interrupt handler FIRST.
       This runs ExecuteDrawCommands, OAM DMA, palette updates, etc.
       On a real GB: game code → VBlank → PPU renders next frame.
       We must run VBlank before rendering so OAM/tiles are current. */
    if (gb.regs.ime || gb.initialized) {
        InterruptVBlank();
    }

    /* Now render the frame with up-to-date VRAM/OAM/palettes */
    ppu_render_frame();
    gb.frame_ready = true;

    /* Debug: dump state */
    if (gb.frame_count <= 10 || gb.frame_count % 50 == 0 ||
        (gb.frame_count >= 3250 && gb.frame_count <= 3500) ||
        (gb.frame_count >= 3500 && gb.frame_count % 10 == 0)) {
        FILE *dbg = fopen("ppu_debug.log", "a");
        if (dbg) {
            uint8_t dc3e = gb.wram[0xDC3E - 0xC000];
            uint8_t d20a = gb.wram[0xD20A - 0xC000];
            uint8_t c17e = gb.wram[0xC17E - 0xC000];
            /* Entity state for slot 0 and 1 */
            uint8_t e1_type = gb.wram[0xC281 - 0xC000];
            uint8_t e1_state = gb.wram[0xC291 - 0xC000];
            fprintf(dbg, "F%u: DC3E=$%02X D20A=$%02X C17E=$%02X "
                         "E1[t=%d s=%d]\n",
                gb.frame_count, dc3e, d20a, c17e,
                e1_type, e1_state);
            fclose(dbg);
        }
    }

    /* longjmp back to main loop to yield the frame */
    if (gb.halt_jmp_set) {
        longjmp(gb.halt_jmp, 1);
    }
}

void gb_handle_interrupts(void) {
    if (!gb.regs.ime) return;

    uint8_t fired = gb.io[IO_IF] & gb.ie_reg;
    if (fired == 0) return;

    gb.regs.halted = false;

    /* Check each interrupt in priority order */
    for (int i = 0; i < 5; i++) {
        if (fired & (1 << i)) {
            gb.regs.ime = false;
            gb.io[IO_IF] &= ~(1 << i);
            /* In transpiled code, ISRs are called directly */
            /* The transpiled VBlank handler etc. will be called by the game code */
            break;
        }
    }
}

void gb_request_interrupt(uint8_t bit) {
    gb.io[IO_IF] |= (1 << bit);
}

void gb_timer_tick(uint32_t cycles) {
    /* DIV register increments at 16384 Hz (every 256 T-cycles) */
    gb.div_counter += cycles;
    while (gb.div_counter >= 256) {
        gb.div_counter -= 256;
        gb.io[IO_DIV]++;
    }

    /* TIMA timer */
    if (gb.timer_enabled) {
        gb.timer_counter += cycles;
        while (gb.timer_counter >= gb.timer_freq) {
            gb.timer_counter -= gb.timer_freq;
            gb.io[IO_TIMA]++;
            if (gb.io[IO_TIMA] == 0) {
                gb.io[IO_TIMA] = gb.io[IO_TMA];
                gb_request_interrupt(2); /* Timer interrupt */
            }
        }
    }
}

void gb_call_bank(uint8_t bank, void (*func)(void)) {
    uint8_t saved_bank = gb.current_rom_bank;
    gb_switch_bank(bank);
    func();
    gb_switch_bank(saved_bank);
}
