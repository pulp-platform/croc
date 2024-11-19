// Copyright 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Philippe Sauter <phsauter@iis.ee.ethz.ch>

#pragma once

#include <stdint.h>
#include "config.h"


#define GPIO_DIR_REG_OFFSET           0x000
#define GPIO_EN_REG_OFFSET            0x080
#define GPIO_IN_REG_OFFSET            0x100
#define GPIO_OUT_REG_OFFSET           0x180
#define GPIO_TOGGLE_REG_OFFSET        0x200
#define GPIO_INTRPT_EN_REG_OFFSET     0x280
#define GPIO_INTRPT_STATUS_REG_OFFSET 0x300
#define GPIO_INTRPT_EDGE_REG_OFFSET   0x380