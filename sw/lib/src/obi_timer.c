// Copyright 2025 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

#include "obi_timer.h"
#include "util.h"
#include "config.h"

////////////////////////
//  Helper functions  //
////////////////////////

static inline uint32_t read_count_reg() {
    return *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_COUNT_OFFSET);
}

static inline uint32_t read_compare_reg() {
    return *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_COMPARE_OFFSET);
}

static inline uint32_t read_ctrl_reg() {
    return *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_CTRL_OFFSET);
}

static inline void write_count_reg(uint32_t value) {
    *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_COUNT_OFFSET) = value;
}

static inline void write_compare_reg(uint32_t value) {
    *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_COMPARE_OFFSET) = value;
}

static inline void write_ctrl_reg(uint32_t value) {
    *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_CTRL_OFFSET) = value;
}

// Write a single bit of the timer control register.
// Does not affect other bits.
static void write_ctrl_reg_bit(uint32_t bit, int enable) {
    uint32_t ctrl = read_ctrl_reg();
    if (enable)
        ctrl |= (1u << bit);
    else
        ctrl &= ~(1u << bit);
    write_ctrl_reg(ctrl);
}

static inline void write_status_reg(uint32_t value) {
    *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_STATUS_OFFSET) = value;
}

/////////////////////
//  OBI timer API  //
/////////////////////

uint32_t obi_timer_get_count() {
    return read_count_reg();
}

uint32_t obi_timer_get_compare() {
    return read_compare_reg();
}

int obi_timer_get_enable() {
    return (read_ctrl_reg() >> OBI_TIMER_CTRL_ENABLE_BIT) & 0x1;
}

int obi_timer_get_autoreset() {
    return (read_ctrl_reg() >> OBI_TIMER_CTRL_AUTORESET_BIT) & 0x1;
}

void obi_timer_set_count(uint32_t value) {
    write_count_reg(value);
}

void obi_timer_set_compare(uint32_t value) {
    write_compare_reg(value);
}

void obi_timer_set_enable(int enable) {
    write_ctrl_reg_bit(OBI_TIMER_CTRL_ENABLE_BIT, enable);
}

void obi_timer_set_autoreset(int enable) {
    write_ctrl_reg_bit(OBI_TIMER_CTRL_AUTORESET_BIT, enable);
}

void obi_timer_clear_expired() {
    write_status_reg(1u << OBI_TIMER_STATUS_EXPIRED_BIT);
}

void obi_timer_clear_overflow() {
    write_status_reg(1u << OBI_TIMER_STATUS_OVERFLOW_BIT);
}

// Reset the timer to trigger an interrupt after `cycles` clock cycles
void obi_timer_set(uint32_t cycles) {
    // Disable the timer
    obi_timer_set_enable(0);
    // Reset count value
    obi_timer_set_count(0);
    // Set autoreset mode
    obi_timer_set_autoreset(1);
    // Set compare value to `cycles`
    obi_timer_set_compare(cycles);
    // Re-enable the timer
    obi_timer_set_enable(1);
}

// Set the timer and wait for interrupt to arrive
// WARNING: make sure to have a proper interrupt
//          handler for timer interrupts
void obi_timer_sleep(uint32_t cycles) {
    uint32_t mie_before = get_mie();
    uint32_t mstatus_before = get_mstatus();
    int timer_irq_enabled = (mie_before >> IRQ_OBI_TIMER) & 0x1;
    int global_irq_enabled = (mstatus_before >> 3) & 0x1;

    obi_timer_set(cycles);
    set_interrupt_enable(1, IRQ_OBI_TIMER);
    set_global_irq_enable(1);
    wfi();

    if (!timer_irq_enabled) set_interrupt_enable(0, IRQ_OBI_TIMER);
    if (!global_irq_enabled) set_global_irq_enable(0);
}
