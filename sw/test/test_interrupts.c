// Copyright (c) 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "util.h"
#include "obi_timer.h"
#include "config.h"

// Bootrom trap handler address (set as mtvec by bootrom during boot)
#define BOOTROM_TRAP_HANDLER 0x02000200

// SRAM vector table addresses (read by bootrom trap handler)
#define SRAM_VEC_EXCEPTION 0x10000004
#define SRAM_VEC_INTERRUPT 0x10000008

static volatile int irq_fired = 0;
static volatile uint32_t irq_cause = 0;

// Override weak default handler from crt0.S.
// The bootrom trap handler dispatches here via the SRAM function pointer
// at 0x1000_0008, proving the full bootrom→vector table→handler chain works.
void croc_interrupt_handler(uint32_t cause) {
    irq_cause = cause;
    if (cause == IRQ_OBI_TIMER) {
        obi_timer_clear_expired();
        irq_fired = 1;
    }
}

int main() {
    // --- Verify bootrom interrupt vector mapping ---

    // Check mtvec points to bootrom trap handler (set during boot)
    uint32_t mtvec;
    asm volatile("csrr %0, mtvec" : "=r"(mtvec));
    CHECK_ASSERT(1, mtvec == BOOTROM_TRAP_HANDLER);

    // Check SRAM vector table entries point to our handlers
    uint32_t exc_handler = *(volatile uint32_t *)SRAM_VEC_EXCEPTION;
    uint32_t irq_handler = *(volatile uint32_t *)SRAM_VEC_INTERRUPT;
    CHECK_ASSERT(2, irq_handler == (uint32_t)croc_interrupt_handler);
    CHECK_ASSERT(3, exc_handler != 0);

    // --- Fire interrupt through bootrom trap handler chain ---
    // Flow: OBI timer expires → CPU traps to mtvec (0x0200_0200, bootrom)
    //     → bootrom reads mcause, loads handler from 0x1000_0008
    //     → calls croc_interrupt_handler → sets irq_fired
    //     → bootrom _trap_exit restores regs, mret

    obi_timer_set(500);
    set_interrupt_enable(1, IRQ_OBI_TIMER);
    set_global_irq_enable(1);

    // Wait for interrupt (with timeout)
    for (volatile int i = 0; i < 10000 && !irq_fired; i++)
        ;
    CHECK_ASSERT(4, irq_fired == 1);
    CHECK_ASSERT(5, irq_cause == IRQ_OBI_TIMER);

    // Disable timer and interrupts
    obi_timer_set_enable(0);
    set_interrupt_enable(0, IRQ_OBI_TIMER);
    set_global_irq_enable(0);

    // Verify global IRQs are disabled
    uint32_t mstatus = get_mstatus();
    CHECK_ASSERT(6, (mstatus & 0x8) == 0);

    return 0;
}
