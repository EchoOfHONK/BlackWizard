# Combat Design

## Goal

Fast technical combat with Souls-like consequence, not Souls-like sluggishness.

Desired sequence:

`Light -> Light -> Lightning Hand -> Dash Cancel -> Light -> Launcher -> Air Combo -> Thunder -> Dodge`

## Combat contracts

- explicit startup / active / recovery;
- input buffering;
- combo graph transitions;
- category-based cancel windows;
- hit stop;
- hit stun / stagger / knockback / launch;
- invulnerability windows;
- parry and perfect parry windows;
- weapon/magic interleaving;
- animation-independent gameplay timing.

## Unreal implementation direction

C++ owns action eligibility, combo cursor, buffer and resolved hit rules. GAS owns ability activation/cost/effects/tags. Animation/flipbooks and Niagara respond to events; they do not author damage timing by frame count.

Use Gameplay Tags such as:

- `State.Action.Attacking`
- `State.Action.Casting`
- `State.Defense.Parrying`
- `State.Movement.Dashing`
- `State.Reaction.Staggered`
- `Event.Combat.PerfectParry`
- `Event.Combat.PerfectDodge`
- `Damage.Physical`
- `Damage.Lightning`
- `Damage.Thunder`

## Sword

- Light 1 -> Light 2 -> Light 3
- Heavy
- Air Attack
- Launcher
- Parry
- Perfect Parry
- Riposte

## Staff

- Light chain
- Heavy
- Block
- Deflect / Parry
- Lightning-infused Heavy
- Aerial hook retained for slice validation

## Defense

### Dodge
Short evasive action with configurable i-frames.

### Roll
Longer defensive commitment.

### Dash
High-speed combat/traversal movement; ground and air variants.

### Perfect Dodge
Must be contact-qualified. Dashing through empty space never grants a perfect result.

### Parry
Attack metadata determines blockable/parryable/unblockable behavior. Perfect Parry opens a short target-bound riposte window and contributes strongly to Storm Warning.

## Control resistance

Shock and Stagger are separate tunable pressures. Normal enemies may be controlled aggressively. Elites and bosses use resistance, recovery and bounded immunity/diminishing-return rules to prevent permanent lockout.
