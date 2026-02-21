// Copyright 2022 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Nils Wistoff <nwistoff@iis.ee.ethz.ch>
// Paul Scheffler <paulsc@iis.ee.ethz.ch>

#pragma once

// Address map
#define DEBUG_BASE_ADDR     0x00000000
#define BOOTROM_BASE_ADDR   0x02000000
#define CLINT_BASE_ADDR     0x02040000
#define SOCCTRL_BASE_ADDR   0x03000000
#define UART_BASE_ADDR      0x03002000
#define GPIO_BASE_ADDR      0x03005000
#define OBI_TIMER_BASE_ADDR 0x0300A000
#define IDMA_BASE_ADDR      0x0300B000
#define USER_ROM_BASE_ADDR  0x20000000

// Frequencies
#define TB_FREQUENCY 20000000
#define TB_BAUDRATE 115200

// Peripheral configs
// UART
#define UART_BYTE_ALIGN 4
#define UART_FREQ TB_FREQUENCY
#define UART_BAUD TB_BAUDRATE

// Interrupts
#define IRQ_SOFTWARE 3
#define IRQ_TIMER 7
#define IRQ_EXTERNAL 11
#define IRQ_OBI_TIMER 16
#define IRQ_UART 17
#define IRQ_GPIO 18
#define IRQ_IDMA 19
