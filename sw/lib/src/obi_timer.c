// Copyright 2025 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

#include "obi_timer.h"
#include "util.h"
#include "config.h"

uint32_t obi_timer_get_count() {
    uint32_t count = *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_COUNT_OFFSET);
    return count;
}

void obi_timer_set_count(uint32_t value) {
    *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_COUNT_OFFSET) = value;
}

uint32_t obi_timer_get_compare() {
    uint32_t compare = *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_COMPARE_OFFSET);
    return compare;
}

void obi_timer_set_compare(uint32_t value) {
    *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_COMPARE_OFFSET) = value;
}

uint32_t obi_timer_get_enable() {
    uint32_t enable = *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_ENABLE_OFFSET);
    return enable;
}

void obi_timer_enable() {
    *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_ENABLE_OFFSET) = 0x01;
}

void obi_timer_disable() {
    *reg32(OBI_TIMER_BASE_ADDR, OBI_TIMER_ENABLE_OFFSET) = 0x00;
}

// Reset the timer to trigger an interrupt after `cycles` clock cycles
void obi_timer_set(uint32_t cycles) {
    // Disable the timer
    obi_timer_disable();
    // Reset count value
    obi_timer_set_count(0);
    // Set compare value to `cycles`
    obi_timer_set_compare(cycles);
    // Re-enable the timer
    obi_timer_enable();
}

// Set the timer and wait for interrupt to arrive
// WARNING: make sure to have a proper interrupt
//          handler for timer interrupts
void obi_timer_sleep(uint32_t cycles) {
    obi_timer_set(cycles);
    set_interrupt_enable(1, IRQ_OBI_TIMER);
    set_global_irq_enable(1);
    wfi();
}
