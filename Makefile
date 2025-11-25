# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

# Tools
BENDER ?= bender

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
SW_HEX ?= sw/bin/helloworld.hex

$(SW_HEX): sw/*.c sw/*.h sw/*.S sw/*.ld
	$(MAKE) -C sw/ compile

## Build all top-level programs in sw/
software: $(SW_HEX)

sw: $(SW_HEX)

.PHONY: software sw

#############
# Finishing #
#############
ihp13/pdk.patched:
	- cd ihp13/pdk; git apply ../patches/0001-Filling-improvements.patch
	touch $@

klayout/out/croc_chip_sealed.gds.gz: ihp13/pdk.patched openroad/out/croc.def klayout/scripts/*.py klayout/scripts/*.sh
	bash klayout/scripts/finishing.sh

finishing: klayout/out/croc_chip_sealed.gds.gz
.PHONY: finishing

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
# Format  #
###########
CLANG_FORMAT_EXECUTABLE ?= clang-format

## Automatically format the code using clang-format and black
format:
	@echo -e "\033[1m-> Formatting Python Code...\033[0m"
	@black */*.py
	@echo -e "\033[1m-> Formatting C Code...\033[0m"
	@python scripts/run_clang_format.py -ir sw/ --clang-format-executable=$(CLANG_FORMAT_EXECUTABLE)

.PHONY: format

###########
# Cleanup #
###########

## Delete generated files and directories
clean: 
	$(MAKE) -C sw clean

.PHONY: clean
