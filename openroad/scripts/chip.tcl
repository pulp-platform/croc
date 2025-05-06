# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Tobias Senti      <tsenti@ethz.ch>
# - Jannis Schönleber <janniss@iis.ee.ethz.ch>
# - Philippe Sauter   <phsauter@iis.ee.ethz.ch>

# The main OpenRoad chip flow
set proj_name $::env(PROJ_NAME)
set netlist $::env(NETLIST)
set top_design $::env(TOP_DESIGN)
set report_dir $::env(REPORTS)
set save_dir $::env(SAVE)
set time [elapsed_run_time]
set step_by_step_debug 0

# helper scripts
source scripts/reports.tcl
source scripts/checkpoint.tcl

# initialize technology data
source scripts/init_tech.tcl

set log_id 0

###############################################################################
# Initialization                                                              #
###############################################################################
set log_id_str [format "%02d" $log_id]
utl::report "###############################################################################"
utl::report "# Step ${log_id_str}: Initialization"
utl::report "###############################################################################"

# read and check design
utl::report "Read netlist"
read_verilog $netlist
link_design $top_design

utl::report "Read constraints"
read_sdc src/constraints.sdc

utl::report "Check constraints"
check_setup -verbose                                      > ${report_dir}/${log_id_str}_${proj_name}_checks.rpt
report_checks -unconstrained -format end -no_line_splits >> ${report_dir}/${log_id_str}_${proj_name}_checks.rpt
report_checks -format end -no_line_splits                >> ${report_dir}/${log_id_str}_${proj_name}_checks.rpt
report_checks -format end -no_line_splits                >> ${report_dir}/${log_id_str}_${proj_name}_checks.rpt

# Size of the chip
set chipW            1760.0
set chipH            1760.0

# thickness of annular ring for pads (length of a pad)
set padRing           180.0
set coreMargin [expr $padRing + 35]; # space for power ring

utl::report "Initialize Chip"
initialize_floorplan -die_area "0 0 $chipW $chipH" \
                     -core_area "$coreMargin $coreMargin [expr $chipW-$coreMargin] [expr $chipH-$coreMargin]" \
                     -site "CoreSite"


utl::report "Connect global nets (power)"
source scripts/power_connect.tcl

utl::report "Create Floorplan"
source scripts/floorplan.tcl

utl::report "Create Power Grid"
source scripts/power_grid.tcl
save_checkpoint 00_${proj_name}.power_grid
report_image "00_${proj_name}.power" true


###############################################################################
# Initial Repair Netlist                                                      #
###############################################################################
incr log_id
set log_id_str [format "%02d" $log_id]
utl::report "###############################################################################"
utl::report "# Step ${log_id_str}: Initial Repair Netlist"
utl::report "###############################################################################"

# set_default_view
# Set layers used for estimate_parasitics
set_wire_rc -clock -layer Metal4
set_wire_rc -signal -layer Metal4
# don't touch any clock-tree related nets as
# repair_timing can insert a 'split0000' buffer which then prevents CTS from running
set clock_nets [get_nets -of_objects [get_pins -of_objects "*_reg" -filter "name == CLK"]]
set_dont_touch $clock_nets
set_dont_use $dont_use_cells

utl::report "Repair tie fanout"
repair_tie_fanout sg13g2_tielo/L_LO
repair_tie_fanout sg13g2_tiehi/L_HI

utl::report "Remove buffers"
remove_buffers

utl::report "Repair design"
repair_design -verbose

save_checkpoint ${log_id_str}_${proj_name}.pre_place


###############################################################################
# GLOBAL PLACEMENT                                                            #
###############################################################################
incr log_id
set log_id_str [format "%02d" $log_id]
utl::report "###############################################################################"
utl::report "# Step ${log_id_str}: GLOBAL PLACEMENT"
utl::report "###############################################################################"

set_thread_count 8

set GPL_ARGS {  -density 0.60 }

set GPL2_ARGS { -density 0.60
                -routability_driven
                -routability_check_overflow 0.30
                -timing_driven }
# density:            In every part of the chip, about N% of the area is occupied by standard cells
# routability_driven: Reduce density target when there are a lot of wires in an area
# check_overflow:     Higher means routability starts being considered earlier in placement
#                     too early -> very dense regions, too late -> little to no effect
# inflation_ratio:    By how much the virtual area of offending cells is increased
#                     this increases the calculated density they cause, reducing physical density
# timing_driven:      Prioritize near-critical timing paths (reduce their length)
# max_phi_coef:       think step size

