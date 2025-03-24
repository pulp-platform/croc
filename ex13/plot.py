# Copyright 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Philip Wiese <wiesep@iis.ee.ethz.ch>

import matplotlib.colors as mcolors
import matplotlib.path as mpath
import matplotlib.axes as maxes


PULP_COLOR = {
    # Orange
    "Orange": {
        "VeryDark": "#91490A",  # "#9d4417", PULP Very Dark Orange
        "Dark": "#DA6D0F",  # "#ec6625", PULP Dark Orange
        "Base": "#F29545",  # "#ff904f", PULP Orange
        "Light": "#F7BF8F",  # "#ffbc93", PULP Light Orange
        "VeryLight": "#FAD5B5",  # "#ffd2b7", PULP Very Light Orange
        "SuperLight": "#FCEADA",  # "#ffe8da", PULP Super Light Orange
    },
    # Pink
    "Pink": {
        "VeryDark": "#480335",  # "#4f0033", PULP Very Dark Pink
        "Dark": "#6D044F",  # "#76004c", PULP Dark Pink
        "Base": "#910569",  # "#9e0066", PULP Pink
        "Light": "#F82EBE",  # "#ff24ba", PULP Light Pink
        "VeryLight": "#FA74D4",  # "#ff71cf", PULP Very Light Pink
        "SuperLight": "#FDB9E9",  # "#ffb8e7", PULP Super Light Pink
    },
    # Green
    "Green": {
        "VeryDark": "#0B431C",  # "#00431f", PULP Very Dark Green
        "Dark": "#10642A",  # "#00642f", PULP Dark Green
        "Base": "#168638",  # "#008640", PULP Green
        "Light": "#49E177",  # "#00e180", PULP Light Green
        "VeryLight": "#85EBA4",  # "#84c6a3", PULP Very Light Green
        "SuperLight": "#C2F5D2",  # "#b6f5d3", PULP Super Light Green
    },
    # Red
    "Red": {
        "VeryDark": "#541916",  # "#5c1416", PULP Very Dark Red
        "Dark": "#7E2621",  # "#8a1e23", PULP Dark Red
        "Base": "#A8322C",  # "#b7292f", PULP Red
        "Light": "#DA7671",  # "#e97272", PULP Light Red
        "VeryLight": "#E6A4A1",  # "#f2a1a1", PULP Very Light Red
        "SuperLight": "#F3D1D0",  # "#f9d0cf", PULP Super Light Red
    },
    # Blue
    "Blue": {
        "VeryDark": "#093558",  # "#003656", PULP Very Dark Blue
        "Dark": "#0E4F84",  # "#005180", PULP Dark Blue
        "Base": "#1269B0",  # "#006dac", PULP Blue
        "Light": "#53A8ED",  # "#00ace9", PULP Light Blue
        "VeryLight": "#8CC5F3",  # "#74c8f0", PULP Very Light Blue
        "SuperLight": "#C6E2F9",  # "#bce3f7", PULP Super Light Blue
    },
    # Greys
    "Gray": {
        "VeryDark": "#101010",  # PULP Very Dark Grey
        "Dark": "#202020",  # PULP Dark Grey
        "Base": "#505050",  # PULP Grey
        "Light": "#707070",  # PULP Light Grey
        "VeryLight": "#909090",  # PULP Very Light Grey
        "SuperLight": "#B0B0B0",  # PULP Super Light Grey
    },
    # All Black
    "Black": {
        "Base": "#000000",
    },
}


# Define PULP colors in a flat list (from darkest to lightest for each color family)
PULP_COLORS_BASE = [
    PULP_COLOR["Orange"]["Base"],
    PULP_COLOR["Pink"]["Base"],
    PULP_COLOR["Green"]["Base"],
    PULP_COLOR["Red"]["Base"],
    PULP_COLOR["Blue"]["Base"],
    PULP_COLOR["Gray"]["Base"],
    PULP_COLOR["Orange"]["Dark"],
    PULP_COLOR["Pink"]["Dark"],
    PULP_COLOR["Green"]["Dark"],
    PULP_COLOR["Red"]["Dark"],
    PULP_COLOR["Blue"]["Dark"],
    PULP_COLOR["Gray"]["Dark"],
    PULP_COLOR["Orange"]["VeryLight"],
    PULP_COLOR["Pink"]["VeryLight"],
    PULP_COLOR["Green"]["VeryLight"],
    PULP_COLOR["Red"]["VeryLight"],
    PULP_COLOR["Blue"]["VeryLight"],
    PULP_COLOR["Gray"]["VeryLight"],
]

# Create a colormap using PULP colors
pulp_cmap = mcolors.ListedColormap(PULP_COLORS_BASE, name="pulp_cmap")


def curve_between_points(p1, p2, curve_height=0.5):
    """ "
    Create a path between two points with a curve in the middle."

    Args:
        p1 (tuple): The first point (x, y)
        p2 (tuple): The second point (x, y)

    Returns:
        list: A list of path segments
    """

    curve_height = -curve_height if p2[1] < p1[1] else curve_height
    path_area = [
        (mpath.Path.CURVE4, (p1[0], p1[1] + curve_height)),
        (mpath.Path.CURVE4, (p2[0], p2[1] - curve_height)),
        (mpath.Path.CURVE4, p2),
    ]
    return path_area


def smooth_polygon(p1: tuple, p2: tuple, p3: tuple, p4: tuple) -> mpath.Path:
    """
    Return a path that connects the four points with a smooth curve.
    You can use this path to fill an area with a color.

    Example:
        ```
        path = smooth_polygon((0,0), (1,1), (2,1), (3,0))
        patch = patches.PathPatch(path, color="gray", linewidth=0.4, alpha=0.2, fill=True)
        ax.add_patch(patch)
        ```

    Args:
        p1 (tuple): Upper left point
        p2 (tuple): Upper right point
        p3 (tuple): Lower right point
        p4 (tuple): Lower left point

    Returns:
        mpath.Path: A path that connects the four points with a smooth curve.
    """
    height = p3[1] - p2[1]

    path_area = [(mpath.Path.MOVETO, p2)]
    path_area += curve_between_points(p2, p3, height / 2)
    path_area += [(mpath.Path.LINETO, p4)]
    path_area += curve_between_points(p4, p1, height / 2)
    path_area += [(mpath.Path.CLOSEPOLY, p2)]

    codes, verts = zip(*path_area)
    return mpath.Path(verts, codes)
