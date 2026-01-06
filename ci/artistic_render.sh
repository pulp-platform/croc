#!/usr/bin/env bash
set -euo pipefail

# Portable ArtistIC rendering pipeline for Croc
# Requires: git, gh CLI (for artifact download), python3, make, klayout, inkscape, imagemagick, sed, gzip.
# Optional: apt-get and sudo for dependency installation.
# Environment (override as needed):
#   GH_TOKEN       - GitHub token with repo read access (needed to download artifacts)
#   REPO           - GitHub repo in owner/name form (default: pulp-platform/croc)
#   WF_NAME        - Workflow name to source artifacts from (default: "Full Flow")
#   RUN_ID         - Workflow run-id to download artifacts from (optional; auto-detect latest successful if empty)
#   ARTIFACT_NAME  - Artifact name containing croc GDS (default: croc-gds)
#   ARTISTIC_REF   - Artistic commit-ish to use (default pinned to known-good)
#   WORKDIR        - Working directory (default: repo root)

log() { echo "[artistic] $*"; }
err() { echo "[artistic][error] $*" >&2; }

ROOT=${WORKDIR:-"$(git -C "$(pwd)" rev-parse --show-toplevel 2>/dev/null || pwd)"}
REPO=${REPO:-"pulp-platform/croc"}
WF_NAME=${WF_NAME:-"Full Flow"}
RUN_ID=${RUN_ID:-""}
ARTIFACT_NAME=${ARTIFACT_NAME:-"croc-gds"}
ARTISTIC_REF=${ARTISTIC_REF:-"33986fa39e07d89a8337d65e84b01113bf18ea03"}

ARTISTIC_DIR="${ROOT}/artistic"
KLAYOUT_DIR="${ROOT}/klayout"
RENDER_DIR="${ARTISTIC_DIR}/renderics"
MAPIFY_DIR="${ARTISTIC_DIR}/mapify"
LOGO_SRC="${ROOT}/doc/artwork/logo_chip.svg"
LOGO_OUT="${ROOT}/doc/artwork/logo.svg"
LOGO_PNG="${ROOT}/doc/artwork/logo.png"

if [[ -z "${GH_TOKEN:-}" ]]; then
  err "GH_TOKEN is required to download artifacts via gh CLI."; exit 1;
fi

check_cmd() {
  if ! command -v "$1" >/dev/null 2>&1; then
    err "Missing required tool: $1"; return 1; fi
}

# Try installing common deps if apt-get is available and the tool is missing.
maybe_install() {
  local pkg=$1; local bin=$2
  if command -v "$bin" >/dev/null 2>&1; then return 0; fi
  if command -v apt-get >/dev/null 2>&1; then
    log "Installing $pkg via apt-get";
    sudo apt-get update -y >/dev/null
    sudo apt-get install -y "$pkg"
  else
    err "Please install $pkg (provides $bin) manually."; return 1;
  fi
}

# Ensure core tools
for tool in git gh python3 make sed gzip; do check_cmd "$tool"; done
maybe_install inkscape inkscape || true
maybe_install imagemagick convert || true
maybe_install klayout klayout || true

# Python deps
python3 - <<'PY'
import importlib, subprocess, sys
missing=[]
for m in ("gdspy",):
    try:
        importlib.import_module(m)
    except ImportError:
        missing.append(m)
if missing:
    cmd=[sys.executable, "-m", "pip", "install", "--break-system-packages", *missing]
    print("Installing python deps:", " ".join(missing))
    subprocess.check_call(cmd)
PY

# Download GDS artifact
mkdir -p "$KLAYOUT_DIR"
if [[ -z "$RUN_ID" ]]; then
  log "Resolving latest run-id for workflow '$WF_NAME' in $REPO"
  RUN_ID=$(gh run --repo "$REPO" list --workflow "$WF_NAME" --json databaseId,status,conclusion --jq '[.[]|select(.conclusion=="success")][0].databaseId')
fi
if [[ -z "$RUN_ID" ]]; then
  err "Could not resolve a successful run for workflow '$WF_NAME'"; exit 1;
fi
log "Downloading artifact '$ARTIFACT_NAME' from run $RUN_ID"
GH_TOKEN="$GH_TOKEN" gh run download --repo "$REPO" --name "$ARTIFACT_NAME" --run-id "$RUN_ID" --dir "$KLAYOUT_DIR"

# Clone Artistic
if [[ ! -d "$ARTISTIC_DIR/.git" ]]; then
  log "Cloning Artistic repo"
  git clone --depth 1 --branch "$ARTISTIC_REF" https://github.com/pulp-platform/artistic.git "$ARTISTIC_DIR"
else
  log "Updating Artistic repo"
  git -C "$ARTISTIC_DIR" fetch --depth 1 origin "$ARTISTIC_REF"
  git -C "$ARTISTIC_DIR" checkout "$ARTISTIC_REF"