# rough placement to get parasitics from steiner-tree estimate so we can run repair_timing
utl::report "Global Placement (1)"
global_placement {*}$GPL_ARGS
report_metrics "${log_id_str}_${proj_name}.gpl1"
report_image "${log_id_str}_${proj_name}.gpl1" true true
save_checkpoint ${log_id_str}_${proj_name}.gpl1

utl::report "Estimate parasitics"
estimate_parasitics -placement
utl::report "Repair design"
repair_design -verbose
save_checkpoint ${log_id_str}_${proj_name}.gpl1_fix

# old versions of repair_timing may swap non-equal pins, deactivated for now to avoid problems
# Likely introduced in:  https://github.com/The-OpenROAD-Project/OpenROAD/pull/3215 (fixed in new versions)
utl::report "Repair setup"
repair_timing -setup -skip_pin_swap -verbose
save_checkpoint ${log_id_str}_${proj_name}.gpl1_repaired

# actual global placement
utl::report "Global Placement (2)"
global_placement {*}$GPL2_ARGS
report_metrics "${log_id_str}_${proj_name}.gpl2"
report_image "${log_id_str}_${proj_name}.gpl2" true true
save_checkpoint ${log_id_str}_${proj_name}.gpl2


###############################################################################
# DETAILED PLACEMENT                                                          #
###############################################################################
incr log_id
set log_id_str [format "%02d" $log_id]
utl::report "###############################################################################"
utl::report "# Step ${log_id_str}: DETAILED PLACEMENT"
utl::report "###############################################################################"

set DPL_ARGS {}
# legalize overlapping cells
utl::report "Detailed placement"
detailed_placement {*}$DPL_ARGS
utl::report "Optimize mirroring"
optimize_mirroring

utl::report "Estimate parasitics"
estimate_parasitics -placement
report_metrics "${log_id_str}_${proj_name}.dpl"
save_checkpoint ${log_id_str}_${proj_name}.dpl
report_image "${log_id_str}_${proj_name}.dpl" true true


###############################################################################
# CLOCK TREE SYNTHESIS                                                        #
###############################################################################
incr log_id
set log_id_str [format "%02d" $log_id]
utl::report "###############################################################################"
utl::report "# Step ${log_id_str}: CLOCK TREE SYNTHESIS"
utl::report "###############################################################################"

unset_dont_touch $clock_nets
utl::report "Repair clock inverters"
repair_clock_inverters

utl::report "Clock Tree Synthesis"
set_wire_rc -clock -layer Metal4
clock_tree_synthesis -buf_list $ctsBuf -root_buf $ctsBufRoot \
                     -sink_clustering_enable \
                     -obstruction_aware \
                     -balance_levels

# Repair wire length between clock pad and clock-tree root
utl::report "Repair clock nets"
repair_clock_nets

# legalize cts cells
utl::report "Detailed placement"
detailed_placement {*}$DPL_ARGS
utl::report "Estimate parasitics"
estimate_parasitics -placement

# propagate clocks now that we have a clock-tree
set_propagated_clock [all_clocks]

report_metrics "${log_id_str}_${proj_name}.cts_unrepaired"

# repair all setup timing
utl::report "Repair setup"
repair_timing -setup -skip_pin_swap -verbose

# place inserted cells
utl::report "Detailed placement"
detailed_placement {*}$DPL_ARGS
utl::report "Check placement"
check_placement -verbose

utl::report "Estimate parasitics"
estimate_parasitics -placement
report_cts -out_file ${report_dir}/${log_id_str}_${proj_name}.cts.rpt
report_metrics "${log_id_str}_${proj_name}.cts"
save_checkpoint ${log_id_str}_${proj_name}.cts
report_image "${log_id_str}_${proj_name}.cts" true false true


###############################################################################
# GLOBAL ROUTE                                                                #
###############################################################################
incr log_id
set log_id_str [format "%02d" $log_id]
utl::report "###############################################################################"
utl::report "# Step ${log_id_str}: GLOBAL ROUTE"
utl::report "###############################################################################"

