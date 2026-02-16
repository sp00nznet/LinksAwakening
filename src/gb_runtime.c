#include "gb_runtime.h"
#include "gb_ppu.h"
#include "gb_apu.h"
#include "gb_input.h"
#include "rom_data.h"

gb_state_t gb;

void gb_init(void) {
    memset(&gb, 0, sizeof(gb));

    /* Post-boot register state (DMG) */
    gb.regs.af = 0x01B0;
    gb.regs.bc = 0x0013;
    gb.regs.de = 0x00D8;
    gb.regs.hl = 0x014D;
    gb.regs.sp = 0xFFFE;
    gb.regs.pc = 0x0100;
    gb.regs.ime = true;

    /* Set up ROM bank pointers */
    gb.rom_bank0 = rom_bank_00;
    for (int i = 0; i < NUM_ROM_BANKS; i++) {
        gb.rom_banks[i] = rom_bank_ptrs[i];
    }
    gb.current_rom_bank = 1;

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
        /* VRAM */
        return gb.vram[addr - 0x8000];
    } else if (addr < 0xC000) {
        /* SRAM */
        return gb.sram[addr - 0xA000];
    } else if (addr < 0xE000) {
        /* WRAM */
        return gb.wram[addr - 0xC000];
    } else if (addr < 0xFE00) {
        /* Echo RAM -> WRAM mirror */
        return gb.wram[addr - 0xE000];
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
        /* RAM bank (MBC5) - we only have 8KB SRAM */
        return;
    } else if (addr < 0x8000) {
        /* ROM area - ignore writes */
        return;
    } else if (addr < 0xA000) {
        /* VRAM */
        gb.vram[addr - 0x8000] = val;
        return;
    } else if (addr < 0xC000) {
        /* SRAM */
        gb.sram[addr - 0xA000] = val;
        return;
    } else if (addr < 0xE000) {
        /* WRAM */
        gb.wram[addr - 0xC000] = val;
        return;
    } else if (addr < 0xFE00) {
        /* Echo RAM */
        gb.wram[addr - 0xE000] = val;
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
    /* Render all scanlines and mark frame ready */
    ppu_render_frame();
    gb.frame_ready = true;
    gb.frame_count++;

    /* Handle timer ticks for one frame (~70224 T-cycles) */
    gb_timer_tick(70224);

    /* Handle VBlank interrupt */
    gb.io[IO_IF] |= 0x01; /* Set VBlank interrupt flag */
    gb_handle_interrupts();
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
