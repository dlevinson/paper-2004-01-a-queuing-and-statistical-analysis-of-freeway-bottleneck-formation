# Build And Use Notes

Updated: 2026-05-17 03:00:37 AEST

`code/original/error_corr3.c` is preserved with original classic-Mac carriage-return line endings. `code/modernized/error_corr3_c99.c` is a convenience copy with line endings normalized and the entry point changed from `void main()` to `int main(void)` so modern C compilers will parse it.

The program is interactive. It asks for detector-combination sums and calibration values, then prints adjusted freeway/ramp counts. No sample input file was found with the source folder, so the package should be treated as a historical detector-calibration code component rather than a one-command reproduction of the paper's tables.

Compile check on 2026-05-17 03:00:37 AEST: clang -std=c99 -Wall -Wextra -fsyntax-only returned 0.
