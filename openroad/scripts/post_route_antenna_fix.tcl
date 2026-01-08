# Copyright 2026 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Tobias Senti      <tsenti@ethz.ch>

## Post-Route Antenna Fix Script
# This script checks for antenna violations after detailed routing
# and attempts to fix them by adding antenna diodes to the affected pins.
# Runs up to $max_iterations or until no violations are found anymore.

# Maximum number of iterations until giving up
set max_iterations 3

# Counter for unique diode names
if {![info exists ::antennacounter]} {
    set ::antennacounter 0
}

set early_exit 0
for {set iteration 1} {$iteration <= $max_iterations} {incr iteration} {
    puts "\n\n=== Antenna Fix Iteration $iteration ==="
    set report_file_name "post_route_antenna_$iteration.rpt"

    puts "Check for antenna violations"
    check_antennas -report_file $report_dir/$report_file_name

    puts "Parsing antenna report"

    # Read in report
    set fp [open $report_dir/$report_file_name]
    set lines [split [read $fp] "\n"]
    close $fp

    # Parse report
    set net_name ""
    set pin_name ""
    set has_violation 0
    set pin_with_violations {}
    foreach line $lines {
        # Trim and split line
        set line [string trim $line]
        set split_parts [split $line]
        set parts {}
        foreach part $split_parts {
            if { $part ne "" } {
                lappend parts $part
            }
        }

        # Check if it is a net or pin
        set first_word [lindex $parts 0]
        if { $first_word eq "Net:" } {
            set net_name [lindex $parts 1]
            puts "Processing net: $net_name"
        }
        if { $first_word eq "Pin:" } {
            set pin_name [lindex $parts 1]
            set has_violation 0
            puts "  Pin: $pin_name"
        }

        # Prevent multiple additions of the same pin
        if { $has_violation eq 0 } {
            # Check if it is a violation line
            set last_word [lindex $parts end]
            if { $last_word eq "(VIOLATED)" } {
                lappend pin_with_violations $pin_name
                set has_violation 1
                puts "    Adding pin $pin_name to violation list"
            }
        }
    }

    puts "\n\n"

    # If no violations, exit loop
    if { [llength $pin_with_violations] eq 0 } {
        puts "No antenna violations detected, exiting."
        set early_exit 1
        break
    }

    # Add one antenna diode per pin with violation
    puts "Add antenna diodes"
    set block [ord::get_db_block]
    set ant_master [odb::dbDatabase_findMaster [ord::get_db] "sg13g2_antennanp"]
    set violation_nets {}
    foreach pin $pin_with_violations {
        puts "Pin with antenna violation: $pin"
        set parts [split $pin "/"]
        set pin_name [lindex $parts end]
        set cell_name [join [lrange $parts 0 end-1] "/"]

        # Get instance
        set inst [odb::dbBlock_findInst $block $cell_name]
        puts [odb::dbInst_getName $inst]

        # Get iterm (db representation of pin)
        set iterm [odb::dbInst_findITerm $inst $pin_name]

        # Get net connected to iterm
        set net [odb::dbITerm_getNet $iterm]
        set net_name [odb::dbNet_getName $net]
        # remove backslashes from net name
        set net_name [string map {"\\" ""} $net_name]
        lappend violation_nets $net_name

        # Remove routing of the net if it has any
        set wire [odb::dbNet_getWire $net]
        if { $wire ne "NULL"} {
            odb::dbWire_destroy $wire
        }

        # Create antenna diode instance
        set ant_name "post_route_ant_diode_[incr ::antennacounter]"
        set inst [odb::dbInst_create $block $ant_master $ant_name]

        # Connect antenna diode to the net
        set inst_iterm [odb::dbInst_findITerm $inst "A"]
        odb::dbITerm_connect $inst_iterm $net

        # Place antenna diode near the pin (gate to protect)
        set xy [odb::dbITerm_getAvgXY $iterm]
        puts "Placing antenna diode at $xy"
        odb::dbInst_setLocation $inst [lindex $xy 1] [lindex $xy 2]
        odb::dbInst_setPlacementStatus $inst "PLACED"
    }

    # Refine placement of diodes
    puts "Detailed placement"
    detailed_placement

    # Ensure diodes are connected to power
    puts "Connect power"
    global_connect

    # Reroute affected nets
    puts "Detailed route"
    detailed_route -output_drc ${report_dir}/${log_id_str}_${proj_name}_post_route_antenna_fix_drc.rpt \
            -droute_end_iter 30 \
            -drc_report_iter_step 5 \
            -save_guide_updates \
            -clean_patches \
            -verbose 1
}

# Final antenna check if we have not exited early i.e. fixed all violations
if {$early_exit eq 0} {
    puts "Final antenna check"
    check_antennas -report_file $report_dir/$report_file_name
}