# Reduce routing resources (max utilization) of lower layers by 20-35%
# to spread routing out a bit more to other layers
# OpenRoad strongly prefers routing with M2/M3 first and then when it
# eventually needs M4/M5 it may struggle with finding space
# to place vias down to M2/M3 -> reserve some space on M2/M3
# Reduce TM1 to avoid too much routing there (bigger tracks -> bad for routing)
set_global_routing_layer_adjustment Metal2-Metal3 0.30
set_global_routing_layer_adjustment TopMetal1 0.20
set_routing_layers -signal Metal2-TopMetal1 -clock Metal2-TopMetal1

utl::report "Global route"
global_route -guide_file ${report_dir}/${log_id_str}_${proj_name}_route.guide \
    -congestion_report_file ${report_dir}/${log_id_str}_${proj_name}_congestion.rpt \
    -allow_congestion
# default params but -allow_congestion
# it continues even if it didn't find a solution (may be able to fix afterwards)

utl::report "Estimate parasitics"
estimate_parasitics -global_routing
report_metrics "${log_id_str}_${proj_name}.grt"
save_checkpoint ${log_id_str}_${proj_name}.grt
report_image "${log_id_str}_${proj_name}.grt" true false false true

grt::set_verbose 0
# Repair design using global route parasitics
utl::report "Perform buffer insertion..."
repair_design -verbose
utl::report "Repair setup and hold violations..."
repair_timing -skip_pin_swap -setup -verbose -repair_tns 100
repair_timing -skip_pin_swap -hold -hold_margin 0.1 -verbose -repair_tns 100

utl::report "GRT incremental..."
# Run to get modified net by DPL
global_route -start_incremental
# Running DPL to fix overlapped instances
detailed_placement
# Route only the modified net by DPL
global_route -end_incremental \
            -congestion_report_file ${report_dir}/${log_id_str}_congestion_repaired_initial.rpt \
            -guide_file ${report_dir}/${log_id_str}_${proj_name}_route.guide \
            -allow_congestion \
            -verbose

estimate_parasitics -global_routing
report_metrics "${log_id_str}_${proj_name}.grt_repaired"
save_checkpoint ${log_id_str}_${proj_name}.grt_repaired
report_image "${log_id_str}_${proj_name}.grt_repaired" true true false true

###############################################################################
# DETAILED ROUTE                                                              #
###############################################################################
incr log_id
set log_id_str [format "%02d" $log_id]
utl::report "###############################################################################"
utl::report "# Step ${log_id_str}: DETAILED ROUTE"
utl::report "###############################################################################"

# Requires LEF cell with class 'CORE ANTENNACELL', otherwise you need to give a cell
repair_antennas -ratio_margin 30 -iterations 5
# check_antennas

utl::report "Detailed route"
set_thread_count 8
detailed_route -output_drc ${report_dir}/${log_id_str}_${proj_name}_route_drc.rpt \
               -bottom_routing_layer Metal2 \
               -top_routing_layer TopMetal1 \
               -droute_end_iter 30 \
               -drc_report_iter_step 5 \
               -save_guide_updates \
               -clean_patches \
               -verbose 1

utl::report "Saving detailed route"
save_checkpoint ${log_id_str}_${proj_name}.drt
report_metrics "${log_id_str}_${proj_name}.drt"
report_image "${log_id_str}_${proj_name}.drt" true false false true

###############################################################################
# FINISHING                                                                   #
###############################################################################
incr log_id
set log_id_str [format "%02d" $log_id]
utl::report "###############################################################################"
utl::report "# Step ${log_id_str}: FINISHING"
utl::report "###############################################################################"

utl::report "Filler placement"
filler_placement $stdfill
global_connect

save_checkpoint ${log_id_str}_${proj_name}.final
report_image "${log_id_str}_${proj_name}.final" true true false true
define_process_corner -ext_model_index 0 X
extract_parasitics -ext_model_file IHP_rcx_patterns.rules
write_spef out/${proj_name}.spef
read_spef  out/${proj_name}.spef; # readback parasitics for OpenSTA
report_metrics "${log_id_str}_${proj_name}.final"

utl::report "Write output"
write_def                      out/${proj_name}.def
write_verilog -include_pwr_gnd -remove_cells "$stdfill bondpad*" out/${proj_name}_lvs.v
write_verilog                  out/${proj_name}.v
write_db                       out/${proj_name}.odb
write_sdc                      out/${proj_name}.sdc

exit
