# Copyright 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Philip Wiese <wiesep@iis.ee.ethz.ch>

import re
import logging
import argparse

# Configure logging
logging.basicConfig(level=logging.INFO, format="%(levelname)s: %(message)s")


class Node:
    """
    A node in a hierarchical tree structure.

    Attributes:
        name (str): The name of the node.
        area (float): The area of the node.
        children (Dict[str, Node]): The children of the node, indexed by their name.

    Methods:
        add_child(child: Node): Adds a child to the node.
    """

    def __init__(self, name: str, area: float):
        self.name = name
        self.area = area
        self.children = []

    def add_child(self, child: "Node"):
        """
        Adds a child to the node.

        Args:
            child (Node): The child node to add.
        """
        self.children.append(child)

    def __str__(self):
        return f"{self.name} ({self.area} um^2)"

    def __repr__(self):
        return f"Node({self.name})"


def extract_areas(area_report_path: str) -> Node:
    """
    Extract the hierarchical area from an OpenROAD area report.

    Args:
        area_report_path (str): Path to the area report.

    Returns:
        Node: The root of the hierarchical area tree.
    """
    logging.info(f"Reading area report from {area_report_path}")

    with open(area_report_path) as file:
        lines = file.readlines()

    hierarchy_section = False
    root = None
    stack = []

    logging.debug("Parsing the hierarchical area report...")

    for line in lines:
        line = line.rstrip()

        if "Hierarchical Area Report" in line:
            hierarchy_section = True
            continue

        if not hierarchy_section or not line.strip():
            continue

        # Match the hierarchy name and its area (first float number in the line)
        match = re.match(r"(\s*)(\S+)\s+((?:[\d\.]+\s+){19}[\d\.]+)", line)
        if match:
            indent, name, numbers = match.groups()
            number_list = [float(n) for n in numbers.split()]

            area = float(number_list[0])
            level = (
                len(indent) // 2
            )  # Each indentation level corresponds to a depth in the hierarchy

            node = Node(name, area)
            logging.debug(f"Extracted node: {node} at level {level}")

            if level == 0:
                root = node
                stack = [node]
                logging.debug(f"Set root node: {node.name}")
            else:
                # Ensure stack has enough depth by popping excess levels
                while len(stack) > level:
                    stack.pop()

                if stack:
                    parent = stack[-1]
                    parent.add_child(node)
                    stack.append(node)
                    logging.debug(f"Added {node.name} as child to {parent.name}")
                else:
                    logging.error(
                        f"No valid parent found for {name} at level {level}. Skipping."
                    )

    return root


def print_tree(node, indent=0, level=-1):
    """Recursively prints the tree structure up to a certain level."""
    if level == -1:
        return

    print("  " * indent + str(node))
    for child in node.children:
        print_tree(child, indent + 1, level - 1)


def get_path(node, path):
    """Get node by path."""
    if not path:
        return node

    if path[0] == node.name:
        path.pop(0)

    for child in node.children:
        if child.name == path[0]:
            return get_path(child, path[1:])

    return None


if __name__ == "__main__":
    # Use argparse for command-line arguments
    parser = argparse.ArgumentParser(
        description="Extract hierarchical areas from an OpenROAD area report."
    )
    parser.add_argument("file", type=str, help="Path to the area report file")
    parser.add_argument(
        "-v",
        "--verbose",
        action="count",
        default=0,
        help="Increase verbosity (-v for debug, -vv for debug+extra)",
    )

    args = parser.parse_args()

    # Adjust logging level based on verbosity
    if args.verbose == 1:
        logging.getLogger().setLevel(logging.DEBUG)
    elif args.verbose >= 2:
        logging.getLogger().setLevel(logging.NOTSET)

    logging.debug("Debugging mode enabled.")

    area_tree = extract_areas(args.file)

    if area_tree is None:
        logging.warning("No hierarchical area data found.")
        exit(-1)

    # Print area tree up to level 3
    print_tree(area_tree, level=3)
