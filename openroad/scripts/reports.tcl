# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Jannis Schönleber <janniss@iis.ee.ethz.ch>
# - Philippe Sauter   <phsauter@iis.ee.ethz.ch>

# Helper scripts writing reports

if { ![info exists report_dir] } {set report_dir "reports"}

proc report_puts { out } {
    upvar 1 when when
    upvar 1 filename filename
    set fileId [open $filename a]
    puts $fileId $out
    close $fileId
}

# new version from: https://github.com/The-OpenROAD-Project/OpenROAD-flow-scripts/blob/d013d52bc0f10d71c7f943cc2eadfba89fced240/flow/scripts/report_metrics.tcl
proc report_metrics { when {include_erc true} {include_clock_skew false} } {
  global report_dir

  set filename $report_dir/$when.rpt
  set fileId [open $filename w]
  close $fileId
  report_puts "\n=========================================================================="
  report_puts "$when check_setup"
  report_puts "--------------------------------------------------------------------------"
  report_puts [check_setup]

  report_puts "\n=========================================================================="
  report_puts "$when report_tns"
  report_puts "--------------------------------------------------------------------------"
  report_tns >> $filename
  report_tns_metric >> $filename

  report_puts "\n=========================================================================="
  report_puts "$when report_wns"
  report_puts "--------------------------------------------------------------------------"
  report_wns >> $filename

  report_puts "\n=========================================================================="
  report_puts "$when report_worst_slack"
  report_puts "--------------------------------------------------------------------------"
  report_worst_slack >> $filename
  report_worst_slack_metric >> $filename

  if {$include_clock_skew} {
    report_puts "\n=========================================================================="
    report_puts "$when report_clock_skew"
    report_puts "--------------------------------------------------------------------------"
    report_clock_skew >> $filename
    report_clock_skew_metric >> $filename
    report_clock_skew_metric -hold >> $filename
  }

  report_puts "\n=========================================================================="
  report_puts "$when report_checks -path_delay min"
  report_puts "--------------------------------------------------------------------------"
  report_checks -path_delay min -fields {slew cap input nets fanout} -format full_clock_expanded >> $filename

  report_puts "\n=========================================================================="
  report_puts "$when report_checks -path_delay max"
  report_puts "--------------------------------------------------------------------------"
  report_checks -path_delay max -fields {slew cap input nets fanout} -format full_clock_expanded >> $filename

  report_puts "\n=========================================================================="
  report_puts "$when report_checks -unconstrained"
  report_puts "--------------------------------------------------------------------------"
  report_checks -unconstrained -fields {slew cap input nets fanout} -format full_clock_expanded >> $filename

  if {$include_erc} {
    report_puts "\n=========================================================================="
    report_puts "$when report_check_types -max_slew -max_cap -max_fanout -violators"
    report_puts "--------------------------------------------------------------------------"
    # report_check_types -max_slew -max_capacitance -max_fanout -violators >> $filename
    # report_erc_metrics

    report_puts "\n=========================================================================="
    report_puts "$when max_slew_check_slack"
    report_puts "--------------------------------------------------------------------------"
    report_puts "[sta::max_slew_check_slack]"

    report_puts "\n=========================================================================="
    report_puts "$when max_slew_check_limit"
    report_puts "--------------------------------------------------------------------------"
    report_puts "[sta::max_slew_check_limit]"

    if {[sta::max_slew_check_limit] < 1e30} {
      report_puts "\n=========================================================================="
      report_puts "$when max_slew_check_slack_limit"
      report_puts "--------------------------------------------------------------------------"
      report_puts [format "%.4f" [sta::max_slew_check_slack_limit]]
    }

    report_puts "\n=========================================================================="
    report_puts "$when max_fanout_check_slack"
    report_puts "--------------------------------------------------------------------------"
    report_puts "[sta::max_fanout_check_slack]"

    report_puts "\n=========================================================================="
    report_puts "$when max_fanout_check_limit"
    report_puts "--------------------------------------------------------------------------"
    report_puts "[sta::max_fanout_check_limit]"

    if {[sta::max_fanout_check_limit] < 1e30} {
      report_puts "\n=========================================================================="
      report_puts "$when max_fanout_check_slack_limit"
      report_puts "--------------------------------------------------------------------------"
      report_puts [format "%.4f" [sta::max_fanout_check_slack_limit]]
    }

    report_puts "\n=========================================================================="
    report_puts "$when max_capacitance_check_slack"
    report_puts "--------------------------------------------------------------------------"
    report_puts "[sta::max_capacitance_check_slack]"

    report_puts "\n=========================================================================="
    report_puts "$when max_capacitance_check_limit"
    report_puts "--------------------------------------------------------------------------"
    report_puts "[sta::max_capacitance_check_limit]"

    if {[sta::max_capacitance_check_limit] < 1e30} {
      report_puts "\n=========================================================================="
      report_puts "$when max_capacitance_check_slack_limit"
      report_puts "--------------------------------------------------------------------------"
      report_puts [format "%.4f" [sta::max_capacitance_check_slack_limit]]
    }

    report_puts "\n=========================================================================="
    report_puts "$when max_slew_violation_count"
    report_puts "--------------------------------------------------------------------------"
    report_puts "max slew violation count [sta::max_slew_violation_count]"

    report_puts "\n=========================================================================="
    report_puts "$when max_fanout_violation_count"
    report_puts "--------------------------------------------------------------------------"
    report_puts "max fanout violation count [sta::max_fanout_violation_count]"

    report_puts "\n=========================================================================="
    report_puts "$when max_cap_violation_count"
    report_puts "--------------------------------------------------------------------------"
    report_puts "max cap violation count [sta::max_capacitance_violation_count]"

    report_puts "\n=========================================================================="
    report_puts "$when setup_violation_count"
    report_puts "--------------------------------------------------------------------------"
    report_puts "setup violation count [sta::endpoint_violation_count max]"

    report_puts "\n=========================================================================="
    report_puts "$when hold_violation_count"
    report_puts "--------------------------------------------------------------------------"
    report_puts "hold violation count [sta::endpoint_violation_count min]"

    set critical_path [lindex [find_timing_paths -sort_by_slack] 0]
    if {$critical_path != ""} {
      set path_delay [sta::format_time [[$critical_path path] arrival] 4]
      set path_slack [sta::format_time [[$critical_path path] slack] 4]
    } else {
      set path_delay -1
      set path_slack 0
    }
    report_puts "\n=========================================================================="
    report_puts "$when critical path delay"
    report_puts "--------------------------------------------------------------------------"
    report_puts "$path_delay"

    report_puts "\n=========================================================================="
    report_puts "$when critical path slack"
    report_puts "--------------------------------------------------------------------------"
    report_puts "$path_slack"

    report_puts "\n=========================================================================="
    report_puts "$when slack div critical path delay"
    report_puts "--------------------------------------------------------------------------"
    report_puts "[format "%4f" [expr $path_slack / $path_delay * 100]]"
  }

  report_puts "\n=========================================================================="
  report_puts "$when report_power tt"
  report_puts "--------------------------------------------------------------------------"
  report_power -corner tt >> $filename
  report_power_metric -corner tt >> $filename

  # TODO these only work to stdout, whereas we want to append to the $filename
  puts "\n=========================================================================="
  puts "$when report_design_area"
  puts "--------------------------------------------------------------------------"
  report_design_area
  report_design_area_metrics
}

