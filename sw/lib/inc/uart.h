// Copyright 2022 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Nils Wistoff <nwistoff@iis.ee.ethz.ch>
// Paul Scheffler <paulsc@iis.ee.ethz.ch>

#pragma once

#include <stdint.h>
#include "config.h"

// Registers below can be aligned to a byte, word, dword etc
// UART_BYTE_ALIGN provides the number of bytes it is aligned to


// Register offsets
#define UART_RBR_REG_OFFSET           (0*UART_BYTE_ALIGN) // Receive Buffer Register
#define UART_THR_REG_OFFSET           (0*UART_BYTE_ALIGN) // Transmitter Holding Register
#define UART_INTR_ENABLE_REG_OFFSET   (1*UART_BYTE_ALIGN)
#define UART_INTR_IDENT_REG_OFFSET    (2*UART_BYTE_ALIGN)
#define UART_FIFO_CONTROL_REG_OFFSET  (2*UART_BYTE_ALIGN)
#define UART_LINE_CONTROL_REG_OFFSET  (3*UART_BYTE_ALIGN)
#define UART_MODEM_CONTROL_REG_OFFSET (4*UART_BYTE_ALIGN)
#define UART_LINE_STATUS_REG_OFFSET   (5*UART_BYTE_ALIGN)
#define UART_MODEM_STATUS_REG_OFFSET  (6*UART_BYTE_ALIGN)
#define UART_SCRATCH_REG_OFFSET       (7*UART_BYTE_ALIGN)
#define UART_DLAB_LSB_REG_OFFSET      (0*UART_BYTE_ALIGN)
#define UART_DLAB_MSB_REG_OFFSET      (1*UART_BYTE_ALIGN)

// Register fields
#define UART_LINE_STATUS_DATA_READY_BIT 0
#define UART_LINE_STATUS_THR_EMPTY_BIT 5
#define UART_LINE_STATUS_TMIT_EMPTY_BIT 6

void uart_init();

int uart_read_ready();

void uart_write(uint8_t byte);

void uart_write_str(void *src, uint32_t len);

void uart_write_flush();

uint8_t uart_read();

void uart_read_str(void *dst, uint32_t len);

void putchar(char byte);

char getchar();
