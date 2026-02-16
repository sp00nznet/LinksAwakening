#include "gb_apu.h"
#include "gb_runtime.h"
#include <string.h>
#include <math.h>

apu_state_t apu;

static const uint8_t duty_table[4][8] = {
    {0, 0, 0, 0, 0, 0, 0, 1}, /* 12.5% */
    {1, 0, 0, 0, 0, 0, 0, 1}, /* 25% */
    {1, 0, 0, 0, 0, 1, 1, 1}, /* 50% */
    {0, 1, 1, 1, 1, 1, 1, 0}, /* 75% */
};

static const uint8_t divisor_table[8] = {8, 16, 32, 48, 64, 80, 96, 112};

void apu_init(void) {
    memset(&apu, 0, sizeof(apu));
    apu.master_enable = true;
    apu.ch4.lfsr = 0x7FFF;
    apu.sample_period = 4194304.0f / APU_SAMPLE_RATE; /* CPU cycles per sample */
}

static void trigger_pulse(pulse_channel_t *ch, bool is_ch1) {
    ch->enabled = true;
    ch->volume = ch->volume_init;
    ch->envelope_timer = ch->envelope_period;
    ch->timer = (2048 - ch->frequency) * 4;
    ch->duty_pos = 0;

    if (is_ch1) {
        ch->sweep_shadow = ch->frequency;
        ch->sweep_timer = ch->sweep_period ? ch->sweep_period : 8;
        ch->sweep_enabled = ch->sweep_period || ch->sweep_shift;
    }

    if (ch->length == 0) ch->length = 64;
}

static void trigger_wave(wave_channel_t *ch) {
    ch->enabled = ch->dac_enabled;
    ch->timer = (2048 - ch->frequency) * 2;
    ch->pos = 0;
    if (ch->length == 0) ch->length = 256;
}

static void trigger_noise(noise_channel_t *ch) {
    ch->enabled = true;
    ch->volume = ch->volume_init;
    ch->envelope_timer = ch->envelope_period;
    ch->lfsr = 0x7FFF;
    ch->timer = divisor_table[ch->divisor] << ch->clock_shift;
    if (ch->length == 0) ch->length = 64;
}

void apu_write_reg(uint8_t reg, uint8_t val) {
    switch (reg) {
    /* Channel 1 - Pulse with sweep */
    case 0x10: /* NR10 */
        apu.ch1.sweep_period = (val >> 4) & 7;
        apu.ch1.sweep_negate = val & 0x08;
        apu.ch1.sweep_shift = val & 7;
        break;
    case 0x11: /* NR11 */
        apu.ch1.duty = (val >> 6) & 3;
        apu.ch1.length = 64 - (val & 0x3F);
        break;
    case 0x12: /* NR12 */
        apu.ch1.volume_init = (val >> 4) & 0xF;
        apu.ch1.envelope_dir = (val & 0x08) ? 1 : -1;
        apu.ch1.envelope_period = val & 7;
        break;
    case 0x13: /* NR13 */
        apu.ch1.frequency = (apu.ch1.frequency & 0x700) | val;
        break;
    case 0x14: /* NR14 */
        apu.ch1.frequency = (apu.ch1.frequency & 0xFF) | ((val & 7) << 8);
        apu.ch1.length_enabled = val & 0x40;
        if (val & 0x80) trigger_pulse(&apu.ch1, true);
        break;

    /* Channel 2 - Pulse */
    case 0x16: /* NR21 */
        apu.ch2.duty = (val >> 6) & 3;
        apu.ch2.length = 64 - (val & 0x3F);
        break;
    case 0x17: /* NR22 */
        apu.ch2.volume_init = (val >> 4) & 0xF;
        apu.ch2.envelope_dir = (val & 0x08) ? 1 : -1;
        apu.ch2.envelope_period = val & 7;
        break;
    case 0x18: /* NR23 */
        apu.ch2.frequency = (apu.ch2.frequency & 0x700) | val;
        break;
    case 0x19: /* NR24 */
        apu.ch2.frequency = (apu.ch2.frequency & 0xFF) | ((val & 7) << 8);
        apu.ch2.length_enabled = val & 0x40;
        if (val & 0x80) trigger_pulse(&apu.ch2, false);
        break;

    /* Channel 3 - Wave */
    case 0x1A: /* NR30 */
        apu.ch3.dac_enabled = val & 0x80;
        if (!apu.ch3.dac_enabled) apu.ch3.enabled = false;
        break;
    case 0x1B: /* NR31 */
        apu.ch3.length = 256 - val;
        break;
    case 0x1C: /* NR32 */
        apu.ch3.volume_code = (val >> 5) & 3;
        break;
    case 0x1D: /* NR33 */
        apu.ch3.frequency = (apu.ch3.frequency & 0x700) | val;
        break;
    case 0x1E: /* NR34 */
        apu.ch3.frequency = (apu.ch3.frequency & 0xFF) | ((val & 7) << 8);
        apu.ch3.length_enabled = val & 0x40;
        if (val & 0x80) trigger_wave(&apu.ch3);
        break;

    /* Channel 4 - Noise */
    case 0x20: /* NR41 */
        apu.ch4.length = 64 - (val & 0x3F);
        break;
    case 0x21: /* NR42 */
        apu.ch4.volume_init = (val >> 4) & 0xF;
        apu.ch4.envelope_dir = (val & 0x08) ? 1 : -1;
        apu.ch4.envelope_period = val & 7;
        break;
    case 0x22: /* NR43 */
        apu.ch4.clock_shift = (val >> 4) & 0xF;
        apu.ch4.width_mode = val & 0x08;
        apu.ch4.divisor = val & 7;
        break;
    case 0x23: /* NR44 */
        apu.ch4.length_enabled = val & 0x40;
        if (val & 0x80) trigger_noise(&apu.ch4);
        break;

    /* Master controls */
    case 0x24: /* NR50 */
        apu.left_volume = (val >> 4) & 7;
        apu.right_volume = val & 7;
        break;
    case 0x25: /* NR51 */
        apu.channel_select = val;
        break;
    case 0x26: /* NR52 */
        apu.master_enable = val & 0x80;
        if (!apu.master_enable) {
            apu.ch1.enabled = false;
            apu.ch2.enabled = false;
            apu.ch3.enabled = false;
            apu.ch4.enabled = false;
        }
        break;

    default:
        /* Wave RAM $FF30-$FF3F */
        if (reg >= 0x30 && reg <= 0x3F) {
            apu.ch3.wave_ram[reg - 0x30] = val;
        }
        break;
    }
}