# see: https://github.com/The-OpenROAD-Project/OpenROAD-flow-scripts/blob/master/flow/scripts/save_images.tcl
# and: https://github.com/The-OpenROAD-Project/OpenROAD/blob/master/src/gui/README.md
proc report_image { report_name {full_die false} {place false} {cts false} {routing false} } {
  global report_dir

  set resolution  [ord::dbu_to_microns [[dpl::get_row_site] getHeight]]
  set area        [expr {$full_die ? [ord::get_die_area] : [ord::get_core_area]}]

  # Todo: give via optional arg?
  # Show the drc markers (if any)
  # if {[file exists $report_dir/5_route_drc.rpt] == 1} {
  #     gui::load_drc $report_dir/5_route_drc.rpt
  # }

  # initial visibility to avoid any previous settings

  # overview
  set controls [default_view]
  utl::report "saving image to $report_dir/${report_name}.png"
  generate_image $area $resolution $controls $report_dir/${report_name}.png

  if { $place } {
      # hierarchical placement view
      set controls [default_view]
      lappend controls [list "Layers/*"             false]
      lappend controls [list "Instances/Physical/*" false]
      lappend controls [list "Misc/Module view"     true ]
      generate_image $area $resolution $controls $report_dir/${report_name}.place.png

      # placement density view
      gui::set_heatmap Placement ShowLegend   1
      gui::set_heatmap Placement DisplayMin   0
      gui::set_heatmap Placement DisplayMax 100
      set controls [default_view]
      lappend controls [list "Layers/*"                    false]
      lappend controls [list "Instances/Physical/*"        false]
      lappend controls [list "Heat Maps/Placement Density" false]
      generate_image $area $resolution $controls $report_dir/${report_name}.density.png
  }

  if { $routing } {
      # routing congestion view
      gui::set_heatmap Placement ShowLegend   1
      gui::set_heatmap Placement DisplayMin  50
      gui::set_heatmap Placement DisplayMax 200
      set controls [default_view]
      lappend controls [list "Nets/*"                       true ]
      lappend controls [list "Nets/Power"                   false]
      lappend controls [list "Nets/Ground"                  false]
      lappend controls [list "Heat Maps/Routing Congestion" true ]
      generate_image $area $resolution $controls $report_dir/${report_name}.congestion.png
  }

  if { $cts } {
      # clock view: all clock nets and buffers
      lappend controls [list "Nets/*"                          false]
      lappend controls [list "Nets/Clock"                      true ]
      lappend controls [list "Instances/*"                     false]
      lappend controls [list "Instances/StdCells/Clock tree/*" true ]
      generate_image $area $resolution $controls $report_dir/${report_name}.clocks.png

      foreach clock [get_clocks *] {
          if { [llength [get_property $clock sources]] > 0 } {
              set clock_name [get_name $clock]
              gui::save_clocktree_image $report_dir/${report_name}_cts_${clock_name}.png $clock_name
          }
      }
  }
}

