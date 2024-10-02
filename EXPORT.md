# Export your IP as a testcase for the Yosys

We are developing a new SystemVerilog frontend for Yosys in cooperation with a YosysHQ member. To
ensure good code support, we want to run as many PULP IPs through the frontend as possible.

To facilitate sharing code databases with our external collaborators, we have prepared a script
which collects all RTL files and packs them into a tarball.


## Repo preparation
In a first step you need to prepare your repo. This includes checking out all dependencies, and
generating/customizing all source files required.


## Source file collection
Create an `flist-plus` containing all the include directories, defines, and source files. Select
your sources and defines to export a ***synthesizable*** design. Tech cells can be black-boxed.

Bender version `0.28.1` is required to emit the `flist-plus` file format.

```
bender script flist-plus -t rtl -t vsim -t simulation -t verilator -DVERILATOR -DSYNTHESIS > croc.f
```

## Run `export.py`
The export script will:
* Check the includes, defines, and sources
* Copy all required files in a temporary directory
* Collect metadata of the project
* Create a tarball to be shared

```
python3 export.py [-h] [--continue-on-error] project_name source_flist temp_dir target_dir
```

For Croc:
```
python3 export.py croc-export croc.f WORK export
```

Because the pedantic nature of the new frontend, `export.py` will conduct a range of checks on the
sources to ensure proper parsing by the frontend. Should your IP trigger errors, we highly encourage
to fix these upstream to ensure high compatibility of our codebase with open-source tools.

## Deposit the generated tarball
We provide a depot directory to drop off exported projects. Please copy your tarballs to:

```
/usr/scratch2/sulperg/tbenz/depot/ysf
```
