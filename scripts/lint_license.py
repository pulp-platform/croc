# Copyright 2026 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Thomas Benz <tbenz@iis.ee.ethz.ch>

"""Lints the header ensuring consistent file headers"""
import glob
import os
import sys
import re
import yaml


def lint_license(file: str, config: dict) -> int:
    """Lint headers"""
    # filter paths
    if not os.path.isfile(file):
        # print(f'Path ignore:      {file}')
        return 0

    # filter binary files
    try:
        with open(file, "r", encoding="utf-8") as fh:
            content = fh.read()
    except UnicodeDecodeError:
        return 0

    # filter certain dirs
    for path in config["exclude-paths"]:
        if file.startswith(path):
            return 0

    # filter extension
    ext = file.split(".")[-1]
    if ext in config["exclude-ext"]:
        return 0

    # filter file
    if file in config["excludes"]:
        return 0

    # parse header
    header_info = re.findall(config["header-regex"], content)

    # check if there is no match at all -> error
    if len(header_info) == 0:
        print(f"[WARNING][LICENSE-LINT] {file} Wrong or missing license header ")
        return 1

    # check year
    if not int(header_info[0][1]) in config["allowed-years"]:
        print(f"[WARNING][LICENSE-LINT] {file} Copyright outdated")
        return 1

    # all checks pass
    print(f"[INFO][LICENSE-LINT] {file}")
    return 0


def main():
    errors = 0
    error_files = []

    # get arguments
    _, cfg_file = sys.argv

    # read cfg file
    with open(cfg_file, "r") as cfh:
        config = yaml.safe_load(cfh)

    # fetch file list
    all_files = sorted(glob.glob("**/*", recursive=True))

    # check all files
    for file in all_files:
        if lint_license(file, config):
            error_files.append(file)
            errors += 1

    # return the accumulated errors
    return errors


if __name__ == "__main__":
    sys.exit(main())
