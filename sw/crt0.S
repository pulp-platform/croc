# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Paul Scheffler <paulsc@iis.ee.ethz.ch>
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

.globl _start
.section .text._start
_start:
  # Global pointer
  .option push
  .option norelax
  la      x3, __global_pointer$
  .option pop
  # Stack pointer
  la      x2, __stack_pointer$
  # Reset vector
  li      x1, 0
  li      x4, 0
  li      x5, 0
  li      x6, 0
  li      x7, 0
  li      x8, 0
  li      x9, 0
  li      x10, 0
  li      x11, 0
  li      x12, 0
  li      x13, 0
  li      x14, 0
  li      x15, 0
  # zero unused sram for ecc
  la     t0, __sram_end # end of sram contents
  la     t1, __stack_pointer$ # sram upper boundary
1:
  bgeu   t0, t1, 2f
  sw     zero, 0(t0)
  addi   t0, t0, 4
  j      1b
2:
  # clear fault registers from setup (15 regs)
  li     t0, 0x0300D000
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)
  addi   t0, t0, 4
  sw     zero, 0(t0)

  li     t0, 0 # clear t0
  li     t1, 0 # clear t1
  call main
_eoc:
  la      t0, status
  li      t1, 0x80000000 # Use bit 31 to indicate end of simulation
  or      a0, a0, t1     # Use bit 31 to indicate end of simulation
  sw      a0, 0(t0)
  wfi
