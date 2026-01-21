# Copyright 2024 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
#
# Authors:
# - Tim Fischer <fischeti@iis.ee.ethz.ch>

###############################################################################
# Setup
###############################################################################
set proj_name  [expr {[info exists ::env(PROJ_NAME)]  ? $::env(PROJ_NAME)  : "croc"}]
set top_design [expr {[info exists ::env(TOP_DESIGN)] ? $::env(TOP_DESIGN) : "croc_chip"}]

set netlist "../yosys/out/${proj_name}_yosys.v"
set report_dir reports
set save_dir   save
set out_dir    out

file mkdir $report_dir
file mkdir $save_dir
file mkdir $out_dir

utl::report "Setting up project $proj_name"
utl::report " - Netlist: $netlist"
utl::report " - Netlist: $proj_name"
utl::report " - Top design: $top_design"
utl::report " - Report directory: $report_dir"
utl::report " - Save directory: $save_dir"
utl::report " - Output directory: $out_dir"
# Helper scripts
source scripts/reports.tcl
source scripts/checkpoint.tcl
source scripts/floorplan_util.tcl

# Initialize technology data (PDK libraries, LEFs, etc.)
source scripts/init_tech.tcl
