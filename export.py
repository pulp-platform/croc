#!/usr/env python3
# Copyright 2024 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Thomas Benz <tbenz@iis.ee.ethz.ch>

import argparse
import sys
import os
import re
import subprocess as sp
from collections import OrderedDict

# file types to include
INCLUDE_FILE_TYPES = ['.svh', '.h', '.sv', '.v']
BAD_INC_EXT = ['.sv', '.v']

# source regexes
MODULE_REGEX = r'\n *module +([A-Za-z_0-9]+).*?;'
PACKAGE_REGEX = r'\n *package +([A-Za-z_0-9]+) *;'
INTERFACE_REGEX = r'\n *interface +([A-Za-z_0-9]+).*?;'
IMPORT_REGEX = r'\n *import +([A-Za-z_0-9]+).*?;'
INCLUDE_REGEX = r'`include +"([A-Za-z_0-9-.:+/]+)"'


def handle_include(includes: OrderedDict, entry: str, coe: bool):
    inc_path = entry[8:]

    # check if path exists
    if not os.path.exists(inc_path):
        print(f'[ERROR] Include path does not exist: {inc_path}', file=sys.stderr)
        if not coe:
            sys.exit(-1)

    # extract files
    contains_file = False
    for root, _, files in os.walk(inc_path):
        for file in files:
            for ext in INCLUDE_FILE_TYPES:
                if file.endswith(ext):
                    inc_file = os.path.join(root, file)
                    include = inc_file.replace(inc_path + '/', '')
                    inc_dir = ''
                    if len(include.split('/')) > 1:
                        inc_dir = '/'.join(include.split('/')[:-1])
                    contains_file = True

                    # emit a warning if non-headers are imported...
                    if ext in BAD_INC_EXT:
                        print(f'[INFO ] Non-header file in include dir is discouraged: {file}', file=sys.stderr)

                    # check for duplicates, add to dict
                    if include not in includes:
                        includes[include] = {'src': inc_file, 'dst': inc_dir}
                    else:
                        print(f'[ERROR] Duplicated include file: {include}', file=sys.stderr)
                        print(f'[ERROR]   {includes[include]["src"]}', file=sys.stderr)
                        print(f'[ERROR]   {inc_file}', file=sys.stderr)
                        if not coe:
                            sys.exit(-2)

    # check if include path is empty
    if not contains_file:
        print(f'[ERROR] Include path does not contain any files: {inc_path}', file=sys.stderr)
        if not coe:
            sys.exit(-3)


def handle_define(defines: OrderedDict, entry: str):
    defines[entry] = entry


def handle_source(sources: OrderedDict, entry: str, coe: bool):
    source = entry.split('/')[-1]

    # check if source file exists
    if not os.path.exists(entry):
        print(f'[ERROR] Source file does not exist: {entry}', file=sys.stderr)
        if not coe:
            sys.exit(-4)


    # get modules, interfaces, packages
    with open(entry, 'r', encoding='utf8') as src_file:
        content = src_file.read()
        modules = re.findall(MODULE_REGEX, content, re.DOTALL | re.MULTILINE)
        packages = re.findall(PACKAGE_REGEX, content, re.DOTALL | re.MULTILINE)
        interfaces = re.findall(INTERFACE_REGEX, content, re.DOTALL | re.MULTILINE)
        includes = re.findall(INCLUDE_REGEX, content, re.DOTALL | re.MULTILINE)

    # check for duplicate packages
    for pkg in packages:
        for now in sources:
            for to_check in sources[now]['pkg']:
                if pkg == to_check:
                    print(f'[WARN ] Possible duplicated package: {pkg}', file=sys.stderr)
                    print(f'[WARN ]   {sources[now]["src"]}', file=sys.stderr)
                    print(f'[WARN ]   {entry}', file=sys.stderr)

    # check for duplicate interface
    for intf in interfaces:
        for now in sources:
            for to_check in sources[now]['intf']:
                if intf == to_check:
                    print(f'[WARN ] Possible duplicated interface: {intf}', file=sys.stderr)
                    print(f'[WARN ]   {sources[now]["src"]}', file=sys.stderr)
                    print(f'[WARN ]   {entry}', file=sys.stderr)

    # check for duplicate modules
    for mod in modules:
        for now in sources:
            for to_check in sources[now]['mod']:
                if mod == to_check:
                    print(f'[WARN ] Possible duplicated module: {mod}', file=sys.stderr)
                    print(f'[WARN ]   {sources[now]["src"]}', file=sys.stderr)
                    print(f'[WARN ]   {entry}', file=sys.stderr)

    # check includes
    for inc in includes:
        ext = '.' + inc.split('.')[-1]
        if ext not in INCLUDE_FILE_TYPES:
            print(f'[WARN ] Non-RTL header file included: {inc}', file=sys.stderr)
            print(f'[WARN ]   {entry}', file=sys.stderr)

        if ext in BAD_INC_EXT:
            print(f'[INFO ] Non-header file includes are discouraged: {inc}', file=sys.stderr)
            print(f'[INFO ]   {entry}', file=sys.stderr)


    # check for duplicates, add to dict
    if source not in sources:
        sources[source] = {'src': entry, 'mod': modules, 'pkg': packages, 'intf': interfaces}
    else:
        print(f'[ERROR] Duplicated source file: {source}', file=sys.stderr)
        print(f'[ERROR]   {sources[source]["src"]}', file=sys.stderr)
        print(f'[ERROR]   {entry}', file=sys.stderr)
        if not coe:
            sys.exit(-5)


