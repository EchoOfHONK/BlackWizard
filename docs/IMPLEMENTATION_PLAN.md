# Combat Lab — Unreal Engine 5 Implementation Plan

Status: **Approved technical migration plan; gameplay implementation not complete.**

## M0 — UE project foundation
Create/validate UE5.8 C++ project, plugins, source module, plane-constrained player shell, default GameMode, content folders, collision/tag conventions, editor/build commands, Git/LFS policy and empty `L_CombatLab` map.

Acceptance: editor build succeeds; project opens; default map launches; C++ hot reload is not required; no missing module/plugin errors.

## M1 — Responsive movement
Implement input buffer + Enhanced Input, run acceleration/deceleration, variable jump, coyote time, jump buffer, double jump, controlled fall, wall slide/jump and camera follow.

Acceptance: frame-rate-independent, symmetric movement with clean respawn and no jump-refresh exploits.

## M2 — Attributes, hit/damage, reactions
Integrate ASC/AttributeSet, Health/Stamina/Mana/Storm, centralized damage spec/resolution, hitboxes/hurtboxes, hit deduplication, knockback, launch, hit stop, Stagger/Shock resistance hooks and training dummy telemetry.

Acceptance: damage never bypasses the resolver/GAS path; one authored hit group does not accidentally multi-hit from overlapping components.

## M3 — Weapons and combo graph
Add Sword full baseline and Staff light/heavy baseline, reusable weapon definitions, action timelines, input buffer consumption and category cancel windows.

Acceptance: combo timing independent from flipbook frame count; weapon swap cannot leave stale hitboxes or combo state.

## M4 — Standard enemies
Create Melee, Ranged, Shield and Elite prototypes with shared damage/reaction rules and role-readable placeholders. Use StateTree where it improves state authoring.

Acceptance: four roles are mechanically distinct; elite resistance prevents trivial repeated control.

## M5 — Defense and evasions
Implement Dodge, Roll, Ground Dash, Air Dash, i-frames, Perfect Dodge, Sword Parry/Perfect Parry/Riposte and Staff Block/Deflect.

Acceptance: perfect outcomes require actual qualifying contact; unblockable attacks follow explicit policy; no infinite air-dash refresh.

## M6 — Lightning + first feel gate
Implement Lightning Bolt, Chain Lightning, Lightning Hand, Infusion and Launcher using GAS + cues/Niagara placeholders. Integrate weapon/magic/dash continuation.

Stop feature growth and tune: input feel, contact, hit stop, camera impulses, cancel windows, reaction, VFX readability.

## M7 — Thunder + second feel gate
Implement Thunder Pillar, Rising Storm and Thunder Shockwave with ground-origin upward language and bounded AoE/control.

Tune grouped-target readability, control pressure and air-to-ground spell flow before continuing.

## M8 — Storm Warning + third feel gate
Implement event-driven Storm gain, temporary active state, VFX escalation and Shock/Stagger pressure modifiers.

Validate that ordinary enemies feel overwhelmed while elites still regain meaningful action opportunities.

## M9 — Artifacts
Implement exactly two artifact slots, three prototype artifacts, GAS effect/ability grants, visible attachment components and complete teardown on swap/reset.

## M10 — Advanced parkour
Add wall run, ledge grab/climb and Lightning Glide. Validate full movement/combat route with artifact-modified air dash.

## M11 — Mini-boss
Build one systems mini-boss with phase change around 50%, parryable/unblockable/AoE patterns, high resistance and real aerial/Thunder openings without permanent stun-lock.

## M12 — Combat Lab integration and polish
Integrate all eight zones, HUD/debug overlay, all debug toggles, readable placeholder art, 2.5D environment prototype, Niagara pass, performance profiling and Windows Development build.

## Mandatory finish criteria
A player can launch the project and, without editor intervention:
- move through the Lab;
- attack with Sword/Staff;
- fight four enemy roles;
- dodge/roll/dash/parry/riposte;
- cast Lightning/Thunder;
- trigger Storm Warning;
- equip exactly two artifacts and visibly change appearance;
- traverse parkour section;
- defeat/retry mini-boss;
- read HUD and toggle debug overlay.
