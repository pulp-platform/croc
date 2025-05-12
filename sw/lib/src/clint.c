// Copyright 2025 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

#include "clint.h"
#include "util.h"
#include "config.h"

uint64_t clint_get_mtime() {
    uint64_t mtime;
    mtime = ((uint64_t)*reg32(CLINT_BASE_ADDR, CLINT_MTIME_HIGH_REG_OFFSET)) << 32;
    mtime |= ((uint64_t)*reg32(CLINT_BASE_ADDR, CLINT_MTIME_LOW_REG_OFFSET));
    return mtime;
}

void clint_set_mtimecmp(uint64_t value) {
    // Avoid spurious interrupts by writing the high register first
    uint32_t value_high = (uint32_t)(value >> 32);
    uint32_t value_low = (uint32_t)(value);
    *reg32(CLINT_BASE_ADDR, CLINT_MTIMECMP_HIGH0_REG_OFFSET) = value_high;
    *reg32(CLINT_BASE_ADDR, CLINT_MTIMECMP_LOW0_REG_OFFSET) = value_low;
}

void clint_sleep_ticks(uint32_t ticks) {
    uint64_t value = clint_get_mtime() + ticks;
    clint_set_mtimecmp(value);
    fence();
    // Enable timer and global interrupts
    uint32_t mie_before = get_mie();
    uint32_t mstatus_before = get_mstatus();
    int timer_irq_enabled = (mie_before >> IRQ_TIMER) & 0x1;
    int global_irq_enabled = (mstatus_before >> 3) & 0x1;

    set_interrupt_enable(1, IRQ_TIMER);
    set_global_irq_enable(1);
    // Wait for interrupt
    wfi();

    if (!timer_irq_enabled) set_interrupt_enable(0, IRQ_TIMER);
    if (!global_irq_enabled) set_global_irq_enable(0);
}

void clint_sleep_ms(uint32_t ms) {
    // RTC frequency: 32.768 kHz
    // 1ms <-> 32.768 ticks ~= 33 ticks
    clint_sleep_ticks(33 * ms);
}
