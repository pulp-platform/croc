# Flow Report

ArtistIC publishes the chip images, map, verification results and logs to Pages.
Layout data comes from the selected successful Full Flow run. Simulation results
come from Short Flow at the same commit, using each job's latest execution.
Missing tests appear as **Not run**; interrupted simulation flows are **Incomplete**.

The CI scripts record timings and results in `ci-results/`. The report checks
commit, run and job attempt before using an artifact. It reads cell footprints
from the final OpenROAD database and violations from KLayout's result databases.
Test names link to their software source at the tested commit.

Manual ArtistIC runs require a push, manual or release Full Flow run containing
the report artifacts. Older runs and pull-request merge builds are not supported.
Pages publishes the latest main-branch Full Flow attempt only when it passes.

After downloading the workflow inputs and generating the artwork:

```sh
python3 .github/scripts/build_report.py --inputs report-inputs --output artistic/work/site
```
