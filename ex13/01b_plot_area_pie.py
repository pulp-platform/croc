# Copyright 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Philip Wiese <wiesep@iis.ee.ethz.ch>

# ------------------------------------------------------------------------------
#  STUDENT TASK 1b:
#
#  In this exercise, you will visualize the area breakdown of the i_croc module
#  using a pie chart. The area data is extracted from an OpenROAD area report.
#
#  The code below extracts the hierarchical area data and visualizes it as a
#  bar plot. Your task is to modify the code to generate a pie chart instead.
#
#  Follow the instructions in the code comments to complete the exercise.
# ------------------------------------------------------------------------------

# Import the modules to extract hierarchical area data and plot the results
from area import extract_areas, get_path

# Argparse is a module that allows you to parse command-line arguments
# See https://docs.python.org/3/library/argparse.html for more information
import argparse

# Import the matplotlib library for plotting
# See https://matplotlib.org/stable/gallery/index.html for examples
from matplotlib import pyplot as plt

# Import the os module to create directories
import os

if __name__ == "__main__":
    # Usage: python 01b_plot_area_pie_sol.py <area_report_file>
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

    # Extract names and areas
    names = []
    areas = []

    for node in node_i_croc.children:
        print(node)
        names.append(node.name)
        areas.append(node.area)

    # ==========================================================================
    #  STUDENT TASKS - MODIFY THE CODE BELOW TO COMPLETE THE EXERCISE
    # ==========================================================================

    # --------------------------------------------------------------------------
    #  STUDENT TASK 1b.1: Create a pie chart instead of a bar plot
    # --------------------------------------------------------------------------
    # Instead of a bar plot, generate a pie chart that visualizes the area
    # distribution.
    # Use `plt.pie()` instead of `plt.bar()`.
    #
    # HINT: The `plt.pie()` function requires:
    #       - The area values
    # --------------------------------------------------------------------------

    # --------------------------------------------------------------------------
    #  STUDENT TASK 1b.2: Improve the readability of the pie chart
    # --------------------------------------------------------------------------
    # Matplotlib provides a colormap function `get_cmap()` that can generate a
    # set of visually distinguishable colors. Alternatively, you can define your
    # own custom colors. Use the colors to visualize the area distribution in
    # the pie chart.
    #
    # Feel free to experiment with other features to improve the readability of
    # the pie chart.
    #
    # HINT: Look at `matplotlib.cm.get_cmap()`
    #       Documentation: https://matplotlib.org/stable/api/cm_api.html#matplotlib.cm.get_cmap
    #
    # HINT: The `plt.pie()` function can be suplied with:
    #       - Labels (the names of the components)
    #       - Colors (from Task 1b.1)
    #       - Optional: Use `autopct='%1.1f%%'` to show percentages on the chart
    # --------------------------------------------------------------------------
