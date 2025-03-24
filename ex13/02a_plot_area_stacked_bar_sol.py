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

from plot import PULP_COLORS_BASE

# Argparse is a module that allows you to parse command-line arguments
# See https://docs.python.org/3/library/argparse.html for more information
import argparse

# Import the matplotlib library for plotting
# See https://matplotlib.org/stable/gallery/index.html for examples
from matplotlib import pyplot as plt

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
    #  STUDENT TASK 2a: Use an LLM to create a stacked bar chart
    # --------------------------------------------------------------------------
    # Your task is to solve this exercise with the help from an  LLM such as
    # ChatGPT or Perplexity. This task is designed to help you practice prompt
    # engineering and learn how to iterate with GenAI tools.
    #
    # Generate Python code to create a horizontal stacked bar chart using matplotlib.
    # The data represents the area breakdown of the i_croc module, where each
    # component's area is given in kGE.
    # - Normalize the area values so they sum to 1.
    # - Each component should be represented as a colored section in the bar chart.
    # - Add labels for component names above the bars.
    # - Display absolute area values (in kGE) below the bars.
    # - Show percentage values below the bars.
    # - Format the plot for readability by hiding the x-axis and ensuring all text is visible.
    # --------------------------------------------------------------------------

    # Normalize values for bar lengths
    total_area = sum(areas_kge)
    norm_values = [a / total_area for a in areas_kge]
    left_positions = [sum(norm_values[:i]) for i in range(len(norm_values))]

    # Plot setup
    fig, ax = plt.subplots(figsize=(7, 2))
    ax.xaxis.set_visible(False)
    ax.set_xlim(0, 1)

    BAR_HEIGHT = 0.3
    POS1 = 0.7
    POS2 = 1.0

    # Plot bars and labels
    for label, value, norm_value, left, color in zip(
        names, areas_kge, norm_values, left_positions, colors
    ):
        print(label, value, norm_value, left, color)

        ax.barh(0, norm_value, color=color, left=left, height=BAR_HEIGHT)
        ax.text(
            1.02,
            0,
            f"{total_area:.0f}",
            ha="left",
            va="center",
            color="black",
            fontsize=10,
            weight="bold",
        )
        ax.text(
            left + norm_value / 2,
            POS1 * BAR_HEIGHT,
            label,
            ha="center",
            va="center",
            color="black",
            fontsize=10,
        )

        ax.text(
            left + norm_value / 2,
            -POS1 * BAR_HEIGHT,
            f"{value:.1f}",
            ha="center",
            va="center",
            color="black",
            fontsize=10,
        )
        ax.text(
            1.02,
            -POS1 * BAR_HEIGHT,
            "kGE",
            ha="left",
            va="center",
            color="black",
            fontsize=10,
            weight="bold",
        )

        ax.text(
            left + norm_value / 2,
            -POS2 * BAR_HEIGHT,
            f"{norm_value * 100:.0f}",
            ha="center",
            va="center",
            color="black",
            fontsize=10,
        )
        ax.text(
            1.02,
            -POS2 * BAR_HEIGHT,
            "%",
            ha="left",
            va="center",
            color="black",
            fontsize=10,
            weight="bold",
        )

    plt.tight_layout()
    plt.axis("off")

    # Create a directory if it does not exist
    os.makedirs("plots", exist_ok=True)

    # Save figure
    plt.savefig("plots/02a_area_breakdown_stacked_bar.pdf")
    plt.savefig("plots/02a_area_breakdown_stacked_bar.png")

    # Display the plot
    plt.show()
