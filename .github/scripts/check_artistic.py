# Copyright 2026 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

"""Check Croc artwork against its layout and placed components before publishing."""

import collections
import json
import math
import os
import re
import sys
import xml.etree.ElementTree as ET
from pathlib import Path

import pikepdf
import pya
from PIL import Image, ImageChops

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "artistic" / "artistic"))

from artistic.outlines import (_canvas, _def_placements, _group_placements,
                               _lef_sizes, _options, _pixel_box)
from artistic.project import Project


def require(condition, message):
    if not condition:
        raise RuntimeError(message)


def region(layout, layer):
    index = layout.find_layer(layer["layer"], layer["datatype"])
    return (pya.Region(layout.top_cell().begin_shapes_rec(index))
            if index is not None else pya.Region())


def instances(cell):
    return collections.Counter((instance.cell.name, str(instance.cplx_trans),
                                instance.na, instance.nb, str(instance.a), str(instance.b))
                               for instance in cell.each_inst())


def texts(shapes):
    return collections.Counter(shape.text.to_s() for shape in shapes.each() if shape.is_text())


def check_original_cells(base, merged):
    layers = [(info, base.find_layer(info), merged.find_layer(info))
              for info in base.layer_infos()]
    require(all(target is not None for _, _, target in layers), "Merged GDS lost an input layer")
    for cell in base.each_cell():
        target = merged.cell(cell.name)
        require(target is not None, f"Merged GDS lost cell: {cell.name}")
        require(instances(cell) == instances(target), f"Merged GDS changed instances in {cell.name}")
        for info, source_index, target_index in layers:
            source_shapes, target_shapes = cell.shapes(source_index), target.shapes(target_index)
            require((pya.Region(source_shapes) ^ pya.Region(target_shapes)).is_empty(),
                    f"Merged GDS changed {cell.name} on layer {info}")
            require(texts(source_shapes) == texts(target_shapes),
                    f"Merged GDS changed text in {cell.name} on layer {info}")


