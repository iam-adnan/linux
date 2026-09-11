# Clean control PR

This PR deliberately contains NO credentials. It exists to verify the other
half of the contract: a clean scan must still reach the dashboard, reporting
an empty findings array.

That matters because without a posted clean run, the dashboard cannot tell
"scanned, nothing found" from "the scan never ran" — the endpoint accepts no
status field, so an absent record is indistinguishable from a clean one.

Expected: green check, no PR comment (clean runs are deliberately silent),
and a dashboard record with 0 findings.
