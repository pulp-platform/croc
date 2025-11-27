// Copyright 2025 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

#pragma once

#define OBI_TIMER_COUNT_OFFSET    0x00
#define OBI_TIMER_COMPARE_OFFSET  0x04
#define OBI_TIMER_CTRL_OFFSET     0x08
#define OBI_TIMER_STATUS_OFFSET   0x0C

#define OBI_TIMER_CTRL_ENABLE_BIT     0
#define OBI_TIMER_CTRL_AUTORESET_BIT  1
#define OBI_TIMER_STATUS_EXPIRED_BIT  0
#define OBI_TIMER_STATUS_OVERFLOW_BIT 1

#include <stdint.h>

uint32_t obi_timer_get_count();
uint32_t obi_timer_get_compare();
int obi_timer_get_enable();
int obi_timer_get_autoreset();
void obi_timer_set_count(uint32_t value);
void obi_timer_set_compare(uint32_t value);
void obi_timer_set_enable(int enable);
void obi_timer_set_autoreset(int enable);
void obi_timer_clear_expired();
void obi_timer_clear_overflow();
void obi_timer_set(uint32_t value);
void obi_timer_sleep(uint32_t cycles);
