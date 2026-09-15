# Combat Lab — Vertical Slice Specification

## Purpose
Build a compact Unreal Engine 5 Combat Lab before full levels, procedural runs or campaign production. The slice answers one question: **is controlling and fighting as this character compelling enough to build the whole game around?**

## Map
Canonical map asset: `/Game/BlackWizard/Maps/L_CombatLab`

### Zones
1. Movement Zone — jump, double jump, wall slide/jump/run, ledge grab/climb, ground/air dash, Lightning Glide.
2. Weapon Arena — training dummy, Sword and Staff.
3. Parry Arena — predictable enemy patterns and defense timing.
4. Lightning Arena — Bolt, Chain Lightning, Lightning Hand, Infusion, Launcher.
5. Thunder Arena — Pillar, Rising Storm, Shockwave and grouped enemies.
6. Artifact Station — equip exactly two of three prototype artifacts.
7. Mixed Combat Arena — all standard enemy roles together.
8. Mini-Boss Arena — validates the integrated system.

## Mandatory systems
- responsive plane-constrained character movement;
- Enhanced Input + explicit input buffer;
- generic hitbox/hurtbox and damage pipeline;
- Health, Stamina, Mana, Storm Warning;
- Sword and Staff data-driven movesets;
- parry, perfect parry, riposte, block/deflect;
- dodge, roll, ground dash, air dash;
- Lightning/Thunder via GAS-backed abilities;
- Storm Warning activation and resistance model;
- exactly two artifact slots with visible attachments;
- four enemy roles plus mini-boss;
- debug HUD and training telemetry;
- layered 2.5D visual prototype with Paper 2D + 3D world + Niagara.

## Explicitly out of scope
- campaign/hub;
- procedural route generation;
- persistent saves/meta progression;
- final production art/audio;
- multiplayer;
- additional weapons/artifacts/enemies beyond the defined slice;
- open-world systems.
