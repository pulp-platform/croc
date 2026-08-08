"""Generate the IHP seal ring without KLayout's PCell registry."""

import importlib.util
import os
import pathlib
import re
import sys
import types

import pya


croc_root = os.environ["CROC_ROOT"]
klayout_path = os.environ["KLAYOUT_PATH"]
pdk = os.environ["CROC_PDK"]
klayout_python = os.path.join(klayout_path, "python")
shared_klayout_python = os.path.join(
    croc_root, "ihp13", "sg13g2", "ihp-sg13g2", "libs.tech", "klayout", "python"
)
sys.path.extend(
    [
        klayout_python,
        os.path.join(shared_klayout_python, "pycell4klayout-api", "source", "python"),
    ]
)

from cni.dlo import PyCellContext
from cni.tech import Tech


if pdk == "sg13cmos5l":
    pcell_package = "sg13cmos5l_pycell_lib"
elif pdk == "sg13g2":
    pcell_package = "sg13g2_pycell_lib"
else:
    raise RuntimeError(f"Unsupported Croc PDK: {pdk}")

package_name = f"croc_{pdk}_pcell"
pcell_root = os.path.join(klayout_python, pcell_package)
ihp_root = os.path.join(pcell_root, "ihp")
package = types.ModuleType(package_name)
package.__path__ = [pcell_root]
sys.modules[package_name] = package
ihp_package = types.ModuleType(f"{package_name}.ihp")
ihp_package.__path__ = [ihp_root]
sys.modules[ihp_package.__name__] = ihp_package


def load_module(name, path):
    spec = importlib.util.spec_from_file_location(name, path)
    module = importlib.util.module_from_spec(spec)
    sys.modules[name] = module
    spec.loader.exec_module(module)
    return module


load_module(f"{package_name}.sg13_tech", os.path.join(pcell_root, "sg13_tech.py"))
sealring_module = load_module(
    f"{package_name}.ihp.sealring_code", os.path.join(ihp_root, "sealring_code.py")
)

tech = Tech.get("SG13_dev")
Tech.techInUse = tech.getTechParams()["libName"]
edge_box = float(re.sub("[a-zA-Z]+", "", tech.getTechParams()["sealring_complete_edgeBox"]))
layout = pya.Layout(True)
layout.dbu = 0.001
top_cell = layout.create_cell("sealring_top")
sealring = sealring_module.sealring()
sealring.setTech(tech)

with PyCellContext(tech, top_cell, sealring):
    sealring.addCellContext(top_cell)
    sealring.setupParams(
        {
            "l": f"{float(width) - 2 * edge_box}u",
            "w": f"{float(height) - 2 * edge_box}u",
            "addLabel": "nil",
            "addSlit": "nil",
            "edgeBox": f"{edge_box}u",
        }
    )
    sealring.genLayout()

pathlib.Path(output).parent.mkdir(parents=True, exist_ok=True)
options = pya.SaveLayoutOptions()
options.write_context_info = False
layout.write(output, options)
