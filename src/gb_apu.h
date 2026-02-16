#ifndef GB_APU_H
#define GB_APU_H

#include <stdint.h>
#include <stdbool.h>

#define APU_SAMPLE_RATE 44100
#define APU_BUFFER_SIZE 2048

/* Channel types */
typedef struct {
    bool enabled;
    uint16_t frequency;
    uint8_t duty;
    uint8_t volume;
    uint8_t volume_init;
    int8_t envelope_dir;
    uint8_t envelope_period;
    uint8_t envelope_timer;
    uint32_t timer;
    uint8_t duty_pos;
    /* Sweep (channel 1 only) */
    uint8_t sweep_period;
    uint8_t sweep_shift;
    bool sweep_negate;
    uint8_t sweep_timer;
    uint16_t sweep_shadow;
    bool sweep_enabled;
    uint8_t length;
    bool length_enabled;
} pulse_channel_t;

typedef struct {
    bool enabled;
    uint16_t frequency;
    uint8_t volume_code;
    uint32_t timer;
    uint8_t pos;
    uint8_t wave_ram[16];
    uint8_t length;
    bool length_enabled;
    bool dac_enabled;
} wave_channel_t;

typedef struct {
    bool enabled;
    uint8_t volume;
    uint8_t volume_init;
    int8_t envelope_dir;
    uint8_t envelope_period;
    uint8_t envelope_timer;
    uint32_t timer;
    uint16_t lfsr;
    uint8_t clock_shift;
    bool width_mode;
    uint8_t divisor;
    uint8_t length;
    bool length_enabled;
} noise_channel_t;

typedef struct {
    pulse_channel_t ch1;
    pulse_channel_t ch2;
    wave_channel_t  ch3;
    noise_channel_t ch4;

    bool master_enable;
    uint8_t left_volume;
    uint8_t right_volume;
    uint8_t channel_select; /* NR51 */

    /* Frame sequencer */
    uint32_t frame_seq_counter;
    uint8_t frame_seq_step;

    /* Sample generation */
    float sample_timer;
    float sample_period;
} apu_state_t;

extern apu_state_t apu;

void apu_init(void);
void apu_write_reg(uint8_t reg, uint8_t val);
uint8_t apu_read_reg(uint8_t reg);
void apu_audio_callback(void *userdata, uint8_t *stream, int len);
void apu_tick(uint32_t cycles);

#endif /* GB_APU_H */
