# BlackWizard / Shattered Sanctum — Codex Instructions

Read all canonical design and technical documents before changing architecture or gameplay.

## Canon hierarchy

1. `docs/GAME_VISION.md`
2. Specialized gameplay/design documents
3. `docs/UE5_TECHNICAL_ARCHITECTURE.md`
4. `docs/IMPLEMENTATION_PLAN.md`
5. Reference images and UE5 mockups

If documents conflict, preserve the higher-level canon and report the conflict.

## Non-negotiable identity

Shattered Sanctum is a fast technical **2.5D Action Roguelite with Souls-like elements**.

Core identity:

**Weapon Combat + Lightning + Thunder + Parry + Mobility + Artifacts + Long Combos**

## Unreal rules

- Unreal Engine 5.8.x is the target baseline.
- C++ is the gameplay source of truth.
- Blueprints are for assembly, presentation, tuning and asset binding; avoid hiding core combat rules in Blueprint-only graphs.
- Do not hand-edit binary `.uasset` or `.umap` files as text.
- Use Unreal reflection (`UCLASS`, `USTRUCT`, `UPROPERTY`, `UFUNCTION`) only where editor/runtime integration justifies it.
- Prefer `UActorComponent`, GAS abilities/effects, Data Assets and small focused classes over god objects.
- Use Gameplay Tags for cross-system state and classification. Avoid stringly-typed state.
- Use Enhanced Input actions and mapping contexts. Do not bind gameplay directly to hardcoded keyboard keys.
- Use GAS for Health/Stamina/Mana/Storm attributes, abilities, costs, buffs/debuffs and persistent artifact effects where it fits naturally.
- Do not force every locomotion state into GAS. Character movement and traversal remain dedicated C++ systems, with tags/events bridging to abilities.
- Keep one authoritative movement owner. Do not let attacks, dash, ledges and abilities independently write conflicting movement every tick.
- Gameplay timing must never depend on sprite frame count.
- Use Paper 2D for pixel character presentation and 3D world layers for 2.5D depth.
- Niagara effects must preserve silhouette/readability; white lightning is not permission to overexpose the whole screen.
- Create original placeholders rather than waiting for final art.
- Keep the project buildable and launchable after each milestone.
- Validate C++ compilation before progressing to later systems.

## Codex-friendly architecture

Core logic should remain diffable text wherever practical:

- C++ for gameplay systems;
- `.ini` for configuration;
- Markdown for canon;
- source textures/audio in version control/LFS;
- Unreal binary assets kept small and presentation-focused.

When an Unreal asset must be created in-editor, document its intended path/name and, where practical, provide an Editor Python script or deterministic creation instructions.

## Art rule

Reference boards define silhouette, palette, composition, material/VFX language and attachment intent. Incidental text or shapes are not gameplay canon unless also defined in docs.
