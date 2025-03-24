# Copyright 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Philip Wiese <wiesep@iis.ee.ethz.ch>

# ------------------------------------------------------------------------------
#  STUDENT TASK 2:
#
#  In this exercise, you will visualize the area breakdown of the i_croc module
#  using  stacked bar chart. You are encouraged to use GenAI to generate the
#  code for the stacked bar chart.
#
#  The code below extracts the hierarchical area data. Your task is to visualize
#  the area breakdown of the i_croc module as a stacked bar chart and customize
#  the plot to improve its readability.
# ------------------------------------------------------------------------------

# Import the modules to extract hierarchical area data and plot the results
from area import extract_areas, get_path

from plot import PULP_COLORS_BASE, smooth_polygon

# Argparse is a module that allows you to parse command-line arguments
# See https://docs.python.org/3/library/argparse.html for more information
import argparse

# Import the matplotlib library for plotting
# See https://matplotlib.org/stable/gallery/index.html for examples
from matplotlib import pyplot as plt
import matplotlib.patches as patches

# Import the os module to create directories
import os

# IHP-130 sg13g2_stdcell library (1 GE = 7.25 um^2)
# See http://eda.ee.ethz.ch/index.php?title=Ihp13#What_is_one_gate_equivalent_?
AREA_PER_GE = 7.25

if __name__ == "__main__":
    # Usage: python 01a_plot_area_bar.py <area_report_file>
    parser = argparse.ArgumentParser(
        description="Extract hierarchical areas from an OpenROAD area report."
    )
    parser.add_argument("file", type=str, help="Path to the area report file")
    args = parser.parse_args()

    # Extract the hierarchical area data
    area_tree = extract_areas(args.file)

    if area_tree is None:
        print("No hierarchical area data found.")
        exit(-1)

    # Extract the hierarchical area data
    node_i_croc = get_path(area_tree, ["<top>", "i_croc_soc", "i_croc"])

    # Extract names and convert areas to kGE
    names = []
    areas_kge = []

    for node in node_i_croc.children:
        print(node)
        # Convert area from um^2 to kGE
        area_kge = node.area / (AREA_PER_GE * 1e3)
        areas_kge.append(area_kge)
        names.append(node.name)

        print(area_kge)

    names = [
        "SRAM Bank 1",
        "SRAM Bank 2",
        "Core",
        "Debug Module",
        "JTAG TAP",
        "GPIO",
        "SoC Control",
        "Timer",
        "UART",
    ]

    colors = [PULP_COLORS_BASE[i] for i in range(len(names))]

    # ==========================================================================
    #  STUDENT TASKS - MODIFY THE CODE BELOW TO COMPLETE THE EXERCISE
    # ==========================================================================

    # --------------------------------------------------------------------------
    #  STUDENT TASK 2b: Customize the stacked bar chart using an LLM
    # --------------------------------------------------------------------------
    # In this task, you will enhance the existing stacked bar chart by splitting it
    # into two horizontal rows. The top row will show the most important components,
    # while the bottom row will group the less significant ones. To keep the visual
    # clean, the bottom row components will be collapsed into a single "Rest" segment
    # in the top row.
    #
    #
    # The final visualization should meet the following requirements:
    #  - A stacked horizontal bar chart with two rows
    #  - The top row contains selected components plus a "Rest" category
    #  - The bottom row expands the components that were grouped under "Rest"
    #  - Each segment should display:
    #    - the component name (above),
    #    - its area in kGE (below), and
    #    - its percentage of the total chip area (below)
    #  - A polygon should connect the "Rest" segment in the top row to the full
    #    bottom row to visually indicate the grouping
    #
    # You will need to:
    #  1. Choose how to split the components into two groups.
    #  2. Compute the area of the bottom group and create a "Rest" entry in the top row.
    #  3. Sort both groups by area (descending).
    #  4. Normalize the area values within each row.
    #  5. Plot both rows using `matplotlib` with proper labels.
    #  6. Connect the "Rest" segment to the second row using a polygon.
    #
    # Implementation tips:
    #  - Use `ax.invert_yaxis()` to position the first row on top.
    #  - Define a `plot_row(y, row_dict, total_area)` function that:
    #     - Takes a vertical offset `y`, a dictionary of components with `area` and `color`,
    #     - Computes per-row and total normalization,
    #     - Draws the horizontal stacked bar and labels each segment using the normalized values and `ax.barh()`.
    #     - Returns the component labels, normalized row values, and left offsets (for polygon use).
    #  - Use `smooth_polygon(p1, p2, p3, p4)` to create the polygon path connecting
    #    the "Rest" bar to the second row. (The function returns a `mpath.Path` object.)
    #
    # How to use the LLM effectively:
    #  - Start small. Ask for code to plot just one stacked row first.
    #  - Add complexity step by step: labels → normalization → second row → polygon.
    #  - Be specific. Include your input format (e.g. dictionary with area and color).
    #  - If the code is too generic or breaks, revise your prompt by clarifying the layout.

    # Helper to plot a row
    def plot_row(y, row_dict, total_area):
        """
        Plot a horizontal stacked bar at vertical position y from the given area dictionary.

        Args:
            y (float): Vertical position of the bar (row) in the plot.
            row_dict (dict): Dictionary mapping component names to their area and color,
                             e.g. {'UART': {'area': 10.5, 'color': '#ff0000'}}.
            total_area (float): Total area of all components (used to calculate global percentages).

        Returns:
            tuple: A tuple containing:
                - labels (list[str]): List of component names in the row.
                - norm_row (list[float]): Normalized area values for the row (sum to 1).
                - left (list[float]): Left positions for each bar segment in the row.
        """

        return
