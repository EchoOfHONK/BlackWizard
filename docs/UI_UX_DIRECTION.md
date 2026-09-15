# UI / UX Direction — UE5

## Gameplay HUD priority

1. HP
2. Stamina
3. Mana
4. Storm Warning
5. current weapon
6. exactly two artifact slots
7. combo state

## Unreal implementation

Use UMG with C++ view-model/presenter style bindings where practical. Widgets should subscribe to gameplay state and avoid polling heavy logic every frame.

Recommended asset names:

- `WBP_HUD`
- `WBP_BossHUD`
- `WBP_DebugOverlay`
- `WBP_ArtifactStation`
- `WBP_ControlsLegend`

## Style

- thin distressed frames;
- bone/gray typography;
- crimson selection/danger accents;
- ritual cross/reliquary geometry;
- sparse noise texture;
- clear combat values with ornament outside the data area.

## Feedback hooks

- combo counter;
- damage numbers;
- parry/perfect parry;
- perfect dodge;
- Storm fill/activation;
- enemy/boss stagger when useful;
- artifact trigger feedback.
