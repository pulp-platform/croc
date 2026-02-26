// Copyright (c) 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "util.h"
#include "soc_ctrl.h"
#include "config.h"

// Boot target function: the bootrom will jump here after we change BOOTADDR.
// The bootrom sets ra = _eoc before jumping, so returning goes to _eoc which
// encodes the return value in CORESTATUS and halts.
// Return 0 = success (CORESTATUS = 0x1 = pass).
__attribute__((noinline, used)) static int boot_target(void) {
    return 0;
}

// Bootrom boot sequence address: the "read BOOTADDR + jump" code
// starts at 0x0200_005C in the bootrom (see bootrom.sv / bootrom.S):
#define BOOTROM_BOOT_SEQ_ADDR 0x02000050

int main() {
    volatile uint32_t val;

    // Test BOOTADDR register: write and readback
    *reg32(SOCCTRL_BASE_ADDR, SOC_CTRL_BOOTADDR_REG_OFFSET) = 0xDEAD0000;
    val = *reg32(SOCCTRL_BASE_ADDR, SOC_CTRL_BOOTADDR_REG_OFFSET);
    CHECK_ASSERT(1, val == 0xDEAD0000);

    *reg32(SOCCTRL_BASE_ADDR, SOC_CTRL_BOOTADDR_REG_OFFSET) = 0x10000000;
    val = *reg32(SOCCTRL_BASE_ADDR, SOC_CTRL_BOOTADDR_REG_OFFSET);
    CHECK_ASSERT(2, val == 0x10000000);

    // Test FETCHEN register: write and readback
    *reg32(SOCCTRL_BASE_ADDR, SOC_CTRL_FETCHEN_REG_OFFSET) = 0x1;
    val = *reg32(SOCCTRL_BASE_ADDR, SOC_CTRL_FETCHEN_REG_OFFSET);
    CHECK_ASSERT(3, val == 0x1);

    // Test CORESTATUS register: write and readback
    *reg32(SOCCTRL_BASE_ADDR, SOC_CTRL_CORESTATUS_REG_OFFSET) = 0x00007357;
    val = *reg32(SOCCTRL_BASE_ADDR, SOC_CTRL_CORESTATUS_REG_OFFSET);
    CHECK_ASSERT(4, val == 0x00007357);

    // --- Bootrom BOOTADDR jump test ---
    // Set BOOTADDR to our boot_target function, then jump into the bootrom's
    // boot sequence. The bootrom reads BOOTADDR, sets ra = _eoc, and jumps
    // to boot_target. boot_target returns 0 → _eoc → CORESTATUS = 0x1 (pass).
    // If bootrom reads the wrong address, it jumps to garbage and crashes.
    *reg32(SOCCTRL_BASE_ADDR, SOC_CTRL_BOOTADDR_REG_OFFSET) = (uint32_t)boot_target;
    asm volatile("lui t0, %%hi(%0)\n"
                 "addi t0, t0, %%lo(%0)\n"
                 "jalr zero, 0(t0)\n" ::"i"(BOOTROM_BOOT_SEQ_ADDR)
                 : "t0");

    // Should never reach here (bootrom _eoc halts with WFI)
    return 99;
}