# expects a list of {key value} pairs in controls
proc generate_image { area resolution controls file } {
  set cmd [list save_image -area $area -resolution $resolution]
  foreach opt $controls {
    lappend cmd -display_option $opt
  }
  lappend cmd $file
  eval $cmd
}

proc default_view { } { 
  set controls ""
  lappend controls [list "*"                       false]
  lappend controls [list "Layers/*"                true ]
  lappend controls [list "Nets/*"                  true ]
  lappend controls [list "Shape Types/*"           true ]
  lappend controls [list "Instances/*"             true ]
  lappend controls [list "Misc/Instances/Names"    true ]
  lappend controls [list "Misc/Scale bar"          true ]
  lappend controls [list "Misc/Highlight selected" true ]
  lappend controls [list "Misc/Detailed view"      true ]
  lappend controls [list "Misc/Module view"        false]
  lappend controls [list "Heat Maps/*"             false]
  return $controls
}

proc set_default_view { } {
  gui::set_display_controls "*"                       visible false
  gui::set_display_controls "Layers/*"                visible true
  gui::set_display_controls "Nets/*"                  visible true
  gui::set_display_controls "Shape Types/*"           visible true
  gui::set_display_controls "Instances/*"             visible true
  gui::set_display_controls "Timing Path/*"           visible false
  gui::set_display_controls "Misc/Instances/Names"    visible true
  gui::set_display_controls "Misc/Scale bar"          visible true
  gui::set_display_controls "Misc/Highlight selected" visible true
  gui::set_display_controls "Misc/Detailed view"      visible true
  gui::set_display_controls "Misc/Module view"        visible false
  gui::set_display_controls "Heat Maps/*"             visible false
}