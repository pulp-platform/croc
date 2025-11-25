# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

# Tools
BENDER	  ?= bender

# Directories
# directory of the path to the last called Makefile (this one)
PROJ_DIR  := $(realpath $(dir $(realpath $(lastword $(MAKEFILE_LIST)))))


default: help

################
# Dependencies #
################
# Download RCX file used for parasitic extraction from ORFS (configuration got ok by IHP)
IHP_RCX_URL  := "https://raw.githubusercontent.com/The-OpenROAD-Project/OpenROAD-flow-scripts/7747f88f70daaeb63f43ce36e71829707b7e3fa7/flow/platforms/ihp-sg13g2/IHP_rcx_patterns.rules"
IHP_RCX_FILE := $(PROJ_DIR)/openroad/IHP_rcx_patterns.rules

## Checkout/update dependencies using Bender
checkout: $(IHP_RCX_FILE)
	$(BENDER) checkout
	git submodule update --init --recursive

$(IHP_RCX_FILE): 
	curl -L -o $@ $(IHP_RCX_URL)

## Reset dependencies (without updating Bender.lock)
clean-deps:
	rm -rf .bender
	git submodule deinit -f --all

.PHONY: checkout clean-deps


############
# Software #
############
SW_HEX := sw/bin/helloworld.hex

$(SW_HEX): sw/*.c sw/*.h sw/*.S sw/*.ld
	$(MAKE) -C sw/ compile

## Build all top-level programs in sw/
software: $(SW_HEX)

sw: $(SW_HEX)

.PHONY: software sw


#################
# Documentation #
#################

help: Makefile
	@printf "Available targets:\n------------------\n"
	@for mkfile in $(MAKEFILE_LIST); do \
		awk '/^[a-zA-Z\-\_0-9]+:/ { \
			helpMessage = match(lastLine, /^## (.*)/); \
			if (helpMessage) { \
				helpCommand = substr($$1, 0, index($$1, ":")-1); \
				helpMessage = substr(lastLine, RSTART + 3, RLENGTH); \
				printf "%-20s %s\n", helpCommand, helpMessage; \
			} \
		} \
		{ lastLine = $$0 }' $$mkfile; \
	done

.PHONY: help


###########
# Cleanup #
###########

## Delete generated files and directories
clean: 
	$(MAKE) -C sw clean

.PHONY: clean
