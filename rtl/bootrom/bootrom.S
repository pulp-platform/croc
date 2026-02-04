# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
#
# Bootrom for the Croc SoC
# Located at 0x0200_0000
#
# Boot flow:
# 1. Enable MSIE, WFI (wait until woken by JTAG via msip)
# 2. Wake: clear msip, disable interrupts
# 3. Clear registers x1, x3-x15 (x2/SP set by SRAM stub)
# 4. Set mtvec to bootrom trap handler
# 5. Read boot address from soc_ctrl, jump there with jalr zero
#    (ra is set to &_eoc so main() returning goes to _eoc)
# 6. _eoc: pack return value, write CORESTATUS, WFI
#
# Trap handling:
# The bootrom trap handler saves/restores caller-saved registers and dispatches
# to user handlers via a function pointer vector table at fixed addresses:
# - 0x1000_0000: j _start (skip table)
# - 0x1000_0004: .word croc_exception_handler (function pointer)
# - 0x1000_0008: .word croc_interrupt_handler (function pointer)
#
# Fixed section offsets (from base 0x0200_0000):
# 0x000  _start                 (WFI trampoline + boot)
# 0x100  _eoc                   (end of computation)
# 0x200  _trap_handler_wrapper  (trap entry, save regs, dispatch)
# 0x300  _trap_exit             (restore regs, mret)

# -----------------------------------------------------------------------------
# WFI Trampoline (entry point after reset)
# -----------------------------------------------------------------------------
.section .text
.globl _start
_start:
  csrwi   mie, 8       # Enable M-mode software interrupt
  wfi                  # Sleep until interrupt
  lui     t0, 0x02040  # t0 = CLINT base (0x0204_0000)
  sw      zero, 0(t0)  # Clear msip
  csrwi   mie, 0       # Disable all interrupts

# -----------------------------------------------------------------------------
# Register Initialization
# Clear x1, x3-x15. Skip x2 stack pointer, set by main sw (needs SRAM size)
# -----------------------------------------------------------------------------
# addi    x1,  zero, 0 # x1 is ra, used later, so we can skip clearing it
# addi    x2,  zero, 0 # x2 is sp, set by SRAM stub, so we can skip clearing it
  addi    x3,  zero, 0
  addi    x4,  zero, 0
# addi    x5,  zero, 0 # x5 is t0, used later, so we can skip clearing it
  addi    x6,  zero, 0
  addi    x7,  zero, 0
  addi    x8,  zero, 0
  addi    x9,  zero, 0
  addi    x10, zero, 0
  addi    x11, zero, 0
  addi    x12, zero, 0
  addi    x13, zero, 0
  addi    x14, zero, 0
  addi    x15, zero, 0

# -----------------------------------------------------------------------------
# CSR Initialization
# Set mtvec to bootrom trap handler
# -----------------------------------------------------------------------------
  la      t0, _trap_handler_wrapper
  csrw    mtvec, t0

# -----------------------------------------------------------------------------
# Boot software
# Read address from soc_ctrl register and jump
# -----------------------------------------------------------------------------
  lui     t0, 0x03000  # t0 = SOC_CTRL base (0x0300_0000)
  lw      t0, 0(t0)    # t0 = boot address (BOOTADDR register)
  la      ra, _eoc     # ra = &_eoc (return address for main)
  jalr    zero, 0(t0)  # Jump to boot address (rd=zero, ra preserved)

# -----------------------------------------------------------------------------
# End of Computation (_eoc)
# Reached when main() returns (via ra set above)
# Pack return value and write to CORESTATUS register
# -----------------------------------------------------------------------------
.org 0x100
.globl _eoc
_eoc:
  slli    t0, a0, 1    # Shift return code left by 1
  ori     t0, t0, 1    # Set bit 0 (EOC flag)
  lui     t1, 0x03000  # t1 = SOC_CTRL base (0x0300_0000)
  sw      t0, 8(t1)    # Write to CORESTATUS (offset 0x08)
  wfi                  # Halt

# -----------------------------------------------------------------------------
# Trap Handler Wrapper
# Saves caller-saved registers, reads mcause,
# dispatches to interrupt/exception handler in SRAM via function pointer table
# -----------------------------------------------------------------------------
.org 0x200
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
  # mcause[31] == 1 -> Interrupt
  # mcause[31] == 0 -> Exception
  lui     t0, 0x10000  # t0 = SRAM base (0x1000_0000)
  csrr    a0, mcause
  blt     a0, zero, _handle_interrupt

  # Exception: call handler via SRAM vector table
  lw      t1, 4(t0)    # t1 = *(0x1000_0004)
  jalr    ra, 0(t1)    # Call exception handler
  j       _trap_exit

# -----------------------------------------------------------------------------
# Interrupt Handler
# Strips mcause MSB to get interrupt ID, dispatches to user handler in SRAM
# -----------------------------------------------------------------------------
_handle_interrupt:
  slli    a0, a0, 1    # Strip MSB (shift left)
  srli    a0, a0, 1    # Restore (shift right) -> a0 = interrupt ID
  lw      t1, 8(t0)    # t1 = *(0x1000_0008)
  jalr    ra, 0(t1)    # Call interrupt handler
  j       _trap_exit

# -----------------------------------------------------------------------------
# Trap Exit
# Restore caller-saved registers and return from trap
# -----------------------------------------------------------------------------
.org 0x300
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
