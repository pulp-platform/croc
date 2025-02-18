// Copyright 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Philippe Sauter <phsauter@iis.ee.ethz.ch>

#pragma once

#include <stdint.h>
#include "config.h"

// Register offsets
#define CFG_LOW_REG_OFFSET            0x00
#define CFG_HIGH_REG_OFFSET           0x04
#define TIMER_VALUE_LOW_REG_OFFSET    0x08
#define TIMER_VALUE_HIGH_REG_OFFSET   0x0C
#define TIMER_CMP_LOW_REG_OFFSET      0x10
#define TIMER_CMP_HIGH_REG_OFFSET     0x14
#define TIMER_START_LOW_REG_OFFSET    0x18
#define TIMER_START_HIGH_REG_OFFSET   0x1C
#define TIMER_RESET_LOW_REG_OFFSET    0x20
#define TIMER_RESET_HIGH_REG_OFFSET   0x24

// Register fields
#define CFG_LOW_REG_ENABLE_BIT       0
#define CFG_LOW_REG_RESET_BIT        1
#define CFG_LOW_REG_IRQ_ENABLE_BIT   2
#define CFG_LOW_REG_CMP_CLR_BIT      4
#define CFG_LOW_REG_ONE_SHOT_BIT     5
#define CFG_LOW_REG_PRESC_ENABLE_BIT 6
#define CFG_LOW_REG_CLOCK_SOURCE_BIT 7
#define CFG_LOW_REG_PRESC_VALUE_BIT  8 // 15:8
#define CFG_LOW_REG_64BIT_MODE_BIT   31

#define CFG_HIGH_REG_ENABLE_BIT       0
#define CFG_HIGH_REG_RESET_BIT        1
#define CFG_HIGH_REG_IRQ_ENABLE_BIT   2
#define CFG_HIGH_REG_CMP_CLR_BIT      4
#define CFG_HIGH_REG_ONE_SHOT_BIT     5
#define CFG_HIGH_REG_PRESC_ENABLE_BIT 6
#define CFG_HIGH_REG_CLOCK_SOURCE_BIT 7

void sleep_ms(uint32_t ms);
