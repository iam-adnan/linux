# Secret Scan incremental test

Five commits pushed one at a time to this PR, each expected to trigger its own
Secret Scan run. Commit 5 introduces a fake secret. Safe to delete after testing.

## Commit 1
Initial commit.

## Commit 2
Trivial update.

## Commit 3
Another trivial update.

## Commit 4
Yet another trivial update.

## Commit 5 (intentional test secret — fake GitHub token, for CI scanner testing only)
GITHUB_TOKEN=ghp_TESTFAKE0987654321TESTFAKE0987654321
