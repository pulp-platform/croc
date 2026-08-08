#!/usr/bin/env bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

set -euo pipefail

repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
technology="${repo_root}/technology"
public_pdk="${repo_root}/ihp13/pdk"
quiet=0

usage() {
    cat <<'EOF'
Usage: scripts/setup_technology.sh [--quiet]

Create technology -> ihp13/pdk if no active technology view exists.
If technology/ already exists, leave it unchanged. Cockpit may link missing
files from ihp13/pdk into its active technology view.
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        --quiet)
            quiet=1
            shift
            ;;
        -h|--help)
            usage
            exit 0
            ;;
        *)
            echo "[ERROR] Unknown argument: $1" >&2
            usage >&2
            exit 1
            ;;
    esac
done

log() {
    if [[ "$quiet" -eq 0 ]]; then
        echo "$@"
    fi
}

link_cmos5l_klayout_dependencies() {
    local shared_pdk="$repo_root/ihp13/sg13g2/ihp-sg13g2"
    local upstream_layout="$repo_root/ihp13/ihp-sg13g2"

    [[ ! -d "$shared_pdk" || -e "$upstream_layout" || -L "$upstream_layout" ]] && return 0
    ln -s "sg13g2/ihp-sg13g2" "$upstream_layout"
}

link_missing_public_files() {
    [[ ! -d "$public_pdk" || ! -d "$technology" ]] && return 0
    [[ "$(realpath -m "$technology")" == "$(realpath -m "$public_pdk")" ]] && return 0

    for pdk_dir in lib lef verilog gds; do
        mkdir -p "$technology/$pdk_dir"
        for public_file in "$public_pdk"/"$pdk_dir"/*; do
            [[ -f "$public_file" ]] || continue

            file_name="$(basename "$public_file")"
            [[ -e "$technology/$pdk_dir/$file_name" || -L "$technology/$pdk_dir/$file_name" ]] && continue
            ln -s "../../ihp13/pdk/$pdk_dir/$file_name" "$technology/$pdk_dir/$file_name"
        done
    done
}

create_public_technology_link() {
    if [[ -L "$technology" && ! -e "$technology" ]]; then
        local link_target
        link_target="$(readlink "$technology")"

        if [[ "$link_target" != "ihp13/pdk" ]]; then
            echo "[ERROR] Unexpected dangling technology link: $technology -> $link_target" >&2
            exit 1
        fi

        if [[ ! -d "$public_pdk" ]]; then
            echo "[ERROR] Cannot recreate technology link; public PDK mirror missing: $public_pdk" >&2
            exit 1
        fi

        rm "$technology"
        ln -s ihp13/pdk "$technology"
        log "[INFO] Recreated technology -> ihp13/pdk"
        return
    fi

    [[ ! -e "$technology" && ! -L "$technology" ]] || return 0

    if [[ ! -d "$public_pdk" ]]; then
        echo "[ERROR] Public PDK mirror missing: $public_pdk" >&2
        exit 1
    fi

    ln -s ihp13/pdk "$technology"
    log "[INFO] Created technology -> ihp13/pdk"
}

create_public_technology_link
link_cmos5l_klayout_dependencies

if [[ ! -f "$public_pdk/verilog/sg13g2_stdcell.v" ]]; then
    echo "[ERROR] Missing public standard-cell source: $public_pdk/verilog/sg13g2_stdcell.v" >&2
    exit 1
fi

if [[ -e "$technology" ]]; then
    link_missing_public_files
    log "[INFO] Active technology view: $technology"
    if [[ "$(realpath -m "$technology")" == "$(realpath -m "$public_pdk")" ]]; then
        log "[INFO] Source: public mirror ihp13/pdk"
    else
        log "[INFO] Source: local technology directory"
        log "[INFO] Leaving active technology view unchanged"
    fi
fi
