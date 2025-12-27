# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>
# - Enrico Zelioli <ezelioli@iis.ee.ethz.ch>

# Directories
# directory of the path to the last called Makefile (this one)
PROJ_DIR := $(realpath $(dir $(realpath $(lastword $(MAKEFILE_LIST)))))
SW_DIR   := $(PROJ_DIR)/sw
SRC_DIR  := $(SW_DIR)/lib/src
INC_DIR  := $(SW_DIR)/lib/inc
BIN_DIR  := $(SW_DIR)/bin

# Toolchain
RISCV_PREFIX  ?= riscv64-unknown-elf-
RISCV_CC      := $(RISCV_PREFIX)gcc
RISCV_OBJDUMP := $(RISCV_PREFIX)objdump
RISCV_OBJCOPY := $(RISCV_PREFIX)objcopy
RISCV_LD      := $(RISCV_PREFIX)ld

# Compilation and linking flags
RISCV_FLAGS   := -march=rv32i_zicsr -mabi=ilp32 -mcmodel=medany -static -std=gnu99 -Os -nostdlib -fno-builtin -ffreestanding
RISCV_CCFLAGS := $(RISCV_FLAGS) -I$(INC_DIR) -I$(SW_DIR)
RISCV_LDFLAGS := $(RISCV_FLAGS) -static -nostartfiles -lm -lgcc

# Build files
CRT0        := $(SW_DIR)/crt0.S
LINK        := $(SW_DIR)/link.ld
LIB_SOURCES := $(wildcard $(SRC_DIR)/*.[cS])
LIB_OBJS    := $(LIB_SOURCES:$(SRC_DIR)/%=$(SRC_DIR)/%.o)

# Build all assembly and C files in the top level as seperate binaries
TOP_SOURCES   := $(filter-out $(CRT0), $(wildcard $(SW_DIR)/*.[cS]))
TOP_BASENAMES := $(basename $(notdir $(TOP_SOURCES)))
ALL_TARGETS   := $(TOP_BASENAMES:%=$(BIN_DIR)/%.dump) $(TOP_BASENAMES:%=$(BIN_DIR)/%.hex)

# Default make target
.PHONY: default
default: all

# Create output bin directory
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Compile assembly file
%.S.o: %.S
	$(RISCV_CC) $(RISCV_CCFLAGS) -c $< -o $@

# Compile C file
%.c.o: %.c
	$(RISCV_CC) $(RISCV_CCFLAGS) -c $< -o $@

# Link assembly application
$(BIN_DIR)/%.elf: $(SW_DIR)/%.S.o $(CRT0).o $(LIB_OBJS) | $(BIN_DIR)
	$(RISCV_CC) -o $@ $^ $(RISCV_LDFLAGS) -T$(LINK)

# Link C application
$(BIN_DIR)/%.elf: $(SW_DIR)/%.c.o $(CRT0).o $(LIB_OBJS) | $(BIN_DIR)
	$(RISCV_CC) -o $@ $^ $(RISCV_LDFLAGS) -T$(LINK)

# Create dis-assembled version of ELF binary
$(BIN_DIR)/%.dump: $(BIN_DIR)/%.elf
	$(RISCV_OBJDUMP) -D -s $< >$@

# Create hex version of ELF binary
$(BIN_DIR)/%.hex: $(BIN_DIR)/%.elf
	$(RISCV_OBJCOPY) -O verilog $< $@

## Build all top-level programs in sw/
.PHONY: all
all: $(ALL_TARGETS)

## Delete generated files and directories
.PHONY: clean
clean:
	rm -rf $(BIN_DIR)
	rm -f $(PROJ_DIR)/sw/*.o
	rm -f $(PROJ_DIR)/sw/lib/src/*.o
