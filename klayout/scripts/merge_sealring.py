# Copyright 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Thomas Benz <tbenz@iis.ee.ethz.ch>
# Paul Scheffler <paulsc@iis.ee.ethz.ch>
# Nils Wistoff <nwistoff@iis.ee.ethz.ch>
# Philippe Sauter <phsauter@iis.ee.ethz.ch>

"""Merges chip and a seal ring GDS"""

import sys
import pya


chip = pya.Layout()
chip.read(chip_gds)
chip.read(seal_gds)
chip_top = chip.top_cells()[0]
seal_top = chip.top_cells()[1]

top_lvl_cell = chip.create_cell(top_name)

# calc shift
dx = int(round(float(dx_um) / chip.dbu))
dy = int(round(float(dy_um) / chip.dbu))

# merge
top_lvl_cell.insert(pya.CellInstArray(chip_top.cell_index(), pya.Trans(pya.Vector(dx, dy))))
top_lvl_cell.insert(pya.CellInstArray(seal_top.cell_index(), pya.Trans()))

# stream out
tech = pya.Technology.technology_by_name("")
options = tech.save_layout_options
options.write_context_info = False
chip.write(out_gds, options=options)

sys.exit(0)
