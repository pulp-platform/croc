# Copyright 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Philip Wiese <wiesep@iis.ee.ethz.ch>

# ------------------------------------------------------------------------------
#  STUDENT TASK 2b:
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

    # --------------------------------------------------------------------------
    #  STUDENT TASK 2b: Customize the stacked bar chart using an LLM
    # --------------------------------------------------------------------------
    # In this task, you will enhance the stacked bar chart by splitting it
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

    # Normalize values for bar lengths
    total_area = sum(areas_kge)
    norm_values = [a / total_area for a in areas_kge]
    left_positions = [sum(norm_values[:i]) for i in range(len(norm_values))]

    # Split components into two groups
    first_row_names = ["SRAM Bank 1", "SRAM Bank 2", "Core", "UART"]
    second_row_names = ["Debug Module", "JTAG TAP", "GPIO", "SoC Control", "Timer"]

    # Compute values
    rest_area = sum(areas_kge[names.index(n)] for n in second_row_names)
    first_row = {
        n: {"area": areas_kge[names.index(n)], "color": colors[names.index(n)]}
        for n in first_row_names
    }
    first_row["Rest"] = {"area": rest_area, "color": PULP_COLORS_BASE[-1]}
    second_row = {
        n: {"area": areas_kge[names.index(n)], "color": colors[names.index(n)]}
        for n in second_row_names
    }

    # Sort rows by area
    first_row = dict(
        sorted(first_row.items(), key=lambda x: x[1]["area"], reverse=True)
    )
    second_row = dict(
        sorted(second_row.items(), key=lambda x: x[1]["area"], reverse=True)
    )

    # Plot setup
    fig, ax = plt.subplots(figsize=(10, 4))
    ax.set_xlim(0, 1)
    ax.invert_yaxis()
    ax.axis("off")

    BAR_HEIGHT = 0.3
    Y_OFFSET = 0.7
    POS1 = 0.6
    POS2 = 0.8

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
        labels, areas, colors = zip(
            *[(k, v["area"], v["color"]) for k, v in row_dict.items()]
        )
        row_total = sum(areas)
        norm_row = [a / row_total for a in areas]
        norm_total = [a / total_area for a in areas]
        left = [sum(norm_row[:i]) for i in range(len(norm_row))]

        x = 0
        for label, val, frac_row, color, frac_total in zip(
            labels, areas, norm_row, colors, norm_total
        ):
            ax.barh(
                y,
                frac_row,
                left=x,
                height=BAR_HEIGHT,
                color=color,
                edgecolor="white",
                linewidth=2,
            )
            ax.text(
                x + frac_row / 2,
                y - POS1 * BAR_HEIGHT,
                label,
                ha="center",
                va="center",
                fontsize=10,
                weight="bold",
            )
            ax.text(
                x + frac_row / 2,
                y + POS1 * BAR_HEIGHT,
                f"{val:.1f}",
                ha="center",
                va="center",
                fontsize=10,
                weight="bold",
            )
            ax.text(
                x + frac_row / 2,
                y + POS2 * BAR_HEIGHT,
                f"{frac_total * 100:.0f}",
                ha="center",
                va="center",
                fontsize=10,
            )
            x += frac_row

        ax.text(
            1.02,
            y,
            f"{row_total:.0f}",
            ha="left",
            va="center",
            fontsize=10,
            weight="bold",
        )
        ax.text(
            1.02,
            y + POS1 * BAR_HEIGHT,
            "kGE",
            ha="left",
            va="center",
            fontsize=10,
            weight="bold",
        )
        ax.text(
            1.02,
            y + POS2 * BAR_HEIGHT,
            "%",
            ha="left",
            va="center",
            fontsize=10,
            weight="bold",
        )

        return labels, norm_row, left

    # Draw both rows
    labels1, norm_row1, left1 = plot_row(0, first_row, total_area)
    labels2, norm_row2, left2 = plot_row(Y_OFFSET, second_row, total_area)

    # Connect "Rest" to second row
    rest_index = labels1.index("Rest")

    p1 = (left1[rest_index], BAR_HEIGHT / 2)
    p2 = (left1[rest_index] + norm_row1[rest_index], BAR_HEIGHT / 2)
    p3 = (sum(norm_row2), Y_OFFSET - BAR_HEIGHT / 2)
    p4 = (0, Y_OFFSET - BAR_HEIGHT / 2)

    polygon = smooth_polygon(p1, p2, p3, p4)
    patch = patches.PathPatch(polygon, color=PULP_COLORS_BASE[-1], alpha=0.2, lw=0)
    ax.add_patch(patch)

    # Create a directory if it does not exist
    os.makedirs("plots", exist_ok=True)

    # Save figure
    plt.savefig("plots/02b_area_breakdown_stacked_bar.pdf")
    plt.savefig("plots/02b_area_breakdown_stacked_bar.png")

    # Display the plot
    plt.show()
