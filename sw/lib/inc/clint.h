// Copyright 2025 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

#pragma once

#define CLINT_MSIP_REG_OFFSET           0x0000
#define CLINT_MTIMECMP_LOW0_REG_OFFSET  0x4000
#define CLINT_MTIMECMP_HIGH0_REG_OFFSET 0x4004
#define CLINT_MTIME_LOW_REG_OFFSET      0xBFF8
#define CLINT_MTIME_HIGH_REG_OFFSET     0xBFFC

#include <stdint.h>

uint64_t clint_get_mtime();
void clint_set_mtimecmp(uint64_t value);
void clint_sleep_ticks(uint32_t ticks);
void clint_sleep_ms(uint32_t ms);
