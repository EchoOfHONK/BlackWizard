# Editor Automation

This folder is reserved for deterministic Unreal Editor Python utilities that create or validate presentation assets which cannot exist as plain text.

Rules:

- scripts must be reviewable before execution;
- they may only create/update content under `/Game/BlackWizard/` unless explicitly documented;
- they must not delete user assets by default;
- gameplay rules remain in C++/data, not hidden in Python-generated Blueprint graphs.
