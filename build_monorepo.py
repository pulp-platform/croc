# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

import os
import json
import subprocess
import shutil
import argparse
import re
from typing import List, Dict

work_dir = "WORK"
top_modules = ["croc_chip", "tb_croc_soc"]
targets = ["asic", "ihp13", "rtl", "synthesis", "verilator"]
bad_words = ["src", "rtl", "vendor", "hw"]

# Old and new path of a file
class FileMap:
    def __init__(self, old: str = None, new: str = None):
        self.old = old
        self.new = new
    
    def __repr__(self):
        return f"FMap('{self.old}' -> '{self.new}')"

class Package:
    def __init__(self, pkg_path: str, new_path: str = None, fmap: List[FileMap] = None):
        self.pkg_path = pkg_path
        self.new_path = new_path
        self.fmap = [] if fmap is None else fmap
        self.has_files = False
    
    def __repr__(self):
        fmap_repr = ', '.join(repr(f) for f in self.fmap)
        return f"Package(pkg='{self.pkg_path}', new='{self.new_path}', fmap=[{fmap_repr}])"


# Get the base path for each package
def get_pkg_path(package: str) -> str:
    result = subprocess.run(f"bender path {package}", shell=True, check=True, stdout=subprocess.PIPE)
    path = result.stdout.decode('utf-8').strip()
    return os.path.relpath(path, "./")

