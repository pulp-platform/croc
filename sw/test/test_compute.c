// Copyright (c) 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "util.h"

// Integer square root (same algorithm as helloworld.c)
static uint32_t isqrt(uint32_t n) {
    uint32_t res = 0;
    uint32_t bit = (uint32_t)1 << 30;
    while (bit > n) bit >>= 2;
    while (bit) {
        if (n >= res + bit) {
            n -= res + bit;
            res = (res >> 1) + bit;
        } else {
            res >>= 1;
        }
        bit >>= 2;
    }
    return res;
}

int main() {
    // Basic ALU: add, sub
    volatile uint32_t a = 100, b = 42;
    CHECK_ASSERT(1, a + b == 142);
    CHECK_ASSERT(2, a - b == 58);

    // Shifts
    CHECK_ASSERT(3, (a << 2) == 400);
    CHECK_ASSERT(4, (a >> 2) == 25);

    // Logical ops
    CHECK_ASSERT(5, (0xFF00 & 0x0FF0) == 0x0F00);
    CHECK_ASSERT(6, (0xFF00 | 0x0FF0) == 0xFFF0);
    CHECK_ASSERT(7, (0xFF00 ^ 0x0FF0) == 0xF0F0);

    // CSR: read mcycle (should be non-zero since we've been running)
    uint64_t cyc = get_mcycle();
    CHECK_ASSERT(8, cyc > 0);

    // CSR: read mhartid (should be 0 for single-core)
    uint32_t hartid;
    asm volatile("csrr %0, mhartid" : "=r"(hartid));
    CHECK_ASSERT(9, hartid == 0);

    // Memory load/store pattern
    volatile uint32_t mem_test[4];
    mem_test[0] = 0xDEADBEEF;
    mem_test[1] = 0x12345678;
    mem_test[2] = mem_test[0] ^ mem_test[1];
    mem_test[3] = mem_test[0] + mem_test[1];
    CHECK_ASSERT(10, mem_test[2] == (0xDEADBEEF ^ 0x12345678));
    CHECK_ASSERT(11, mem_test[3] == (0xDEADBEEF + 0x12345678));

    // Integer square root: isqrt(1234567890) = 35136 (0x8940)
    uint32_t res = isqrt(1234567890UL);
    CHECK_ASSERT(12, res == 0x8940);

    return 0;
}
