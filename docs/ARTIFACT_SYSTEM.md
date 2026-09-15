# Artifact System

## Core rule

Exactly **two artifact slots**.

Artifacts can:

- alter attributes;
- alter combat rules;
- grant abilities;
- add event-triggered reactions;
- modify movement/Lightning/Thunder/defense;
- always attach a visible visual change to the protagonist.

## Prototype artifacts

### Heart of the Storm

Gameplay:
- improves Lightning effectiveness;
- Perfect Parry releases Chain Lightning.

Visual:
- emissive chest relic/electrical fracture;
- Niagara micro-arcs around torso during triggers.

### Broken Seraph

Gameplay:
- grants one additional Air Dash.

Visual:
- broken wing/reliquary structure attached behind the character.

### Thunder Spine

Gameplay:
- increases Thunder stagger pressure.

Visual:
- spine/reliquary attachment down the back.

## Unreal implementation

`UBWArtifactComponent` owns two slots and lifetime handles. Artifact definitions are Data Assets. Persistent gameplay changes should generally use Gameplay Effects/Abilities/Tags, while visual attachments use Paper 2D/mesh/Niagara components on named attachment anchors.

Swapping must atomically remove:
- old Gameplay Effects;
- granted abilities;
- delegates/event subscriptions;
- visual attachments;
- temporary counters/charges derived only from the artifact.

Never permanently mutate shared Data Assets or effect classes at runtime.
