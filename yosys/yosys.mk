# Copyright (c) 2022 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

# Tools
YOSYS    ?= yosys

# Directories
# directory of the path to the last called Makefile (this one)
YOSYS_DIR 		:= $(realpath $(dir $(realpath $(lastword $(MAKEFILE_LIST)))))
YOSYS_OUT		:= $(YOSYS_DIR)/out
YOSYS_WORK		:= $(YOSYS_DIR)/tmp
YOSYS_REPORTS	:= $(YOSYS_DIR)/reports

# Project variables
include $(YOSYS_DIR)/project-synth.mk

TOP_DESIGN		?= croc_chip
RTL_NAME		?= croc

PICKLE_OUT		:= $(realpath $(YOSYS_DIR)/..)/pickle

VLOG_FILES  	:= $(PICKLE_OUT)/$(RTL_NAME)_sv2v.v
NETLIST			:= $(YOSYS_OUT)/$(RTL_NAME)_yosys.v
NETLIST_DEBUG	:= $(YOSYS_OUT)/$(RTL_NAME)_debug_yosys.v

## Synthesize netlist using Yosys
yosys: $(NETLIST)

$(NETLIST) $(NETLIST_DEBUG): $(SV_FLIST)
	@mkdir -p $(YOSYS_OUT)
	@mkdir -p $(YOSYS_WORK)
	@mkdir -p $(YOSYS_REPORTS)
	SV_FLIST="$(SV_FLIST)" \
	TOP_DESIGN="$(TOP_DESIGN)" \
	PROJ_NAME="$(RTL_NAME)" \
	WORK="$(YOSYS_WORK)" \
	BUILD="$(YOSYS_OUT)" \
	REPORTS="$(YOSYS_REPORTS)" \
	NETLIST="$(NETLIST)" \
	$(YOSYS) -c $(YOSYS_DIR)/scripts/yosys_synthesis.tcl \
		2>&1 | TZ=UTC gawk '{ print strftime("[%Y-%m-%d %H:%M %Z]"), $$0 }' \
		     | tee "$(YOSYS_DIR)/$(RTL_NAME).log" \
		     | gawk -f $(YOSYS_DIR)/scripts/filter_output.awk;
		

ys_clean:
	rm -rf $(YOSYS_OUT)
	rm -rf $(YOSYS_WORK)
	rm -rf $(YOSYS_REPORTS) 
	rm -f $(YOSYS_DIR)/$(RTL_NAME).log

.PHONY: ys_clean yosys synth yosys-slang
