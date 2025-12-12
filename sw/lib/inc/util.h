// Copyright 2022 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Nicole Narr <narrn@student.ethz.ch>
// Christopher Reinwardt <creinwar@student.ethz.ch>
// Paul Scheffler <paulsc@iis.ee.ethz.ch>

#pragma once

#include <stdint.h>

static inline volatile uint8_t *reg8(const unsigned int base, int offs) {
    return (volatile uint8_t *)(base + offs);
}

static inline volatile uint32_t *reg32(const unsigned int base, int offs) {
    return (volatile uint32_t *)(base + offs);
}

static inline void fence() {
    asm volatile("fence" ::: "memory");
}

static inline void fencei() {
    asm volatile("fence.i" ::: "memory");
}

static inline void wfi() {
    asm volatile("wfi" ::: "memory");
}

static inline uint32_t get_mstatus() {
    uint32_t mstatus;
    asm volatile("csrr %0, mstatus" : "=r"(mstatus)::"memory");
    return mstatus;
}

static inline uint32_t get_mie() {
    uint32_t mie;
    asm volatile("csrr %0, mie" : "=r"(mie)::"memory");
    return mie;
}

// Enables or disables interrupts for interrupt `irq`.
static inline void set_interrupt_enable(int enable, int irq) {
    if (irq <= 0 || irq > 30) return;
    if (enable)
        asm volatile("csrs mie, %0" ::"r"(1 << irq) : "memory");
    else
        asm volatile("csrc mie, %0" ::"r"(1 << irq) : "memory");
}

// Enables or disables M-mode global interrupts.
static inline void set_global_irq_enable(int enable) {
    if (enable)
        asm volatile("csrsi mstatus, 8" ::: "memory");
    else
        asm volatile("csrci mstatus, 8" ::: "memory");
}

// Get mcause CSR
static inline uint32_t get_mcause() {
    uint32_t mcause;
    asm volatile("csrr %0, mcause" : "=r"(mcause)::"memory");
    return mcause;
}

// Get cycle count since reset
static inline uint64_t get_mcycle() {
    uint64_t mcycle;
    asm volatile("csrr %0, mcycle" : "=r"(mcycle)::"memory");
    return mcycle;
}

// This may also be used to invoke code that does not return.
static inline uint64_t invoke(void *code) {
    uint64_t (*code_fun_ptr)(void) = code;
    fencei();
    return code_fun_ptr();
}

// Set global pointer and return prior value. Use with caution.
static inline void *gprw(void *gp) {
    void *ret;
    asm volatile("mv %0, gp" : "=r"(ret)::"memory");
    if (gp) asm volatile("mv gp, %0" ::"r"(gp) : "memory", "gp");
    return ret;
}

// If a call yields a nonzero return, return that immediately as an int.
#define CHECK_CALL(call) \
    { \
        int __ccret = (volatile int)(call); \
        if (__ccret) return __ccret; \
    }

// If a condition; if it is untrue, ummediately return an error code.
#define CHECK_ASSERT(ret, cond) \
    if (!(cond)) return (ret);

#define MIN(a, b) (((a) <= (b)) ? (a) : (b))
