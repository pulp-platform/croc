# Copyright 2023 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Thomas Benz <tbenz@iis.ee.ethz.ch>

Footprint library {
  types {
    sig_io ixc013_b16m
    sig_io_pd ixc013_b16mpdn
    sig_io_pu ixc013_b16mpup
    sig_i ixc013_i16x
    vdd_core vddcore
    vss_core gndcore
    vdd_pad vddpad
    vss_pad gndpad
    corner corner
    fill {filler1u filler2u filler4u filler10u}
  }

  connect_by_abutment {
    VSSPAD
    VSSCORE
    VDDCORE
    VDDPAD
  }

  pad_pin_name PAD
  pad_pin_layer TopMetal2

  cells {
    ixc013_b16m {
      cell_name ixc013_b16m
      orient {bottom R0 right R90 top R180 left R270}
      flip_pair 1
    }
    ixc013_b16mpdn {
      cell_name ixc013_b16mpdn
      orient {bottom R0 right R90 top R180 left R270}
      flip_pair 1
    }
    ixc013_b16mpup {
      cell_name ixc013_b16mpup
      orient {bottom R0 right R90 top R180 left R270}
      flip_pair 1
    }
    ixc013_i16x {
      cell_name ixc013_i16x
      orient {bottom R0 right R90 top R180 left R270}
      flip_pair 1
    }

    vddcore {
      cell_name vddcore
      physical_only 1
      orient {bottom R0 right R90 top R180 left R270}
    }
    gndcore {
      cell_name gndcore
      physical_only 1
      orient {bottom R0 right R90 top R180 left R270}
    }
    vddpad {
      cell_name vddpad
      physical_only 1
      orient {bottom R0 right R90 top R180 left R270}
    }
    gndpad {
      cell_name gndpad
      physical_only 1
      orient {bottom R0 right R90 top R180 left R270}
    }

    corner {
      cell_name corner
      physical_only 1
      offset {0 0}
      orient {ll R270 lr R0 ur R90 ul R180}
    }

    filler10u {
      cell_name filler10u
      physical_only 1
      orient {bottom R0 right R90 top R180 left R270}
    }
    filler4u {
      cell_name filler4u
      physical_only 1
      orient {bottom R0 right R90 top R180 left R270}
    }
    filler2u {
      cell_name filler2u
      physical_only 1
      orient {bottom R0 right R90 top R180 left R270}
    }
    filler1u {
      cell_name filler1u
      physical_only 1
      orient {bottom R0 right R90 top R180 left R270}
    }

  }
}
