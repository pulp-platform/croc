// Copyright 2025 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

#pragma once

#define OBI_TIMER_COUNT_OFFSET   0x00
#define OBI_TIMER_COMPARE_OFFSET 0x04
#define OBI_TIMER_ENABLE_OFFSET  0x08

#include <stdint.h>

uint32_t obi_timer_get_count();
void obi_timer_set_count(uint32_t value);
uint32_t obi_timer_get_compare();
void obi_timer_set_compare(uint32_t value);
uint32_t obi_timer_get_enable();
void obi_timer_enable();
void obi_timer_disable();
void obi_timer_set(uint32_t value);
void obi_timer_sleep(uint32_t cycles);
