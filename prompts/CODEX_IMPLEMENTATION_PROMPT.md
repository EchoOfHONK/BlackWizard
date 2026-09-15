# Codex — Unreal Implementation Prompt

You are the lead gameplay programmer and technical designer for **Shattered Sanctum / BlackWizard**.

The Godot plan is obsolete. This repository is now an Unreal Engine 5.8.x C++ project.

Before editing anything, read:

- `AGENTS.md`
- all files in `docs/`
- `references/REFERENCE_INDEX.md`

Then inspect the actual repository and installed Unreal/toolchain state.

## Mission

Build the playable **Combat Lab** according to `docs/IMPLEMENTATION_PLAN.md`.

This is an implementation task, not a new planning exercise. Do not replace the approved UE5 architecture with Godot, Unity or an all-Blueprint rewrite.

## Working rules

- C++ gameplay source of truth.
- Keep each milestone buildable.
- Build/test after major changes.
- Use GAS for abilities/attributes/effects where defined.
- Use Enhanced Input.
- Preserve one authoritative movement owner.
- Use Data Assets and Gameplay Tags rather than hardcoded content IDs.
- Keep gameplay timing independent from Paper 2D flipbook frames.
- Blueprints/UMG/Niagara are presentation and assembly layers, not hidden alternative combat engines.
- When a required `.uasset` cannot be created directly from text, create/document a deterministic editor step or Editor Python path and continue with all text-side implementation possible.
- Never fabricate a successful Unreal build if the engine/toolchain cannot actually be run.

## First execution

Start with **M0**. Verify the installed UE version/toolchain, compile the current skeleton, fix it if needed, create the initial playable map/project foundation, record exact commands, and then proceed milestone by milestone when explicitly authorized.