def main():
    project = Project.load(sys.argv[1] if len(sys.argv) > 1 else ROOT / "artistic/croc.toml")
    config, work = project.config, project.work_dir
    settings, def_file, lef_files, modules, _ = _options(config)
    render = json.loads((work / "render.json").read_text())
    resolution = tuple(render["resolution"])
    for stem in (f"{project.name}_render", f"{project.name}_modules"):
        with Image.open(work / f"{stem}.png") as image:
            require(image.size == resolution, f"Wrong dimensions: {stem}")
            rgb = image.convert("RGB")
            require(any(low != high for low, high in rgb.getextrema()), f"Blank image: {stem}")
        with Image.open(work / f"{stem}.jpg") as image:
            image.load()
            require(image.size == resolution, f"Wrong JPEG dimensions: {stem}")
        with pikepdf.open(work / f"{stem}.pdf") as pdf:
            require(len(pdf.pages) == 1, f"Wrong PDF page count: {stem}")

    base, merged, logo = pya.Layout(), pya.Layout(), pya.Layout()
    base.read(config["design"]["gds"])
    merged.read(str(work / f"{project.name}_chip.gds.gz"))
    logo.read(str(work / f"{project.name}_logo.gds"))
    require(base.dbu == merged.dbu == logo.dbu, "GDS database units differ")
    check_original_cells(base, merged)
    top_design = os.environ.get("TOP_DESIGN")
    require(top_design, "Source env.sh before validating Croc artwork")
    chip_instances = [instance for instance in base.top_cell().each_inst()
                      if instance.cell.name == top_design]
    require(len(chip_instances) == 1, "Expected one placed chip below the seal-ring top cell")
    transform = chip_instances[0].dcplx_trans
    require(not transform.is_mirror() and transform.angle == 0 and transform.mag == 1,
            "Unexpected chip rotation or scale relative to DEF")
    offset = settings.get("offset_um", [0, 0])
    require(abs(transform.disp.x - offset[0]) <= base.dbu and
            abs(transform.disp.y - offset[1]) <= base.dbu,
            f"Outline offset {offset} does not match sealed GDS translation {transform.disp}")

    svg = ET.parse(work / f"{project.name}_modules.svg").getroot()
    labels = collections.defaultdict(list)
    for text in svg.findall("{http://www.w3.org/2000/svg}text"):
        labels[text.text].append((float(text.attrib["x"]), float(text.attrib["y"])))
    placements = _def_placements(def_file, _lef_sizes(lef_files))
    canvas = _canvas(render["gds"]["viewport_um"], resolution)
    groups = _group_placements(placements, modules)
    for pattern, spec in modules.items():
        require(groups.get(pattern), f"No DEF placements matched module: {pattern}")
        require(labels[spec["label"]], f"Missing module outline/label: {spec['label']}")
        for box in groups[pattern]:
            if box[2] <= box[0] or box[3] <= box[1]:
                continue
            shifted = (box[0] + offset[0], box[1] + offset[1],
                       box[2] + offset[0], box[3] + offset[1])
            pixels = _pixel_box(shifted, canvas, resolution)
            require(pixels is not None, f"Macro outside render: {pattern}")
            require(any(pixels[0] <= x <= pixels[2] and pixels[1] <= y <= pixels[3]
                        for x, y in labels[spec["label"]]),
                    f"No {spec['label']} label inside placed macro {box}")

    report = json.loads((work / "logo_merge.json").read_text())
    layer = report["resolved_layer"]
    generated = json.loads((work / "map.json").read_text())
    top_metal = generated["technology"]["top_metal"]
    expected_layer = next(item for item in generated["layers"] if item["name"] == top_metal)
    require(layer == expected_layer, "Logo is not on the technology's terminal metal")
    for key in ("feature_um", "spacing_um", "pitch_um"):
        require(abs(report[key] - config["logo"][key]) <= base.dbu,
                f"Logo {key} does not match the project")
    original, result, artwork = region(base, layer), region(merged, layer), region(logo, layer)
    require(not artwork.is_empty(), "Logo geometry is empty")
    require((result ^ (original + artwork)).is_empty(), "Merged metal differs from base plus logo")
    require((original & artwork).is_empty(), "Logo overlaps existing metal")
    feature = round(report["feature_um"] / base.dbu)
    spacing = round(report["spacing_um"] / base.dbu)
    for polygon in artwork.each():
        box = polygon.bbox()
        require(box.width() == box.height() == feature and polygon.area() == feature * feature,
                "Logo feature is not the configured square")
    require(artwork.width_check(feature).is_empty(), "Logo has narrow features")
    require(artwork.space_check(spacing).is_empty(), "Logo features are too close together")
    require(original.separation_check(artwork, spacing).is_empty(), "Logo is too close to existing metal")

    map_dir = work / config["map"].get("output", "map")
    metadata = json.loads((map_dir / "map.json").read_text())
    if config["map"].get("views") == ["composite", "metals"]:
        generated = json.loads((work / "map.json").read_text())
        metals = [item["name"] for item in generated["layers"]
                  if re.fullmatch(r"(?:Top)?Metal\d+", item["name"])]
        require(metadata["layers"] == ["composite", *metals], "Map is missing a generated metal view")
    require([metadata["width"], metadata["height"]] == config["map"]["resolution"],
            "Map dimensions do not match the project")
    require((map_dir / "index.html").is_file(), "Map viewer is missing")
    tile_size, max_zoom = metadata["tile_size"], metadata["max_zoom"]
    require(tile_size == config["map"].get("tile_size", 512), "Map tile size does not match the project")
    require(max_zoom == max(0, math.ceil(math.log2(max(config["map"]["resolution"]) / tile_size))),
            "Map zoom pyramid does not match the project resolution")
    nx, ny = math.ceil(metadata["width"] / tile_size), math.ceil(metadata["height"] / tile_size)
    total = 0
    for name in metadata["layers"]:
        expected = set()
        for zoom in range(max_zoom + 1):
            factor = 2 ** (max_zoom - zoom)
            for x in range(math.ceil(nx / factor)):
                for y in range(math.ceil(ny / factor)):
                    expected.add(Path(str(zoom)) / str(x) / f"{y}.png")
        layer_root = map_dir / name
        actual = {path.relative_to(layer_root) for path in layer_root.rglob("*.png")}
        require(actual == expected, f"Missing or extra map tiles in {name}")
        nonblank = False
        for tile in sorted(actual):
            with Image.open(layer_root / tile) as image:
                image.load()
                require(image.size == (tile_size, tile_size) and image.mode == "RGBA",
                        f"Invalid map tile: {name}/{tile}")
                red, green, blue, alpha = image.split()
                nonblank |= any(low != high for low, high in image.getextrema()[:3])
                if name != "composite" and config["map"].get("layer_style", "mask") == "mask":
                    require(alpha.getextrema() == (255, 255), f"Transparent mask: {name}/{tile}")
                    require(ImageChops.difference(red, green).getbbox() is None and
                            ImageChops.difference(red, blue).getbbox() is None,
                            f"Colored mask: {name}/{tile}")
        require(nonblank, f"Map layer is blank: {name}")
        total += len(actual)
    print(f"[INFO][Artistic] Validated render, all module labels, sealed alignment, logo spacing and {total} map tiles")


if __name__ == "__main__":
    main()
