// Copyright 2026 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Thomas Benz <tbenz@iis.ee.ethz.ch>
// Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "idma.h"
#include "util.h"
#include "config.h"

////////////////////////
//  Register access   //
////////////////////////

void idma_set_src_addr(uint32_t addr) {
    *reg32(IDMA_BASE_ADDR, IDMA_SRC_ADDR_OFFSET) = addr;
}

void idma_set_dst_addr(uint32_t addr) {
    *reg32(IDMA_BASE_ADDR, IDMA_DST_ADDR_OFFSET) = addr;
}

void idma_set_length(uint32_t length) {
    *reg32(IDMA_BASE_ADDR, IDMA_LENGTH_OFFSET) = length;
}

void idma_set_nd_enable(int enable) {
    uint32_t conf = *reg32(IDMA_BASE_ADDR, IDMA_CONF_OFFSET);
    if (enable)
        conf |= (1u << IDMA_CONF_ND_ENA_BIT);
    else
        conf &= ~(1u << IDMA_CONF_ND_ENA_BIT);
    *reg32(IDMA_BASE_ADDR, IDMA_CONF_OFFSET) = conf;
}

void idma_set_src_stride(uint32_t stride) {
    *reg32(IDMA_BASE_ADDR, IDMA_SRC_STRIDE_2_OFFSET) = stride;
}

void idma_set_dst_stride(uint32_t stride) {
    *reg32(IDMA_BASE_ADDR, IDMA_DST_STRIDE_2_OFFSET) = stride;
}

void idma_set_reps(uint32_t reps) {
    *reg32(IDMA_BASE_ADDR, IDMA_REPS_2_OFFSET) = reps;
}

uint32_t idma_launch(void) {
    return *reg32(IDMA_BASE_ADDR, IDMA_NEXT_ID_OFFSET);
}

uint32_t idma_done_id(void) {
    return *reg32(IDMA_BASE_ADDR, IDMA_DONE_ID_OFFSET);
}

uint32_t idma_is_done(uint32_t job_id) {
    return idma_done_id() >= job_id;
}

////////////////////////
//  Convenience API   //
////////////////////////

uint32_t idma_memcpy(uint32_t dst, uint32_t src, uint32_t length) {
    idma_set_nd_enable(0);
    idma_set_src_addr(src);
    idma_set_dst_addr(dst);
    idma_set_length(length);
    uint32_t id = idma_launch();
    while (!idma_is_done(id))
        ;
    return id;
}

uint32_t idma_memcpy_2d(uint32_t dst, uint32_t src, uint32_t length, uint32_t dst_stride, uint32_t src_stride,
                        uint32_t reps) {
    idma_set_nd_enable(1);
    idma_set_src_addr(src);
    idma_set_dst_addr(dst);
    idma_set_length(length);
    idma_set_dst_stride(dst_stride);
    idma_set_src_stride(src_stride);
    idma_set_reps(reps);
    uint32_t id = idma_launch();
    while (!idma_is_done(id))
        ;
    return id;
}
