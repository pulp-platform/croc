# Copyright (c) 2022 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

# Preparation for the synthesis flow
# A common setup to provide some functionality and define variables

# list of global variables that may be used
# define with scheme: <local-var> { <ENVVAR>  <fallback> }
set variables {
    sv_flist    { SV_FLIST    "../croc.flist" }
    top_design  { TOP_DESIGN  "croc_chip"     }
    out_dir     { OUT         out             }
    tmp_dir     { TMP         tmp             }
    rep_dir     { REPORTS     reports         }
}


# check if an env-var exists and is non-empty
proc envVarValid {var_name} {
    if { [info exists ::env($var_name)]} {
	    if {$::env($var_name) != "0" && $::env($var_name) ne ""} {
            return 1
        }
    }
    return 0
}

# If the ENVVAR is valid use it, otherwise use fallback
foreach var [dict keys $variables] {  
    set values [dict get $variables $var]
    set env_var [lindex $values 0]
    set fallback [lindex $values 1]

    if {[envVarValid $env_var]} {
        puts "using: $var= '$::env($env_var)'"
        set $var $::env($env_var)
    }
}

# process ABC script and write to temporary directory
proc processAbcScript {abc_script} {
    global tmp_dir
    set src_dir [file join [file dirname [info script]] ../src]
    set abc_out_path $tmp_dir/[file tail $abc_script]

    # substitute {STRING} placeholders with their value
    set raw [read -nonewline [open $abc_script r]]
    set abc_script_recaig [string map -nocase [list "{REC_AIG}" [subst "$src_dir/lazy_man_synth_library.aig"]] $raw]
    set abc_out [open $abc_out_path w]
    puts -nonewline $abc_out $abc_script_recaig

    flush $abc_out
    close $abc_out
    return $abc_out_path
}