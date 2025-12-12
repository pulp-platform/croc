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
  # Set trap handler wrapper
  la      t0, _trap_handler_wrapper
  csrw    mtvec, t0
  call main
_eoc:
  # Write status register in SoC control regs
  # Bit 0 signals end of computation
  # Bits 31:1 contain return code
  slli    t0, a0, 1
  ori     t0, t0, 1
  la      t1, status
  sw      t0, 0(t1)
  wfi

# Trap handler wrapper
# This is the point where the core jumps on any
# kind of trap (exception or interrupt). To safely
# call C code, we first need to save the core's
# context (caller-saved  registers) on the stack.
# Before returning to the interrupted instruction
# (mret) we need to restore the context previously
# saved on the stack.
# The steps are:
# - Save state on stack
# - Read trap cause
# - Jump to generic C exception / interrupt  handler
# - Restore state from stack
# - Return from interrupt (mret)
.align 2
_trap_handler_wrapper:
  addi    sp, sp, -80
  sw      ra, 72(sp)
  sw      t0, 64(sp)
  sw      t1, 56(sp)
  sw      t2, 48(sp)
  sw      a0, 40(sp)
  sw      a1, 32(sp)
  sw      a2, 24(sp)
  sw      a3, 16(sp)
  sw      a4,  8(sp)
  sw      a5,  0(sp)
  # Read trap cause
  # mcause[31] == 1'b1 -> Interrupt
  # mcause[31] == 1'b0 -> Exception
  csrr    a0, mcause
  blt     a0, x0, _handle_interrupt
  # Call user-defined exception handler
  call    croc_exception_handler
  j       _trap_exit

_trap_exit:
  lw      ra, 72(sp)
  lw      t0, 64(sp)
  lw      t1, 56(sp)
  lw      t2, 48(sp)
  lw      a0, 40(sp)
  lw      a1, 32(sp)
  lw      a2, 24(sp)
  lw      a3, 16(sp)
  lw      a4,  8(sp)
  lw      a5,  0(sp)
  addi    sp, sp, 80
  mret

_handle_interrupt:
  # Clear interrupt flag bit
  li      t0, 1
  slli    t0, t0, 31   # t0 = 1 << 31
  not     t0, t0       # t0 = ~(1 << 31)
  and     a0, a0, t0   # a0 = a0 & 0x7FFF_FFFF
  li      t0, 7        # RISC-V M-mode timer interrupt ID is 7
  beq     a0, t0, _clint_timer_handler
  # Call user-defined interrupt handler
  call    croc_interrupt_handler
  j       _trap_exit

# CLINT timer interrupt handler
# Disable timer interrupt and return
# Timer interrupt enable == bit 7 of mie CSR
_clint_timer_handler:
  li      t0, 1
  li      t0, (1 << 7)
  csrc    mie, t0
  j       _trap_exit

# Default exception handler
# Do nothing and return
# Define in C test to override
.weak croc_exception_handler
croc_exception_handler:
  ret

# Default interrupt handler
# Do nothing and return
# Define in C test to override
.weak croc_interrupt_handler
croc_interrupt_handler:
  ret
