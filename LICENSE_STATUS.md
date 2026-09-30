# License Status: A Queuing And Statistical Analysis Of Freeway Bottleneck Formation

Reviewed: 2026-09-28 AEST

## Decision

Code status: `provenance_only_pending_rights`.

The available evidence does not establish David M. Levinson's sole ownership
or authority to apply MIT to either complete code file. This is an evidence
gap, not a finding that he has no rights. `LICENSE.md` therefore grants no
software license and makes no sole-owner copyright claim. Adding Shantanu
Das's name to the proposed MIT notice would not supply the missing authority.

The CC BY 4.0 documentation grant is limited to copyright interests held by
David M. Levinson. The paper remains under ASCE/publisher terms. No
third-party raw data are included or relicensed.

## Evidence Reviewed

Scope: both complete C files, repository documentation and manifests, and
the Git history reachable from `main` at
`f761fa8054ac11d55e9d63b9c96a46339770d112` and PR #2 at
`f2b073779507e10bccebcc320b93d31b418c2e78`, including the initial import
`263b146bcebfa0b800003a86389e7abb4226d5f7`.

| Evidence | What it establishes | What it does not establish |
| --- | --- | --- |
| Headers in both `code/` files | Each identifies Shantanu Das as the programmer and records a first successful run on December 4, 2001. | Present ownership, a transfer of rights, or permission for MIT. |
| `documentation/SOURCE_REVIEW.md` and `metadata/SOURCE_BOUNDARY_DECISIONS.csv` | The recorded source folder is named `Shantanu Das - queueing`; the calibration program matches the paper's method. | Sole code authorship or licensing authority for the paper's coauthor. |
| Comparison of the complete files | After newline normalization, the only changes are `void main()` to `int main(void)` and the added `return 0;`. | An independent replacement implementation or clearance of the underlying source. |
| Git history | Both code files entered in the initial 2026 package import and have not changed since. The proposed root MIT grant first appears in PR #2. | Contemporaneous authorship history or a chain of title from the original programmer. |
| Earlier rights note and license status | The source was described as research-team-created and a license decision was still pending. | Completed rights clearance. |

No code license predating PR #2, assignment, permission from Shantanu Das,
contributor agreement, or employer/sponsor ownership agreement was found in
the reviewed repository evidence. The original local source folder and any
unprovided private agreements were not available for this audit. Paper
coauthorship, possession of an archive, and the identity of its Git uploader
are not sufficient evidence of sole code licensing authority.

The general distinction between authorship, ownership, and possession is
set out in [17 U.S.C. sections 201, 202 and 204](https://www.copyright.gov/title17/92chap2.html).
Those provisions do not resolve the missing facts for these files; this
audit does not decide whether the code is a joint work or work made for hire.

## Release Boundary And Remaining Evidence

- Both code files remain byte-for-byte provenance references in Git. In
  `PACKAGE_MANIFEST.csv` they are `reference_only_pending_rights`; in
  `metadata/FILE_MANIFEST.csv` they are `reference_only`, not `yes`.
- These statuses exclude both files from the cleared release payload. They
  do not establish permission for existing hosting or further distribution.
- Before licensing the code, record evidence identifying the relevant
  rights holder(s) and authority covering both the historical source and
  its modernized copy. This could be a documented ownership/assignment basis
  or an explicit license from the party or parties entitled to grant it,
  with any applicable employer or sponsor rights resolved.
- Preserve the source attribution and use only supported copyright names
  and dates. The proposed `2003-2026 David M. Levinson` code notice was not
  supported by the audited evidence.
- Keep `paper/` reference-only and under ASCE/publisher terms. This correction
  does not clear or relicense the publication PDF.
