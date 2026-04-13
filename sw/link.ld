/* Copyright (c) 2024 ETH Zurich and University of Bologna.
 * Licensed under the Apache License, Version 2.0, see LICENSE for details.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Authors:
 * - Paul Scheffler <paulsc@iis.ee.ethz.ch>
 * - Philippe Sauter <phsauter@iis.ee.ethz.ch> 
 */

OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY
{
	/* unified on-chip SRAM region used for all code and data */
	SRAM (rwxail) : ORIGIN = 0x10000000, LENGTH = 4K
}

PHDRS
{
	text PT_LOAD FLAGS(5); /* tag as: Read + Execute */
	data PT_LOAD FLAGS(6); /* tag as: Read + Write */
}

SECTIONS
{
    /* Drop metadata/debug sections, not needed */
	/DISCARD/ :
	{
	*(.riscv.attributes)
	*(.comment)
	}

    /* Start placing following sections at the SRAM base address */
	. = ORIGIN(SRAM);

    /* Interrupt vector table */
	.vectors : ALIGN(4)
	{
	*(.vectors)
	KEEP(*(.vectors))
	} > SRAM :text

    /* Startup entry (first instructions executed after bootrom) */
	.text._start : ALIGN(4)
	{
	*(.text._start)
	} > SRAM :text

    /* Main code (text) and read-only data (rodata) */
	.text : ALIGN(4)
	{
	*(.text)
	*(.text.*)
	*(.rodata)
	*(.rodata.*)
	} > SRAM :text

    /* Writable data (what people colloquially call RAM) */
	.misc : ALIGN(4)
	{
	*(.sdata)
	*(.sdata.*)
	*(.data)
	*(.data.*)
	*(.sbss)
	*(.sbss.*)
	*(.bss)
	*(.bss.*)
	*(COMMON)
	} > SRAM :data
}

/* Global absolute symbols */

/* Place GP near the middle for efficient GP-relative access */
PROVIDE(__global_pointer$ = ADDR(.misc) + SIZEOF(.misc) / 2);
/* Initial stack pointer at the end of SRAM */
PROVIDE(__stack_pointer$ = ORIGIN(SRAM) + LENGTH(SRAM));

/* Bootrom symbols (fixed addresses) */
PROVIDE(_eoc = 0x02000100);
PROVIDE(_trap_handler_wrapper = 0x02000200);
PROVIDE(_trap_exit = 0x02000300);

/* SoC register symbols */
PROVIDE(corestatus = 0x03000008);
