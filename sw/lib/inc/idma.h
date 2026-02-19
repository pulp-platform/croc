// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Thomas Benz <tbenz@iis.ee.ethz.ch>
// Philippe Sauter <phsauter@iis.ee.ethz.ch>

#pragma once

#include <stdint.h>

// Register offsets (from croc_idma.sv)
#define IDMA_CONF_OFFSET 0x00
#define IDMA_NEXT_ID_OFFSET 0x44
#define IDMA_DONE_ID_OFFSET 0x84
#define IDMA_DST_ADDR_OFFSET 0xd0
#define IDMA_SRC_ADDR_OFFSET 0xd8
#define IDMA_LENGTH_OFFSET 0xe0
#define IDMA_DST_STRIDE_2_OFFSET 0xe8
#define IDMA_SRC_STRIDE_2_OFFSET 0xf0
#define IDMA_REPS_2_OFFSET 0xf8

// Config register bits
#define IDMA_CONF_ND_ENA_BIT 11

// Configure a simple 1D DMA transfer
void idma_set_src_addr(uint32_t addr);
void idma_set_dst_addr(uint32_t addr);
void idma_set_length(uint32_t length);

// Configure 2D (ND) transfers
void idma_set_nd_enable(int enable);
void idma_set_src_stride(uint32_t stride);
void idma_set_dst_stride(uint32_t stride);
void idma_set_reps(uint32_t reps);

// Launch a transfer and return the job ID.
// Reading NEXT_ID submits the job configured in the registers.
uint32_t idma_launch(void);

// Return the ID of the last completed transfer
uint32_t idma_done_id(void);

// Check if a transfer with the given job ID has completed
uint32_t idma_is_done(uint32_t job_id);

// Launch a blocking 1D memory copy and return the job ID
uint32_t idma_memcpy(uint32_t dst, uint32_t src, uint32_t length);

// Launch a blocking 2D transfer and return the job ID
uint32_t idma_memcpy_2d(uint32_t dst, uint32_t src, uint32_t length, uint32_t dst_stride, uint32_t src_stride,
                        uint32_t reps);
