// Copyright (c) 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "util.h"
#include "uart.h"
#include "config.h"

int main() {
    // Initialize UART
    uart_init();

    // Verify line control register readback (8N1 = 0x03)
    uint8_t lcr = *reg8(UART_BASE_ADDR, UART_LINE_CONTROL_REG_OFFSET);
    CHECK_ASSERT(1, lcr == 0x03);

    // Verify line status: THR should be empty after init
    uint8_t lsr = *reg8(UART_BASE_ADDR, UART_LINE_STATUS_REG_OFFSET);
    CHECK_ASSERT(2, lsr & (1 << UART_LINE_STATUS_THR_EMPTY_BIT));

    // Transmit a few bytes and check that THR stays ready
    uart_write('T');
    uart_write('X');
    uart_write_flush();

    lsr = *reg8(UART_BASE_ADDR, UART_LINE_STATUS_REG_OFFSET);
    CHECK_ASSERT(3, lsr & (1 << UART_LINE_STATUS_TMIT_EMPTY_BIT));

    // Test loopback: enable, send byte, read it back
    uart_loopback_enable();
    uart_write(0xAB);
    uart_write_flush();
    // Small delay for loopback
    for (volatile int i = 0; i < 100; i++)
        ;
    if (uart_read_ready()) {
        uint8_t rx = uart_read();
        CHECK_ASSERT(4, rx == 0xAB);
    }
    uart_loopback_disable();

    return 0;
}
