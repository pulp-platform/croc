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
  # Set trap vector
  la      t0, _trap_vector_table
  csrw    mtvec, t0
  call main
_eoc:
  la      t0, status
  sw      a0, 0(t0)
  wfi

.option push
.option norvc
.align 8
.globl _trap_vector_table
_trap_vector_table:
  /*irq  0*/ j _default_handler
  /*irq  1*/ j _default_handler
  /*irq  2*/ j _default_handler
  /*irq  3*/ j _default_handler
  /*irq  4*/ j _default_handler
  /*irq  5*/ j _default_handler
  /*irq  6*/ j _default_handler
  /*irq  7*/ j _clint_timer_handler
  /*irq  8*/ j _default_handler
  /*irq  9*/ j _default_handler
  /*irq 10*/ j _default_handler
  /*irq 11*/ j _default_handler
  /*irq 12*/ j _default_handler
  /*irq 13*/ j _default_handler
  /*irq 14*/ j _default_handler
  /*irq 15*/ j _default_handler
  /*irq 16*/ j _default_handler
  /*irq 17*/ j _default_handler
  /*irq 18*/ j _default_handler
  /*irq 19*/ j _default_handler
  /*irq 20*/ j _default_handler
  /*irq 21*/ j _default_handler
  /*irq 22*/ j _default_handler
  /*irq 23*/ j _default_handler
  /*irq 24*/ j _default_handler
  /*irq 25*/ j _default_handler
  /*irq 26*/ j _default_handler
  /*irq 27*/ j _default_handler
  /*irq 28*/ j _default_handler
  /*irq 29*/ j _default_handler
  /*irq 30*/ j _default_handler
.option pop

// Default interrupt handler
// - Save state on stack
// - Jump to generic interrupt handler
// - Restore state from stack
// - Return from interrupt (mret)
_default_handler:
  addi sp, sp, -80
  sw ra, 72(sp)
  sw t0, 64(sp)
  sw t1, 56(sp)
  sw t2, 48(sp)
  sw a0, 40(sp)
  sw a1, 32(sp)
  sw a2, 24(sp)
  sw a3, 16(sp)
  sw a4,  8(sp)
  sw a5,  0(sp)
  call generic_interrupt_handler
  lw ra, 72(sp)
  lw t0, 64(sp)
  lw t1, 56(sp)
  lw t2, 48(sp)
  lw a0, 40(sp)
  lw a1, 32(sp)
  lw a2, 24(sp)
  lw a3, 16(sp)
  lw a4,  8(sp)
  lw a5,  0(sp)
  addi sp, sp, 80
  mret

.weak generic_interrupt_handler
generic_interrupt_handler:
  ret

# CLINT timer interrupt handler
# Disable timer interrupt and return
_clint_timer_handler:
  sw   t0, 0(sp)
  # clear bit 7 (timer interrupt enable)
  li   t0, 128
  csrc mie, t0
  lw   t0, 0(sp)
  mret