def check_global_import(state: dict, coe: bool):

    # check all sources for global includes, remove module content manually
    for src in state['src']:
        with open(state["src"][src]["src"], 'r', encoding='utf8') as src_file:
            content = '\n' + src_file.read()

            # filter out all module bodies
            module_starts = [match.start() for match in re.finditer(r'\n *module', content)]
            module_ends = [match.start() for match in re.finditer(r'endmodule', content)]
            nm = len(module_ends)
            for idx in range(0, nm):
                content = content[0:module_starts[nm-1-idx]] + content[module_ends[nm-1-idx]:-1]

            # filter out all interface bodies
            intf_starts = [match.start() for match in re.finditer(r'\n *interface', content)]
            intf_ends = [match.start() for match in re.finditer(r'endinterface', content)]
            nm = len(intf_ends)
            for idx in range(0, nm):
                content = content[0:intf_starts[nm-1-idx]] + content[intf_ends[nm-1-idx]:-1]

            # filter out all package bodies
            package_starts = [match.start() for match in re.finditer(r'\n *package', content)]
            package_ends = [match.start() for match in re.finditer(r'endpackage', content)]
            nm = len(package_ends)
            for idx in range(0, nm):
                content = content[0:package_starts[nm-1-idx]] + content[package_ends[nm-1-idx]:-1]

            # search for global imports
            glo_imports = re.findall(IMPORT_REGEX, content)
            # print error if global decode is detected
            if len(glo_imports) > 0:
                for glo_import in glo_imports:
                    print(f'[ERROR] Global include in file: {glo_import}', file=sys.stderr)
                    print(f'[ERROR]   {state["src"][src]["src"]}', file=sys.stderr)
                    if not coe:
                        sys.exit(-6)


def analyze_flist(flist: str, coe: bool) -> dict:
    sources = OrderedDict()
    defines = OrderedDict()
    includes = OrderedDict()

    # read through flist
    for entry in flist.split('\n'):
        if entry.startswith('+incdir+'):
            handle_include(includes, entry, coe)
        elif entry.startswith('+define+'):
            handle_define(defines, entry)
        elif entry != '':
            handle_source(sources, entry, coe)
        else:
            continue

    return {'src': sources, 'def': defines, 'inc': includes}


def create_dir_struc(state: dict, tgt: str):

    # check if target exists and is not empty
    if os.path.exists(os.path.join(os.getcwd(), tgt)):
        print(f'[INFO ] Export directory exists: {tgt}', file=sys.stderr)

    # create die structure
    os.system(f'mkdir -p {tgt}/src')
    os.system(f'mkdir -p {tgt}/inc')

    for inc in state['inc']:
        inc_dir = state['inc'][inc]['dst']
        if inc_dir != '':
            os.system(f'mkdir -p {tgt}/inc/{inc_dir}')