# Step 0: Get list of packages from bender
def get_packages() -> Dict[str, Package]:
    result = subprocess.run("bender packages -f", shell=True, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    names = result.stdout.decode('utf-8').splitlines()
    packages = {}
    for name in names:
        pkg_path = get_pkg_path(name)
        new_path = os.path.join('rtl', name)
        packages[name] = Package(pkg_path, new_path)

    return packages


# Step 1: Execute the bender and morty commands
def generate_flists() -> List[str]:
    bender_file = f"{work_dir}/bender.json"
    target_str = ' '.join([f"-t {t} " for t in targets])
    subprocess.run(f"bender sources -f {target_str} > {bender_file}", shell=True, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    morty_files = []
    for top in top_modules:
        morty_file = f"{work_dir}/morty_{top}.json"
        morty_files.append(morty_file)
        print(f"morty -f {bender_file} --top {top} --manifest {morty_file}")
        subprocess.run(f"morty -f {bender_file} --top {top} --manifest {morty_file}", shell=True, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    
    return morty_files


# Step 2: Read the morty files and join them
def parse_morties(morty_files: List[str]) -> List[Dict]:
    data = []
    for file in morty_files:
        with open(file, 'r') as file:
            content = json.load(file)
            data.extend(content['sources'])

    return data


# Step 3: Parse morty json files to list of packages
def organize_files(packages: Dict[str, Package], sources: List[Dict]) -> Dict[str, Package]:
    # copy together source file paths (set to make paths unique)
    files_set = set()
    for source in sources:
        files_set.update(source['files'])
    files = list(files_set)

    # assign files to packages
    for file in files:
        for name, pkg in packages.items():
            path = os.path.realpath(pkg.pkg_path)
            if file.startswith(path):
                pkg.has_files = True
                pkg.fmap.append(FileMap(file))

    return packages


# Step 3.1: Parse morty json include dirs to list of packages
def organize_dirs(packages: Dict[str, Package], sources: List[Dict]) -> Dict[str, Package]:
    # copy together source paths (set to make paths unique)
    dir_set = set()
    for source in sources:
        for paths in source['export_incdirs'].values():
            for path in paths:
                dir_set.add(path)
        for path in source['include_dirs']:
            dir_set.add(path)
    dirs = list(dir_set)

    # assign dirs to packages
    for path in dirs:
        for name, pkg in packages.items():
            pkgpath = os.path.realpath(pkg.pkg_path)
            if path.startswith(pkgpath):
                pkg.fmap.append(FileMap(path))

    return  packages


# Step 3.2: Generate new paths for the files/dirs
def generate_new_paths(packages: Dict[str, Package]) -> Dict[str, Package]:
    for name, pkg in packages.items():
        for file in pkg.fmap:
            # path relative to package
            relpath = os.path.relpath(file.old, pkg.pkg_path)
            # split hierarchies and remove blacklisted hierarchy levels
            # apparently ibex includes rtl/ ...
            parts = [p for p in relpath.split(os.sep) if p not in bad_words]
            if len(parts) > 0:
                new_relpath = os.path.join(*parts)
            else:
                new_relpath = "./"
            file.new = os.path.join(pkg.new_path, new_relpath)
            print(f"new_relpath: {new_relpath} -> {file.new}")

    return packages


# Step 4: Copy files to the work directory
def copy_files(packages: Dict[str, Package], testrun=False):
    for pkg in packages.values():
        print(f"\nFROM package: {pkg.pkg_path}")
        for file in pkg.fmap:
            relpath = os.path.join(pkg.pkg_path, file.old)
            if testrun:
                print(f"Copy {relpath}\n\t to {file.new}")
            else:
                if(os.path.isfile(file.old)):
                    os.makedirs(os.path.dirname(file.new), exist_ok=True)
                    shutil.copyfile(file.old, file.new)
                elif pkg.has_files:
                    os.makedirs(os.path.dirname(file.new), exist_ok=True)
                    # python <3.8 doesn't have shutil.copytree with dirs_exist_ok
                    subprocess.run(['cp', '-rf', file.old, file.new], check=True)
                
                print(f"Copied {relpath}\n\t to {file.new}")


# Step 5: Update the file paths in the Bender.yml of the packages
def update_bender_yml(packages: Dict[str, Package], testrun=False):
    for name, pkg in packages.items():
        if pkg.has_files is False:
            print(f"PACKAGE has no files: {name}")
            continue
        bender_path = os.path.join(pkg.pkg_path, "Bender.yml")
        lines = []
        if os.path.exists(bender_path):
            with open(bender_path, 'r') as file:
                lines = file.read().splitlines()

        updated = ""
        for line in lines:
            # could this be a file or directory?
            match = re.match(r'^(\s*-\s*)(.*)', line)
            if match:
                linestart = match.group(1)
                path = match.group(2).strip()
                old_path = os.path.join(pkg.pkg_path, path)

                if os.path.isfile(old_path):
                    for file in pkg.fmap:
                        if path == os.path.relpath(file.old, pkg.pkg_path):
                            new_path = os.path.relpath(file.new, pkg.new_path)
                            updated += linestart + new_path + "\n"
                            break
                elif os.path.isdir(old_path):
                    # update include_dirs etc
                    # apparently ibex includes rtl/ ...
                    parts = [p for p in path.split(os.sep) if p not in bad_words]
                    if len(parts) > 0:
                        new_path = os.path.join(*parts)
                    else:
                        new_path = "./"
                    updated += linestart + new_path + "\n"
                else:
                    # a weird line, just keep it?
                    updated += line + "\n"
            else:
                # another type of line -> keep
                updated += line + "\n"
            
        # writeback
        if testrun:
            print(f"Update and copy {bender_path}")
            os.makedirs(os.path.join(work_dir, pkg.new_path), exist_ok=True)
            with open(os.path.join(work_dir, name + "_Bender.yml"), 'w') as file:
                file.write(updated)
        else:
            os.makedirs(pkg.new_path, exist_ok=True)
            new_path = os.path.join(pkg.new_path, "Bender.yml")
            with open(new_path, 'w') as file:
                file.write(updated)
            print(f"Updated and copied {bender_path} to {new_path}")


def generate_bender_local(packages: Dict[str, Package], testrun=False):
    text = "overrides:\n"
    for name, pkg in packages.items():
        text += "  " + name + ': { path: "' + pkg.new_path + '" }\n'
    
    # writeback
    print(f"Generate Bender.local")
    if testrun:
        with open(os.path.join(work_dir, "Bender.local"), 'w') as file:
            file.write(text)
    else:
        with open("Bender.local", 'w') as file:
            file.write(text)


def main(testrun=False):
    os.makedirs(work_dir, exist_ok=True)
    packages = get_packages()
    morty_files = generate_flists()
    sources = parse_morties(morty_files)
    packages = organize_files(packages, sources)
    packages = organize_dirs(packages, sources)

    # morty does not include the interfaces in its manifest, so we add them manually
    pkg = packages['register_interface']
    pkg.fmap.append(FileMap(pkg.pkg_path + "/src/reg_intf.sv", pkg.new_path + "reg_intf.sv"))
    pkg = packages['obi']
    pkg.fmap.append(FileMap(pkg.pkg_path + "/src/obi_intf.sv", pkg.new_path + "obi_intf.sv"))
    # these aren't directly used but we want them for completeness
    pkg = packages['tech_cells_generic']
    pkg.fmap.append(FileMap(pkg.pkg_path + "/src/rtl/tc_clk.sv", pkg.new_path + "tc_clk.sv"))
    pkg.fmap.append(FileMap(pkg.pkg_path + "/src/rtl/tc_sram.sv", pkg.new_path + "tc_sram.sv"))
    pkg.fmap.append(FileMap(pkg.pkg_path + "/src/rtl/tc_sram_impl.sv", pkg.new_path + "tc_sram_impl.sv"))
    pkg.has_files = True

    packages = generate_new_paths(packages)
    copy_files(packages, testrun)
    update_bender_yml(packages, testrun)
    generate_bender_local(packages, testrun)


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Monorepo-ify the bender packages")
    parser.add_argument('--testrun', action='store_true', help="print file changes without copying files")
    args = parser.parse_args()

    main(testrun=args.testrun)