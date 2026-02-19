// Copyright (c) 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "util.h"
#include "clint.h"
#include "config.h"

int main() {
    // Read mtime and verify it advances
    uint64_t t1 = clint_get_mtime();
    for (volatile int i = 0; i < 100; i++)
        ;
    uint64_t t2 = clint_get_mtime();
    CHECK_ASSERT(1, t2 > t1);

    // Write mtimecmp and verify readback
    clint_set_mtimecmp(0xFFFFFFFFFFFFFFFFULL);
    uint32_t cmp_lo = *reg32(CLINT_BASE_ADDR, CLINT_MTIMECMP_LOW0_REG_OFFSET);
    uint32_t cmp_hi = *reg32(CLINT_BASE_ADDR, CLINT_MTIMECMP_HIGH0_REG_OFFSET);
    CHECK_ASSERT(2, cmp_lo == 0xFFFFFFFF);
    CHECK_ASSERT(3, cmp_hi == 0xFFFFFFFF);

    clint_set_mtimecmp(0x0000000100000000ULL);
    cmp_lo = *reg32(CLINT_BASE_ADDR, CLINT_MTIMECMP_LOW0_REG_OFFSET);
    cmp_hi = *reg32(CLINT_BASE_ADDR, CLINT_MTIMECMP_HIGH0_REG_OFFSET);
    CHECK_ASSERT(4, cmp_lo == 0x00000000);
    CHECK_ASSERT(5, cmp_hi == 0x00000001);

    // Test MSIP register: write and readback
    *reg32(CLINT_BASE_ADDR, CLINT_MSIP_REG_OFFSET) = 0x1;
    uint32_t msip = *reg32(CLINT_BASE_ADDR, CLINT_MSIP_REG_OFFSET);
    CHECK_ASSERT(6, msip & 0x1);

    // Clear MSIP
    *reg32(CLINT_BASE_ADDR, CLINT_MSIP_REG_OFFSET) = 0x0;
    msip = *reg32(CLINT_BASE_ADDR, CLINT_MSIP_REG_OFFSET);
    CHECK_ASSERT(7, (msip & 0x1) == 0);

    // Disable timer interrupt to avoid pending interrupt issues
    clint_set_mtimecmp(0xFFFFFFFFFFFFFFFFULL);

    return 0;
}