def copy_files(state: dict, tgt: str):

    # copy sources
    for src in state['src']:
        os.system(f'cp {state["src"][src]["src"]} {tgt}/src/{src}')

    # copy includes
    for inc in state['inc']:
        os.system(f'cp {state["inc"][inc]["src"]} {tgt}/inc/{inc}')


def write_filst(state: dict, tgt: str):

    # include dir is simple
    content = f'+incdir+{tgt}/inc\n'

    # defines
    for define in state['def']:
        content += define + '\n'

    # sources
    for src in state['src']:
        content += f'{tgt}/src/{src}' + '\n'

    return content


def collect_info(flist: str, name: str, coe: bool):
    script_path = os.getcwd()
    script_hash = sp.check_output(['sha1sum', f'{sys.argv[0]}']).decode('ascii').strip()
    path = os.path.dirname(os.path.join(os.getcwd(), flist))
    try:
        ghash = sp.check_output(['git', 'rev-parse', 'HEAD'], cwd=path).decode('ascii').strip()
        remotes = sp.check_output(['git', 'remote', '-v'], cwd=path).decode('ascii').strip().split('\n')
    except:
        print(f'[WARN ] No GIT repo detected', file=sys.stderr)
        ghash = '00000000'
        remotes = ['None']
    user = sp.check_output(['whoami']).decode('ascii').strip()
    date = sp.check_output(['date']).decode('ascii').strip()
    tstamp = sp.check_output(['date', '+%d%m%Y%H%M%S']).decode('ascii').strip()
    host = sp.check_output(['hostname']).decode('ascii').strip()
    bender_ver = sp.check_output(['bender', '--version']).decode('ascii').strip()

    # create a unique name
    zip_name = f'{name}_{ghash[0:8]}_{tstamp}.tar.xz'

    # create summary
    res = '# Metadata' + '\n'
    res += f' * {date}' + '\n'
    res += f' * {user}@{host}' + '\n'
    res += f' * {script_path} (script)' + '\n'
    res += f' * {path} (flist_path)' + '\n'
    res += f' * {ghash}' + '\n'
    for remote in remotes:
        res += f' * {remote}' + '\n'
    res += f' * {bender_ver}' + '\n'
    res += f' * {script_hash}' + '\n'
    res += ' * Errors suppressed :(' + '\n' if coe else ' * Errors not suppressed :)' + '\n'

    return [res, zip_name]


def parse_args():
    parser = argparse.ArgumentParser(description='Exports and checks an RTL project.')

    # Defining the required arguments
    parser.add_argument('project_name', type=str,
                        help='The project name.')
    parser.add_argument('source_flist', type=str,
                        help='The source flist-plus file.')
    parser.add_argument('temp_dir', type=str,
                        help='A temporary dir where sources are stored.')
    parser.add_argument('target_dir', type=str,
                        help='The target dir where the tarball is placed.')
    parser.add_argument('--continue-on-error', action='store_true',
                        help='Continue processing even if errors are encountered.')

    return parser.parse_args()


if __name__ == '__main__':

    # get arguments
    args = parse_args()

    with open(args.source_flist, 'r', encoding='utf8') as src_flist_file:
        in_state = analyze_flist(src_flist_file.read(), args.continue_on_error)
        check_global_import(in_state, args.continue_on_error)
        create_dir_struc(in_state, args.temp_dir)
        copy_files(in_state, args.temp_dir)
        export_flist = write_filst(in_state, args.temp_dir)
        [meta_data, tar_name] = collect_info(args.source_flist, args.project_name, args.continue_on_error)

    with open(f'{args.temp_dir}/{args.project_name}.f', 'w', encoding='utf8') as tgt_flist_file:
        tgt_flist_file.write(export_flist)

    with open(f'{args.temp_dir}/META.md', 'w', encoding='utf8') as meta_file:
        meta_file.write(meta_data)

    # create tarball
    os.system(f'mkdir -p {args.target_dir}')
    os.system(f'tar -cJf {args.target_dir}/{tar_name} -C {args.temp_dir} .')
