# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Tools
OPENROAD 		?= openroad

# Directories
# directory of the path to the last called Makefile (this one)
OPENROAD_DIR    := $(realpath $(dir $(realpath $(lastword $(MAKEFILE_LIST)))))
CROC_ROOT		?= $(realpath $(OPENROAD_DIR)/..)

# Project variables
# if you are running the entire flow these are set by iguana.mk
# in that case do not change them here
TOP_DESIGN 	?= croc_chip
PROJ_NAME	?= croc
NETLIST		?= $(CROC_ROOT)/yosys/out/$(PROJ_NAME)_yosys.v

SAVE	 ?= $(OPENROAD_DIR)/save
REPORTS	 ?= $(OPENROAD_DIR)/reports

backend: openroad

## Place & Route flow using OpenROAD
openroad:
	mkdir -p $(SAVE)
	mkdir -p $(REPORTS)
	echo $(CROC_ROOT)
	cd $(OPENROAD_DIR) && \
	NETLIST="$(NETLIST)" \
	TOP_DESIGN="$(TOP_DESIGN)" \
	PROJ_NAME="$(PROJ_NAME)" \
	SAVE="$(SAVE)" \
	REPORTS="$(REPORTS)" \
	PDK="$(CROC_ROOT)/ihp13/pdk" \
	$(OPENROAD) scripts/chip.tcl -gui \
		-log $(PROJ_NAME).log \
		2>&1 | TZ=UTC gawk '{ print strftime("[%Y-%m-%d %H:%M %Z]"), $$0 }';

.PHONY: backend openroad