// Copyright (c) 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "uart.h"
#include "print.h"
#include "timer.h"
#include "gpio.h"
#include "util.h"

/// @brief Example integer square root
/// @return integer square root of n
uint32_t isqrt(uint32_t n) {
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
    uart_init(); // setup the uart peripheral

    // simple printf support (only prints text and hex numbers)
    printf("Hello World!\n");
    // wait until uart has finished sending

    *reg32(SDHCI_BASE_ADDR, 0) = *(uint32_t*) "SDHC";
    printf("Write Success!\n");
    uint32_t read[2] = { 0 };
    read[0] = *reg32(SDHCI_BASE_ADDR, 0);
    printf("Read Success: '%s'\n", (char*) &read);

    // *reg32(SDHCI_BASE_ADDR, 0x00C) = 0;

    uint32_t state = *reg32(SDHCI_BASE_ADDR, SDHCI_PRESENT_STATE_OFFSET);
    printf("Read Present State: '%x'\n", state);

    *reg8(SDHCI_BASE_ADDR, SDHCI_COMMAND_OFFSET + 1) = 0;
    printf("Wrote to Command Index\n");

    state = *reg32(SDHCI_BASE_ADDR, SDHCI_PRESENT_STATE_OFFSET);
    printf("Read Present State: '%x'\n", state);

    uart_write_flush();
    return 1;
}
