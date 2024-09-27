# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Paul Scheffler <paulsc@iis.ee.ethz.ch>
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

# Toolchain

RISCV_XLEN    ?= 32
RISCV_MARCH   ?= rv$(RISCV_XLEN)i
RISCV_MABI    ?= ilp32
RISCV_PREFIX  ?= riscv64-unknown-elf-
RISCV_CC      ?= $(RISCV_PREFIX)gcc
RISCV_CXX     ?= $(RISCV_PREFIX)g++
RISCV_OBJDUMP ?= $(RISCV_PREFIX)objdump
RISCV_OBJCOPY ?= $(RISCV_PREFIX)objcopy
RISCV_AS      ?= $(RISCV_PREFIX)as
RISCV_AR      ?= $(RISCV_PREFIX)ar
RISCV_LD      ?= $(RISCV_PREFIX)ld
RISCV_STRIP   ?= $(RISCV_PREFIX)strip

RISCV_FLAGS    ?= -march=$(RISCV_MARCH) -mabi=$(RISCV_MABI) -mcmodel=medany -static -std=gnu99 -O0 -ffast-math -nostdlib -DITERATIONS=10 -ffunction-sections
RISCV_CCFLAGS  ?= $(RISCV_FLAGS)
RISCV_CXXFLAGS ?= $(RISCV_FLAGS)
RISCV_LDFLAGS  ?= -static -nostartfiles -lm -lgcc $(RISCV_FLAGS)

# all

all: compile

# Building defaults

BINDIR 	?= bin
CRT0 	?= crt0.S
LINK 	?= link.ld

$(BINDIR):
	mkdir -p $(BINDIR)

%.S.o: %.S
	$(RISCV_CC) -Iinclude $(RISCV_CCFLAGS) -c $< -o $@

%.c.o: %.c
	$(RISCV_CC) -Iinclude $(RISCV_CCFLAGS) -c $< -o $@

$(BINDIR)/%.elf: %.S.o | $(BINDIR)
	$(RISCV_CC) -Iinclude $(RISCV_LDFLAGS) -o $@ $^ -T$(LINK)

$(BINDIR)/%.elf: %.c.o $(CRT0).o | $(BINDIR)
	$(RISCV_CC) -Iinclude $(RISCV_LDFLAGS) -o $@ $^ -T$(LINK)

$(BINDIR)/%.dump: $(BINDIR)/%.elf
	$(RISCV_OBJDUMP) -D -s $< >$@

$(BINDIR)/%.hex: $(BINDIR)/%.elf
	$(RISCV_OBJCOPY) -O verilog $< $@

# keep dumps

.PRECIOUS: $(BINDIR)/*.dump

# Phonies

SOURCES ?= $(filter-out $(CRT0), $(wildcard *.S) $(wildcard *.c))

clean:
	rm -rf $(BINDIR)
	rm -f *.o

compile: $(addprefix $(BINDIR)/, $(addsuffix .dump,$(basename $(SOURCES))) $(addsuffix .hex,$(basename $(SOURCES)))) 
