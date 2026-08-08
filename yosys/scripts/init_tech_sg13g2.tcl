# Copyright (c) 2022 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

# All paths relative to yosys/
# PDK: sg13g2

set pdk_cells_lib $::env(PDK_DIR_LIB_CELLS)
set pdk_sram_lib  $::env(PDK_DIR_LIB_SRAMS)
set pdk_io_lib    $::env(PDK_DIR_LIB_IOS)

set tech_cells [list "$pdk_cells_lib/$::env(PDK_STDCELL_LIB_TT_FILE)"]
set tech_macros [glob -directory $pdk_sram_lib RM_IHPSG13*_typ_1p20V_25C.lib]
lappend tech_macros "$pdk_io_lib/$::env(PDK_IO_LIB_TT_FILE)"

# for hilomap
set tech_cell_tiehi [list sg13g2_tiehi L_HI]
set tech_cell_tielo [list sg13g2_tielo L_LO]

# pre-formated for easier use in yosys commands
# all liberty files
set lib_list [concat [split $tech_cells] [split $tech_macros] ]
set liberty_args_list [lmap lib $lib_list {concat "-liberty" $lib}]
set liberty_args [concat {*}$liberty_args_list]
# only the standard cells
set tech_cells_args_list [lmap lib $tech_cells {concat "-liberty" $lib}]
set tech_cells_args [concat {*}$tech_cells_args_list]

# read library files
foreach file $lib_list {
	yosys read_liberty -lib "$file"
}

set dont_use_list [list]
set dont_use_args [list]

foreach cell $dont_use_list {
	#ENL function of clock gating cells do not work
	lappend dont_use_args [concat "-dont_use " $cell]
}

set dont_use_args [concat {*}$dont_use_args]
