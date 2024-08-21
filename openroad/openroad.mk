# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

# Tools
OPENROAD 		?= openroad

# Directories
# directory of the path to the last called Makefile (this one)
OR_DIR    := $(realpath $(dir $(realpath $(lastword $(MAKEFILE_LIST)))))

# Project variables
# if you are running the entire flow these are set by the top level Makefile
# in that case do not change them here
TOP_DESIGN 	?= croc_chip
PROJ_NAME	?= croc
NETLIST		?= $(realpath $(OR_DIR)/../yosys/out/$(PROJ_NAME)_yosys.v)

SAVE	 ?= $(OR_DIR)/save
REPORTS	 ?= $(OR_DIR)/reports
OUT  	 ?= $(OR_DIR)/out
OUT_FILES = $(OUT)/$(PROJ_NAME).def $(OUT)/$(PROJ_NAME).v $(OUT)/$(PROJ_NAME).sdc $(OUT)/$(PROJ_NAME).odb

backend: $(OUT)/$(PROJ_NAME).def

openroad: $(OUT)/$(PROJ_NAME).def

## Place & Route flow using OpenROAD
$(OUT_FILES): $(NETLIST) $(OR_DIR)/scripts/*.tcl $(OR_DIR)/src/*.tcl $(OR_DIR)/src/*.sdc
	mkdir -p $(SAVE)
	mkdir -p $(REPORTS)
	mkdir -p $(OUT)
	echo $(CROC_ROOT)
	cd $(OR_DIR) && \
	NETLIST="$(NETLIST)" \
	TOP_DESIGN="$(TOP_DESIGN)" \
	PROJ_NAME="$(PROJ_NAME)" \
	SAVE="$(SAVE)" \
	REPORTS="$(REPORTS)" \
	PDK="$(CROC_ROOT)/ihp13/pdk" \
	$(OPENROAD) scripts/chip.tcl \
		-log $(PROJ_NAME).log \
		2>&1 | TZ=UTC gawk '{ print strftime("[%Y-%m-%d %H:%M %Z]"), $$0 }';

.PHONY: backend openroad clean