uint8_t apu_read_reg(uint8_t reg) {
    if (reg == 0x26) {
        uint8_t val = apu.master_enable ? 0x80 : 0;
        if (apu.ch1.enabled) val |= 0x01;
        if (apu.ch2.enabled) val |= 0x02;
        if (apu.ch3.enabled) val |= 0x04;
        if (apu.ch4.enabled) val |= 0x08;
        return val | 0x70;
    }
    if (reg >= 0x30 && reg <= 0x3F) {
        return apu.ch3.wave_ram[reg - 0x30];
    }
    return gb.io[reg];
}

static int8_t sample_pulse(pulse_channel_t *ch) {
    if (!ch->enabled) return 0;
    return duty_table[ch->duty][ch->duty_pos] ? ch->volume : -ch->volume;
}

static int8_t sample_wave(wave_channel_t *ch) {
    if (!ch->enabled || !ch->dac_enabled) return 0;
    uint8_t sample = ch->wave_ram[ch->pos / 2];
    if (ch->pos & 1) sample &= 0x0F;
    else sample >>= 4;

    static const uint8_t shift_table[4] = {4, 0, 1, 2};
    sample >>= shift_table[ch->volume_code];
    return (int8_t)(sample) - 8;
}

static int8_t sample_noise(noise_channel_t *ch) {
    if (!ch->enabled) return 0;
    return (ch->lfsr & 1) ? -ch->volume : ch->volume;
}

static void tick_pulse(pulse_channel_t *ch) {
    if (ch->timer > 0) {
        ch->timer--;
    } else {
        ch->timer = (2048 - ch->frequency) * 4;
        ch->duty_pos = (ch->duty_pos + 1) & 7;
    }
}

static void tick_wave(wave_channel_t *ch) {
    if (ch->timer > 0) {
        ch->timer--;
    } else {
        ch->timer = (2048 - ch->frequency) * 2;
        ch->pos = (ch->pos + 1) % 32;
    }
}

static void tick_noise(noise_channel_t *ch) {
    if (ch->timer > 0) {
        ch->timer--;
    } else {
        ch->timer = divisor_table[ch->divisor] << ch->clock_shift;
        uint8_t xor_bit = (ch->lfsr & 1) ^ ((ch->lfsr >> 1) & 1);
        ch->lfsr >>= 1;
        ch->lfsr |= xor_bit << 14;
        if (ch->width_mode) {
            ch->lfsr &= ~(1 << 6);
            ch->lfsr |= xor_bit << 6;
        }
    }
}