fi

# Create working dirs
mkdir -p "$RENDER_DIR" "$MAPIFY_DIR" "$ARTISTIC_DIR/meerkat_work"

# Prepare logo
if [[ -f "$LOGO_SRC" ]]; then
  log "Customizing logo"
  sed "s/#DATE#/$(date '+%Y-%m-%d')/g" "$LOGO_SRC" > "$LOGO_OUT"
  sed -i "s/#HASH#/$(git -C "$ROOT" rev-parse --short HEAD)/g" "$LOGO_OUT"
  sed -i "s|#REPO#|gh.io/${REPO}|g" "$LOGO_OUT"
  inkscape "$LOGO_OUT" -w 660 -h 660 -o "$LOGO_PNG"
else
  err "Logo source not found at $LOGO_SRC"; exit 1;
fi

# Convert to mono for mapify
convert "$LOGO_PNG" -remap pattern:gray50 "$ARTISTIC_DIR/meerkat_work/logo_mono.png"

# Run meerkat interface (top-level GDS preparation)
log "Running meerkat_interface"
python3 "$ARTISTIC_DIR/scripts/meerkat_interface.py" \
  -i "$KLAYOUT_DIR/croc_chip.gds" \
  -m "$ARTISTIC_DIR/meerkat_work/croc_tm.gds.gz" \
  -g "$ARTISTIC_DIR/meerkat_work/croc_logo.gds" \
  -o "$ARTISTIC_DIR/meerkat_work/croc_chip.gds.gz" \
  -w "$ARTISTIC_DIR/meerkat_work" \
  -l 134

# Export top metal and decompress
( cd "$ARTISTIC_DIR/meerkat_work" && klayout -zz -rm ../scripts/export_top_metal.py && gzip -d -f croc_tm.gds.gz )

# Generate logo GDS
python3 "$ARTISTIC_DIR/scripts/meerkat.py" \
  -m "7,7,7,7" \
  -i "$ARTISTIC_DIR/meerkat_work/logo_mono.png" \
  -g "$ARTISTIC_DIR/meerkat_work/croc_tm.gds" \
  -l 134 \
  -n croc \
  -s "$ARTISTIC_DIR/meerkat_work/croc_logo.svg" \
  -o "$ARTISTIC_DIR/meerkat_work/croc_logo.gds"

# Merge logo
( cd "$ARTISTIC_DIR/meerkat_work" && klayout -zz -rm ../scripts/merge_logo.py )

gen_cfg() {
  local src=$1 dst=$2
  sed "s|/fosic/designs|$ROOT|g" "$src" > "$dst"
}

gen_cfg "$ROOT/.github/config/croc_ci.json" "$RENDER_DIR/croc_ci_runner.json"
gen_cfg "$ROOT/.github/config/croc_map_ci.json" "$RENDER_DIR/croc_map_ci_runner.json"
cp "$ROOT/.github/config/croc_ci.json" "$RENDER_DIR/croc_ci.json"
cp "$ROOT/.github/config/croc_map_ci.json" "$RENDER_DIR/croc_map_ci.json"

# Analyze and render
log "Analyzing"
make -C "$ARTISTIC_DIR" analyze CFG_FILE="$RENDER_DIR/croc_ci_runner.json" > "$RENDER_DIR/analyze.txt"
log "Rendering raw tiles"
make -C "$ARTISTIC_DIR" gen_raw CFG_FILE="$RENDER_DIR/croc_ci_runner.json"
log "Rendering PDFs"
make -C "$ARTISTIC_DIR" -j gen_pdfs CFG_FILE="$RENDER_DIR/croc_ci_runner.json"
log "Rendering map tiles"
make -C "$ARTISTIC_DIR" gen_raw CFG_FILE="$RENDER_DIR/croc_map_ci_runner.json"
make -C "$ARTISTIC_DIR" -j gen_tiles CFG_FILE="$RENDER_DIR/croc_map_ci_runner.json"
( cd "$ARTISTIC_DIR" && python3 scripts/mapify.py "$RENDER_DIR/croc_map_ci_runner.json" | sh )

# Final assets
mv "$RENDER_DIR"/DPI__croc_0-0.png "$RENDER_DIR/croc_render.png"
mv "$RENDER_DIR"/PDF__croc_0-0.pdf "$RENDER_DIR/croc_render.pdf"
convert "$RENDER_DIR/croc_render.png" "$RENDER_DIR/croc_render.jpg"

# Copy index for pages map
cp "$ROOT/.github/config/gh-pages-map.html" "$MAPIFY_DIR/index.html"
cp "$ARTISTIC_DIR/meerkat_work/croc_logo.gds" "$MAPIFY_DIR/croc_logo.gds"

log "Done. Outputs are in $ROOT/artistic/renderics and $ROOT/artistic/mapify"
