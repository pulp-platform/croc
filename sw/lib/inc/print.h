// Copyright 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Philippe Sauter <phsauter@iis.ee.ethz.ch>

#pragma once

#include <stdarg.h>

extern void putchar(char);

// simple printf with support for %x formatter but no others
void printf(const char *fmt, ...);
