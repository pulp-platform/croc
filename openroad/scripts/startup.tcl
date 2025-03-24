# Copyright 2024 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
#
# Authors:
# - Tim Fischer <fischeti@iis.ee.ethz.ch>


# Check whether PROJ_NAME is part of the environment variables



if { [info exists ::env(PROJ_NAME)] } {
    set proj_name $::env(PROJ_NAME)
} else {
    set proj_name "untitled"
}

if { [info exists ::env(REPORTS)] } {
    set report_dir $::env(REPORTS)
} else {
    set report_dir "reports"
}

if { [info exists ::env(SAVE)] } {
    set save_dir $::env(SAVE)
} else {
    set save_dir "save"
}

utl::report "Setting up project $proj_name"
utl::report " - Report directory: $report_dir"
utl::report " - Save directory: $save_dir"

# helper scripts
source scripts/reports.tcl
source scripts/checkpoint.tcl

# initialize technology data
source scripts/init_tech.tcl