static void tick_envelope(pulse_channel_t *ch) {
    if (ch->envelope_period == 0) return;
    ch->envelope_timer--;
    if (ch->envelope_timer <= 0) {
        ch->envelope_timer = ch->envelope_period;
        int new_vol = ch->volume + ch->envelope_dir;
        if (new_vol >= 0 && new_vol <= 15) {
            ch->volume = new_vol;
        }
    }
}

static void tick_noise_envelope(noise_channel_t *ch) {
    if (ch->envelope_period == 0) return;
    ch->envelope_timer--;
    if (ch->envelope_timer <= 0) {
        ch->envelope_timer = ch->envelope_period;
        int new_vol = ch->volume + ch->envelope_dir;
        if (new_vol >= 0 && new_vol <= 15) {
            ch->volume = new_vol;
        }
    }
}

static void tick_sweep(pulse_channel_t *ch) {
    if (!ch->sweep_enabled || ch->sweep_period == 0) return;
    ch->sweep_timer--;
    if (ch->sweep_timer <= 0) {
        ch->sweep_timer = ch->sweep_period;
        uint16_t new_freq = ch->sweep_shadow >> ch->sweep_shift;
        if (ch->sweep_negate)
            new_freq = ch->sweep_shadow - new_freq;
        else
            new_freq = ch->sweep_shadow + new_freq;

        if (new_freq > 2047) {
            ch->enabled = false;
        } else if (ch->sweep_shift) {
            ch->sweep_shadow = new_freq;
            ch->frequency = new_freq;
        }
    }
}

static void tick_length(void) {
    if (apu.ch1.length_enabled && apu.ch1.length > 0) {
        apu.ch1.length--;
        if (apu.ch1.length == 0) apu.ch1.enabled = false;
    }
    if (apu.ch2.length_enabled && apu.ch2.length > 0) {
        apu.ch2.length--;
        if (apu.ch2.length == 0) apu.ch2.enabled = false;
    }
    if (apu.ch3.length_enabled && apu.ch3.length > 0) {
        apu.ch3.length--;
        if (apu.ch3.length == 0) apu.ch3.enabled = false;
    }
    if (apu.ch4.length_enabled && apu.ch4.length > 0) {
        apu.ch4.length--;
        if (apu.ch4.length == 0) apu.ch4.enabled = false;
    }
}

void apu_audio_callback(void *userdata, uint8_t *stream, int len) {
    (void)userdata;
    int16_t *buf = (int16_t *)stream;
    int samples = len / (2 * sizeof(int16_t)); /* stereo */

    if (!apu.master_enable) {
        memset(stream, 0, len);
        return;
    }

    for (int i = 0; i < samples; i++) {
        /* Tick channels for one sample worth of CPU cycles */
        int cycles = (int)apu.sample_period;
        for (int c = 0; c < cycles; c++) {
            tick_pulse(&apu.ch1);
            tick_pulse(&apu.ch2);
            tick_wave(&apu.ch3);
            tick_noise(&apu.ch4);
        }

        /* Frame sequencer (~512 Hz) */
        apu.frame_seq_counter += cycles;
        if (apu.frame_seq_counter >= 8192) {
            apu.frame_seq_counter -= 8192;
            apu.frame_seq_step = (apu.frame_seq_step + 1) & 7;

            if ((apu.frame_seq_step & 1) == 0) tick_length();
            if (apu.frame_seq_step == 7) {
                tick_envelope(&apu.ch1);
                tick_envelope(&apu.ch2);
                tick_noise_envelope(&apu.ch4);
            }
            if (apu.frame_seq_step == 2 || apu.frame_seq_step == 6) {
                tick_sweep(&apu.ch1);
            }
        }

        /* Mix channels */
        int8_t s1 = sample_pulse(&apu.ch1);
        int8_t s2 = sample_pulse(&apu.ch2);
        int8_t s3 = sample_wave(&apu.ch3);
        int8_t s4 = sample_noise(&apu.ch4);

        int16_t left = 0, right = 0;
        if (apu.channel_select & 0x10) left += s1;
        if (apu.channel_select & 0x20) left += s2;
        if (apu.channel_select & 0x40) left += s3;
        if (apu.channel_select & 0x80) left += s4;
        if (apu.channel_select & 0x01) right += s1;
        if (apu.channel_select & 0x02) right += s2;
        if (apu.channel_select & 0x04) right += s3;
        if (apu.channel_select & 0x08) right += s4;

        /* Scale to int16 range */
        left = (left * (apu.left_volume + 1)) * 64;
        right = (right * (apu.right_volume + 1)) * 64;

        buf[i * 2] = left;
        buf[i * 2 + 1] = right;
    }
}

void apu_tick(uint32_t cycles) {
    /* Ticking is handled in the audio callback for proper sample rate */
    (void)cycles;
}
