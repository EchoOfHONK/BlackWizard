# BlackWizard / Shattered Sanctum — Unreal Engine 5 Context Pack

This repository is the canonical Unreal Engine 5 foundation for **Shattered Sanctum** (repository codename: **BlackWizard**).

## Project direction

Shattered Sanctum is a **2.5D high-fidelity pixel-art Action Roguelite with Souls-like combat elements**. Gameplay is constrained to a 2D combat plane, while Unreal Engine renders layered 3D environments, lighting, atmosphere and Niagara effects around Paper 2D characters.

Core identity:

**Weapon Combat + Lightning + Thunder + Parry + Mobility + Artifacts + Long Combos**

## Unreal baseline

- Engine: **Unreal Engine 5.8.x**
- Gameplay code: **C++ first**
- Presentation/tuning: Blueprints, Data Assets, UMG, Niagara, Materials
- 2D characters: Paper 2D sprites / flipbooks
- World: 2.5D, layered 3D environment
- Abilities/attributes/effects: Gameplay Ability System (GAS)
- Input: Enhanced Input
- AI: StateTree first, Behavior Tree/EQS only when justified
- UI: UMG; CommonUI is optional until needed
- VFX: Niagara
- Target: Windows PC first, stable 60 FPS minimum

## Codex read order

1. `AGENTS.md`
2. `docs/GAME_VISION.md`
3. `docs/VERTICAL_SLICE_SPEC.md`
4. `docs/UE5_TECHNICAL_ARCHITECTURE.md`
5. `docs/COMBAT_DESIGN.md`
6. `docs/MAGIC_DESIGN.md`
7. `docs/MOVEMENT_DESIGN.md`
8. `docs/ARTIFACT_SYSTEM.md`
9. `docs/ART_BIBLE_UE5.md`
10. `docs/UE5_RENDERING_PIPELINE.md`
11. `docs/UE5_ASSET_PIPELINE.md`
12. `docs/UI_UX_DIRECTION.md`
13. `docs/ENEMY_AND_BOSS_DIRECTION.md`
14. `docs/IMPLEMENTATION_PLAN.md`
15. `references/REFERENCE_INDEX.md`
16. `prompts/CODEX_IMPLEMENTATION_PROMPT.md`

## Important

The images under `references/source/` are concept references, not production sprites. Do not crop them into final game assets. The SVG files under `references/ue5/` are **technical Unreal mockups** showing intended layering, camera, attachment and HUD composition.

The external user-provided game screenshot used during early art discussion is intentionally **not redistributed in this public repository**.
