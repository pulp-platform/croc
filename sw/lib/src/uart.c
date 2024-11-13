// Copyright 2022 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Nils Wistoff <nwistoff@iis.ee.ethz.ch>
// Paul Scheffler <paulsc@iis.ee.ethz.ch>

#include "uart.h"
#include "util.h"
#include "config.h"

#define UART_DIVISOR(freq, baud) ((freq) / ((baud) << 4))  // Divisor calculation

void uart_init() {
    const uint16_t divisor = UART_DIVISOR(UART_FREQ, UART_BAUD); // Calculate from provided config
    uint8_t dlo = (uint8_t)(divisor);
    uint8_t dhi = (uint8_t)(divisor >> 8);
    *reg8(UART_BASE_ADDR, UART_INTR_ENABLE_REG_OFFSET) = 0x00;   // Disable all interrupts
    *reg8(UART_BASE_ADDR, UART_LINE_CONTROL_REG_OFFSET) = 0x80;  // Enable DLAB (set baud rate divisor)
    *reg8(UART_BASE_ADDR, UART_DLAB_LSB_REG_OFFSET) = dlo;       // divisor (lo byte)
    *reg8(UART_BASE_ADDR, UART_DLAB_MSB_REG_OFFSET) = dhi;       // divisor (hi byte)
    *reg8(UART_BASE_ADDR, UART_LINE_CONTROL_REG_OFFSET) = 0x03;  // 8 bits, no parity, one stop bit
    *reg8(UART_BASE_ADDR, UART_FIFO_CONTROL_REG_OFFSET) = 0xC7;  // Enable & clear FIFO, 14B threshold
    *reg8(UART_BASE_ADDR, UART_MODEM_CONTROL_REG_OFFSET) = 0x20; // Autoflow mode
}

int uart_read_ready() {
    return *reg8(UART_BASE_ADDR, UART_LINE_STATUS_REG_OFFSET) & (1 << UART_LINE_STATUS_DATA_READY_BIT);
}

static inline int __uart_write_ready() {
    return *reg8(UART_BASE_ADDR, UART_LINE_STATUS_REG_OFFSET) & (1 << UART_LINE_STATUS_THR_EMPTY_BIT);
}

static inline int __uart_write_idle() {
    return __uart_write_ready() &&
           *reg8(UART_BASE_ADDR, UART_LINE_STATUS_REG_OFFSET) & (1 << UART_LINE_STATUS_TMIT_EMPTY_BIT);
}

void uart_write(uint8_t byte) {
    while (!__uart_write_ready())
        ;
    *reg8(UART_BASE_ADDR, UART_THR_REG_OFFSET) = byte;
}

void uart_write_str(void *src, uint32_t len) {
    for (uint32_t i = 0; i < len; ++i) uart_write(((uint8_t *)src)[i]);
}

void uart_write_flush() {
    while (!__uart_write_idle())
        ;
}

uint8_t uart_read() {
    while (!uart_read_ready())
        ;
    return *reg8(UART_BASE_ADDR, UART_RBR_REG_OFFSET);
}

void uart_read_str(void *dst, uint32_t len) {
    for (uint32_t i = 0; i < len; ++i) ((uint8_t *)dst)[i] = uart_read();
}

void putchar(char byte) {
    uart_write(byte);
};

char getchar() {
    return uart_read();
};
