#!/usr/bin/env bash
# Copyright (c) 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

set -euo pipefail

repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
pdk_root="$(realpath -m -- "$repo_root/ihp13/pdk")"
manifest="$repo_root/ihp13/pdk/pdk_manifest.csv"
check_only=0
gds_only=0
temporary_directory="$(mktemp -d)"

cleanup() {
    rm -rf "$temporary_directory"
}
trap cleanup EXIT

usage() {
    cat <<'EOF'
Usage: scripts/update_pdk.sh [--check] [--gds] [manifest]

Update public PDK files from a manifest with these columns:
source_type,source,revision,source_sha256,path,patch,output,sha256

source_type is github, tar, or local. GitHub rows download one pinned file.
Tar rows verify the archive digest before extracting path. Local rows only
verify Croc-owned files. --gds limits processing to GDS rows; --check
verifies existing files without downloading or modifying them.
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
        --check)
            check_only=1
            shift
            ;;
        --gds)
            gds_only=1
            shift
            ;;
        -h|--help)
            usage
            exit 0
            ;;
        *)
            manifest="$1"
            shift
            ;;
    esac
done

if [[ ! -f "$manifest" ]]; then
    echo "[ERROR] Manifest not found: $manifest" >&2
    exit 1
fi

verify_file() {
    local output="$1"
    local expected_hash="$2"
    local actual_hash

    [[ -f "$output" ]] || return 1
    actual_hash="$(sha256sum "$output" | awk '{print $1}')"
    [[ "$actual_hash" == "$expected_hash" ]]
}

while IFS=, read -r source_type source revision source_sha256 path patch_file output expected_hash; do
    [[ "$source_type" == "source_type" || -z "$source_type" || "${source_type:0:1}" == "#" ]] && continue

    [[ "$output" != /* ]] || {
        echo "[ERROR] Manifest output must be below ihp13/pdk: $output" >&2
        exit 1
    }
    output_path="$(realpath -m -- "$repo_root/$output")"
    [[ "$output_path" == "$pdk_root/"* ]] || {
        echo "[ERROR] Manifest output must be below ihp13/pdk: $output" >&2
        exit 1
    }
    [[ "$gds_only" -eq 0 || "$output" == *.gds ]] || continue

    if verify_file "$output_path" "$expected_hash"; then
        echo "[INFO] Current: $output"
        continue
    fi

    if [[ "$check_only" -eq 1 || "$source_type" == "local" ]]; then
        echo "[ERROR] Hash mismatch or missing file: $output" >&2
        exit 1
    fi

    temporary_file="$(mktemp "$temporary_directory/file.XXXXXX")"
    case "$source_type" in
        github)
            url="https://raw.githubusercontent.com/$source/$revision/$path"
            curl --fail --location --silent --show-error "$url" --output "$temporary_file"
            ;;
        tar)
            [[ -n "$source_sha256" ]] || {
                echo "[ERROR] Tar source requires source_sha256: $output" >&2
                exit 1
            }
            temporary_archive="$temporary_directory/$source_sha256"
            if [[ ! -f "$temporary_archive" ]]; then
                curl --fail --location --silent --show-error "$source" --output "$temporary_archive.tmp"
                archive_hash="$(sha256sum "$temporary_archive.tmp" | awk '{print $1}')"
                if [[ "$archive_hash" != "$source_sha256" ]]; then
                    echo "[ERROR] Archive hash mismatch: $source" >&2
                    exit 1
                fi
                mv "$temporary_archive.tmp" "$temporary_archive"
            fi
            tar --extract --to-stdout --file "$temporary_archive" "$path" > "$temporary_file"
            ;;
        *)
            echo "[ERROR] Unknown manifest source type: $source_type" >&2
            exit 1
            ;;
    esac

    if [[ -n "$patch_file" ]]; then
        patch_path="$repo_root/$patch_file"
        [[ -f "$patch_path" ]] || {
            echo "[ERROR] Patch not found: $patch_file" >&2
            exit 1
        }
        patch --batch --silent "$temporary_file" < "$patch_path"
    fi

    temporary_hash="$(sha256sum "$temporary_file" | awk '{print $1}')"
    if [[ "$temporary_hash" != "$expected_hash" ]]; then
        echo "[ERROR] Hash mismatch after update: $output" >&2
        echo "[ERROR] Expected: $expected_hash" >&2
        echo "[ERROR] Actual:   $temporary_hash" >&2
        exit 1
    fi

    mkdir -p "$(dirname "$output_path")"
    mv "$temporary_file" "$output_path"
    echo "[INFO] Updated: $output"
done < "$manifest"

if [[ "$check_only" -eq 0 ]]; then
    "$repo_root/scripts/setup_technology.sh" --quiet
fi
