# Unreal Engine 5 Technical Architecture

## Baseline
- Unreal Engine 5.8.x
- Windows PC first
- C++ gameplay core
- Blueprints/Data Assets for composition and tuning
- Gameplay Ability System for attributes, abilities and persistent/temporary gameplay effects
- Enhanced Input
- Paper 2D for character sprites/flipbooks
- 3D geometry/materials for depth/world presentation
- Niagara for combat and environmental VFX
- UMG for HUD/UI
- StateTree for enemy state logic when useful

## Coordinate convention
Unreal uses Z-up. Shattered Sanctum uses:
- X = horizontal gameplay movement;
- Z = vertical gameplay movement;
- Y = visual depth.

The player and combat-relevant actors are constrained to a gameplay plane near `Y = 0`. Background/foreground world elements may use Y freely.

## Character foundation
Use `ACharacter` with `UCharacterMovementComponent` as the primary foundation unless profiling proves a custom Pawn is necessary.

Configure plane constraint:
- `bConstrainToPlane = true`
- plane normal along Y;
- snap to plane at start.

One movement authority resolves locomotion, dash, root-like impulses, ledges and reactions. Ability code requests motion; it does not independently fight the movement component every tick.

## Gameplay Ability System split
Use GAS for:
- Health / MaxHealth;
- Stamina / MaxStamina;
- Mana / MaxMana;
- Storm / MaxStorm;
- LightningPower / StaggerPower and similar combat attributes;
- active combat abilities;
- costs/cooldowns;
- buffs/debuffs;
- artifact persistent effects;
- tags/events bridging combat systems.

Do not force basic locomotion state machines into GAS. Traversal remains C++ movement logic and publishes/consumes Gameplay Tags where cross-system coordination is needed.

## Major C++ systems
```text
Source/BlackWizard/
  Public|Private/
    AbilitySystem/
    Character/
    Combat/
    Movement/
    Weapons/
    Magic/
    Artifacts/
    AI/
    UI/
    Debug/
    Game/
```

Preferred building blocks:
- `ABWPlayerCharacter`
- `UBWAbilitySystemComponent`
- `UBWAttributeSet`
- `UBWCombatComponent`
- `UBWMovementAbilityComponent`
- `UBWWeaponComponent`
- `UBWArtifactComponent`
- `UBWInputBufferComponent`
- focused `UGameplayAbility` subclasses/base classes
- `UPrimaryDataAsset` definitions for weapons/artifacts/ability presentation data

## Blueprint policy
Blueprints may:
- assemble actors/components;
- bind sprites/flipbooks/materials/audio/VFX;
- tune exposed data;
- create UMG widgets;
- author animation/presentation hooks;
- build level composition.

Blueprints should not become the only source of truth for:
- damage formulas;
- combo transition rules;
- parry eligibility;
- artifact ownership/cleanup;
- Storm Warning accumulation rules;
- anti-stunlock logic;
- save-critical gameplay state.

## Data strategy
Use native structs + Data Assets + Gameplay Tags. Runtime state must be separate from immutable definitions.

Recommended asset families:
- `PDA_Weapon_*`
- `PDA_Artifact_*`
- `PDA_Enemy_*`
- `PDA_Traversal_*`
- `GA_*` abilities
- `GE_*` gameplay effects
- `GC_*` gameplay cues
- `NS_*` Niagara systems
- `WBP_*` widgets

## Damage flow
`Hit candidate -> defense evaluation -> resolved damage/stagger payload -> GAS attribute modification -> reaction/control -> gameplay events -> cues/UI/telemetry`

No weapon or VFX script should subtract Health directly.

## Codex constraint
Binary Unreal assets are not diff-friendly. Keep core gameplay in C++ and docs. When a binary asset is required, document exact path/class/parent, exposed fields and validation steps so it can be recreated or inspected deterministically.
