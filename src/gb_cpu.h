#ifndef GB_CPU_H
#define GB_CPU_H

#include "gb_runtime.h"

/* 8-bit ALU operations */
static inline uint8_t alu_add8(uint8_t a, uint8_t b) {
    uint16_t r = a + b;
    SET_FLAGS((uint8_t)r == 0, 0, (a ^ b ^ r) & 0x10, r > 0xFF);
    return (uint8_t)r;
}

static inline uint8_t alu_adc8(uint8_t a, uint8_t b) {
    uint8_t carry = GET_FLAG_C() ? 1 : 0;
    uint16_t r = a + b + carry;
    SET_FLAGS((uint8_t)r == 0, 0, ((a & 0xF) + (b & 0xF) + carry) > 0xF, r > 0xFF);
    return (uint8_t)r;
}

static inline uint8_t alu_sub8(uint8_t a, uint8_t b) {
    uint16_t r = a - b;
    SET_FLAGS((uint8_t)r == 0, 1, (a ^ b ^ r) & 0x10, a < b);
    return (uint8_t)r;
}

static inline uint8_t alu_sbc8(uint8_t a, uint8_t b) {
    uint8_t carry = GET_FLAG_C() ? 1 : 0;
    int r = a - b - carry;
    SET_FLAGS((uint8_t)r == 0, 1, ((a & 0xF) - (b & 0xF) - carry) < 0, r < 0);
    return (uint8_t)r;
}

static inline uint8_t alu_and8(uint8_t a, uint8_t b) {
    uint8_t r = a & b;
    SET_FLAGS(r == 0, 0, 1, 0);
    return r;
}

static inline uint8_t alu_or8(uint8_t a, uint8_t b) {
    uint8_t r = a | b;
    SET_FLAGS(r == 0, 0, 0, 0);
    return r;
}

static inline uint8_t alu_xor8(uint8_t a, uint8_t b) {
    uint8_t r = a ^ b;
    SET_FLAGS(r == 0, 0, 0, 0);
    return r;
}

static inline void alu_cp8(uint8_t a, uint8_t b) {
    uint16_t r = a - b;
    SET_FLAGS((uint8_t)r == 0, 1, (a ^ b ^ r) & 0x10, a < b);
}

static inline uint8_t alu_inc8(uint8_t a) {
    uint8_t r = a + 1;
    SET_FLAG_Z(r == 0);
    SET_FLAG_N(0);
    SET_FLAG_H((a & 0xF) == 0xF);
    return r;
}

static inline uint8_t alu_dec8(uint8_t a) {
    uint8_t r = a - 1;
    SET_FLAG_Z(r == 0);
    SET_FLAG_N(1);
    SET_FLAG_H((a & 0xF) == 0);
    return r;
}

/* 16-bit operations */
static inline uint16_t alu_add16(uint16_t a, uint16_t b) {
    uint32_t r = a + b;
    SET_FLAG_N(0);
    SET_FLAG_H((a ^ b ^ r) & 0x1000);
    SET_FLAG_C(r > 0xFFFF);
    return (uint16_t)r;
}

static inline uint16_t alu_add_sp_signed(int8_t offset) {
    uint16_t sp = gb.regs.sp;
    uint16_t r = sp + offset;
    SET_FLAGS(0, 0,
              ((sp ^ offset ^ r) & 0x10) != 0,
              ((sp ^ offset ^ r) & 0x100) != 0);
    return r;
}

/* Rotate/shift operations */
static inline uint8_t alu_rlc(uint8_t a) {
    uint8_t c = (a >> 7) & 1;
    uint8_t r = (a << 1) | c;
    SET_FLAGS(r == 0, 0, 0, c);
    return r;
}

static inline uint8_t alu_rrc(uint8_t a) {
    uint8_t c = a & 1;
    uint8_t r = (a >> 1) | (c << 7);
    SET_FLAGS(r == 0, 0, 0, c);
    return r;
}

static inline uint8_t alu_rl(uint8_t a) {
    uint8_t old_c = GET_FLAG_C() ? 1 : 0;
    uint8_t c = (a >> 7) & 1;
    uint8_t r = (a << 1) | old_c;
    SET_FLAGS(r == 0, 0, 0, c);
    return r;
}

