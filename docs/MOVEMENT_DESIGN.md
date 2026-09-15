# Movement & Parkour Design

## Goal

Traversal is part of combat. Movement must be responsive and predictable enough to chain directly into attacks and magic.

## Required systems

- acceleration/deceleration;
- variable jump height;
- coyote time;
- jump buffering;
- double jump;
- wall detection / slide / jump;
- wall run;
- ledge grab / climb;
- ground dash;
- air dash;
- dodge / roll;
- controlled fall;
- Lightning Glide.

## Unreal implementation

Base on `ACharacter` + `UCharacterMovementComponent` with X/Z gameplay and Y plane constraint.

Use a focused movement/traversal component for state and requests rather than large logic in `Tick()` on the Character.

Special movement submits explicit requests/overrides with priority. Reactions/death supersede ordinary traversal. Ledge capture must validate body clearance.

## Combat integration target

`Run -> Wall Jump -> Air Dash -> Lightning Cast -> Landing Attack -> Parry -> Launcher -> Air Combo -> Thunder Pillar -> Dash Cancel`

## Presentation separation

Paper 2D flipbooks, trails and Niagara react to traversal state. They do not determine coyote windows, i-frames or actual movement duration.
