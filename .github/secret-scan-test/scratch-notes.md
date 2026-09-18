# Secret Scan test scratch file

This file exists only to generate a small multi-commit PR for exercising the
Secret Scan GitHub Action (`.github/workflows/secret-scan.yml`). Safe to delete
once the test is done.

## Update 1
Adding a second commit to build up PR history for the scanner to walk.

## Update 3
Removed the test credential block above (simulates a committed-then-removed
secret, which the scan's base..head history walk should still catch).

## Update 4
Final commit in this test PR.
