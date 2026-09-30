# A Queuing And Statistical Analysis Of Freeway Bottleneck Formation

## Contribution

This paper combines detector calibration, queuing analysis, and statistical tests to distinguish active freeway bottlenecks from congestion propagated upstream by downstream restrictions. Applied to Interstate 94, it shows that a section's bottleneck role changes over time and provides a method for estimating density and speed without assuming uniform effective vehicle length.

## Bibliographic Information

- Row ID: `paper-2004-01`
- Year: 2004
- Authors: Shantanu Das; David M. Levinson
- Venue: ASCE Journal of Transportation Engineering 130(6):787-795
- DOI: https://doi.org/10.1061/(ASCE)0733-947X(2004)130:6(787)
- Citation: Das, Shantanu, and Levinson, David M. (2004). A Queuing and Statistical Analysis of Freeway Bottleneck Formation. Journal of Transportation Engineering, 130(6), 787-795. https://doi.org/10.1061/(ASCE)0733-947X(2004)130:6(787)

## Archive Status

- Workbench state: `provenance_only_pending_rights`
- Audit upload action: `documentation_and_provenance_only`
- Rights status: `code_licensing_authority_unresolved`
- Controlled access status: `none`
- Human subjects status: `no`
- Asset match status: `code_only_match`
- Audit timestamp: 2026-05-17 03:00:37 AEST
- Rights review: 2026-09-28 AEST (see `LICENSE_STATUS.md`)

## Package Boundary

This package contains the best-available detector-count calibration code found for the paper's I-94 queueing/bottleneck workflow. It is a historical code component, not a full reproduction package for the article tables.

Repository contents and release boundary:

- `code/original/error_corr3.c`: original detector-count calibration C source preserved as found; provenance reference only, pending rights clearance.
- `code/modernized/error_corr3_c99.c`: convenience copy with normalized line endings, modern `main` signature, and an added `return 0;`; the same unresolved rights apply.
- `documentation/`: source review, build/use notes, and rights/provenance notes.
- `metadata/`: manifest and source-boundary decisions.

Both source headers credit Shantanu Das. The repository evidence does not establish David M. Levinson's sole ownership or authority to license either complete file. `LICENSE.md` grants no software license; the code is excluded from the cleared release payload. The documentation's CC BY 4.0 grant covers only copyright interests held by David M. Levinson and does not cover the code or paper.

Not included: raw MnDOT detector observations, derived regression tables, duplicated text copy of the same source, paper drafts, and correspondence. The paper PDF is tracked as a reference copy and remains under ASCE/publisher terms; its presence does not clear public upload or redistribution.

## Remaining Work

The earlier source search is recorded as closed. Code licensing remains unresolved: document the rights holder(s) and a basis for licensing both files before releasing them under a software license. See `LICENSE_STATUS.md` for the audit and missing evidence. The paper PDF remains under ASCE/publisher terms.

<!-- package-hardening-status:start -->
## Package Hardening Status

Updated: 2026-09-28 AEST

- Pipeline: `UPLOADED`
- Sidecars added/updated: `PACKAGE_STATUS.md`, `PACKAGE_MANIFEST.csv`, `LICENSE_STATUS.md`.
- The uploaded state records repository presence, not rights clearance.
- Code and paper references are excluded from the cleared release payload; use the manifest statuses and `LICENSE_STATUS.md`.
- Root `LICENSE.md` records the provenance-only code boundary, the limited documentation grant, and the unchanged ASCE/publisher boundary.
<!-- package-hardening-status:end -->
