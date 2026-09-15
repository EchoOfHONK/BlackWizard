# Test Strategy

## Build gates

Every milestone must:

1. compile `BlackWizardEditor`;
2. open/load required maps/assets without missing-class errors;
3. run targeted functional/manual cases;
4. rerun affected earlier cases;
5. document blocked tests instead of marking them passed.

## High-value automated C++ tests

Prefer small Unreal Automation tests for pure rules:

- input buffer expiry;
- combo graph eligibility;
- damage deduplication;
- resistance/diminishing returns;
- artifact cleanup;
- Storm gain deduplication;
- Chain Lightning visited-target selection.

## Manual feel tests

At M6–M8, feature growth stops until repeated integrated combo routes are reliable and combat remains dangerous/readable.

## Performance

Profile exported/standalone representative scenes, not only editor viewport. Capture frame time with Unreal Insights/stat tools during Chain Lightning + Thunder + Storm + multiple enemies + weather layers.
