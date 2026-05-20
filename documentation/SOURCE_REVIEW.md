# Source Review

Updated: 2026-05-17 03:00:37 AEST

## Paper Evidence

The paper states that its analysis used 30-second freeway flow and occupancy observations from Interstate 94, aggregated to five-minute periods, collected November 1-8, 2000 during the Twin Cities ramp-meter shutoff period. It describes a detector-count balancing/calibration procedure and says a computer program was coded to automate that analysis.

## Local Source Evidence

The only files in `/Users/dlev2617/Documents/Data/~Nexus_Data/~CODE/Shantanu Das - queueing` are `error_corr3.c` and `error_corr_code.txt`. The C source header says it calibrates detector counts on a freeway section and records a first successful run on December 4, 2001, which is consistent with the paper's detector-calibration method.

## Package Boundary

This package stages the best-available detector-calibration code component. It does not stage raw MnDOT detector data, derived regression tables, paper drafts, or broader ramp-meter datasets. The text-copy duplicate is documented in `metadata/SOURCE_BOUNDARY_DECISIONS.csv` but is not duplicated in the upload payload.
