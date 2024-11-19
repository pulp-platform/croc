# Copyright (c) 2022 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

# Common setup used for all yosys scripts

# list of global variables that may be used
set variables {
    vlog_files  { VLOG_FILES               ""                       }
    sv_flist    { SV_FLIST                 ""                       }
    top_design  { TOP_DESIGN               ""                       }
    hier_depth  { HIER_DEPTH               0                        }
    period_ps   { YOSYS_TARGET_PERIOD_PS   5000                     }
    proj_name   { PROJ_NAME                ""                       }
    build_dir   { BUILD                    "[set dir [pwd]]/out"    }
    work_dir    { WORK                     "[set dir [pwd]]/WORK"   }
    report_dir  { REPORTS                  "[set dir [pwd]]/report" }
    netlist     { NETLIST                  ""                       }
}

# either use env-var or default to fallback
foreach var [dict keys $variables] {  
    set values [dict get $variables $var]
    set env_var [lindex $values 0]
    set fallback [lindex $values 1]

    if {[info exists ::env($env_var)]} {
        puts "using: $var= '$::env($env_var)'"
        set $var $::env($env_var)
    } else {
        puts "using: '$var= $fallback'"
        set $var $fallback
    }
}

if {[string eq $netlist ""]} {
    set netlist ${build_dir}/${top_design}_netlist.v
}

proc envVarValid {var_name} {
    if { [info exists ::env($var_name)]} {
	    if {$::env($var_name) != "0" && $::env($var_name) ne ""} {
            return 1
        }
    }
    return 0
}

proc processAbcScript {abc_script} {
    global work_dir period_ps
    set src_dir [file join [file dirname [info script]] ../src]
    set abc_out_path $work_dir/[file tail $abc_script]

    set raw [read -nonewline [open $abc_script r]]
    set abc_script_delay [string map -nocase [list "{D}" [subst "-D $period_ps"]] $raw]
    set abc_script_recaig [string map -nocase [list "{REC_AIG}" [subst "$src_dir/rec6Lib_final_filtered3_recanon_basilisk.aig"]] $abc_script_delay]
    set abc_out [open $abc_out_path w]
    puts -nonewline $abc_out $abc_script_recaig

    flush $abc_out
    close $abc_out
    return $abc_out_path
}