static inline uint8_t alu_rr(uint8_t a) {
    uint8_t old_c = GET_FLAG_C() ? 1 : 0;
    uint8_t c = a & 1;
    uint8_t r = (a >> 1) | (old_c << 7);
    SET_FLAGS(r == 0, 0, 0, c);
    return r;
}

static inline uint8_t alu_sla(uint8_t a) {
    uint8_t c = (a >> 7) & 1;
    uint8_t r = a << 1;
    SET_FLAGS(r == 0, 0, 0, c);
    return r;
}

static inline uint8_t alu_sra(uint8_t a) {
    uint8_t c = a & 1;
    uint8_t r = (a >> 1) | (a & 0x80);
    SET_FLAGS(r == 0, 0, 0, c);
    return r;
}

static inline uint8_t alu_srl(uint8_t a) {
    uint8_t c = a & 1;
    uint8_t r = a >> 1;
    SET_FLAGS(r == 0, 0, 0, c);
    return r;
}

static inline uint8_t alu_swap(uint8_t a) {
    uint8_t r = ((a & 0x0F) << 4) | ((a & 0xF0) >> 4);
    SET_FLAGS(r == 0, 0, 0, 0);
    return r;
}

/* Bit operations */
static inline void alu_bit(uint8_t bit, uint8_t a) {
    SET_FLAG_Z(!(a & (1 << bit)));
    SET_FLAG_N(0);
    SET_FLAG_H(1);
}

static inline uint8_t alu_set(uint8_t bit, uint8_t a) {
    return a | (1 << bit);
}

static inline uint8_t alu_res(uint8_t bit, uint8_t a) {
    return a & ~(1 << bit);
}

/* Special operations */
static inline void alu_daa(void) {
    uint8_t a = gb.regs.a;
    uint8_t correction = 0;
    bool set_c = false;

    if (GET_FLAG_N()) {
        if (GET_FLAG_C()) { correction |= 0x60; set_c = true; }
        if (GET_FLAG_H()) { correction |= 0x06; }
        a -= correction;
    } else {
        if (GET_FLAG_C() || a > 0x99) { correction |= 0x60; set_c = true; }
        if (GET_FLAG_H() || (a & 0x0F) > 0x09) { correction |= 0x06; }
        a += correction;
    }

    gb.regs.a = a;
    SET_FLAG_Z(a == 0);
    SET_FLAG_H(0);
    SET_FLAG_C(set_c);
}

static inline void alu_cpl(void) {
    gb.regs.a = ~gb.regs.a;
    SET_FLAG_N(1);
    SET_FLAG_H(1);
}

static inline void alu_scf(void) {
    SET_FLAG_N(0);
    SET_FLAG_H(0);
    SET_FLAG_C(1);
}

static inline void alu_ccf(void) {
    SET_FLAG_N(0);
    SET_FLAG_H(0);
    SET_FLAG_C(!GET_FLAG_C());
}

/* RLCA/RRCA/RLA/RRA - like RL/RR but always clear Z */
static inline void alu_rlca(void) {
    uint8_t c = (gb.regs.a >> 7) & 1;
    gb.regs.a = (gb.regs.a << 1) | c;
    SET_FLAGS(0, 0, 0, c);
}

static inline void alu_rrca(void) {
    uint8_t c = gb.regs.a & 1;
    gb.regs.a = (gb.regs.a >> 1) | (c << 7);
    SET_FLAGS(0, 0, 0, c);
}

static inline void alu_rla(void) {
    uint8_t old_c = GET_FLAG_C() ? 1 : 0;
    uint8_t c = (gb.regs.a >> 7) & 1;
    gb.regs.a = (gb.regs.a << 1) | old_c;
    SET_FLAGS(0, 0, 0, c);
}

static inline void alu_rra(void) {
    uint8_t old_c = GET_FLAG_C() ? 1 : 0;
    uint8_t c = gb.regs.a & 1;
    gb.regs.a = (gb.regs.a >> 1) | (old_c << 7);
    SET_FLAGS(0, 0, 0, c);
}

#endif /* GB_CPU_H */
