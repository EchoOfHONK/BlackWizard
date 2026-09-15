# Art Bible — Unreal Engine 5 Revision

## Core visual identity

High-fidelity dark pixel characters combined with a restrained 3D gothic world. The result should read as a handcrafted pixel-art game, not a generic Unreal 3D game with flat sprites pasted on top.

## Palette

Dominant:
- near-black;
- charcoal;
- dirty gray;
- dark iron;
- old bone / ivory.

Accent:
- deep crimson;
- blood red.

Energy:
- hard white;
- pale electric gray;
- rare desaturated blue-white only when it helps Lightning separation.

Red is a controlled compositional accent, not a global tint.

## 2.5D layer stack

From camera to distance:

1. Foreground silhouettes — chains, arches, debris, mist; never cover combat for long.
2. Gameplay plane — player, enemies, collision surfaces, interactables.
3. Midground architecture — playable-world continuation and readable depth.
4. Background monuments — cathedrals, towers, bridges, colossal statues.
5. Atmospheric sky — storm, fog, rain, ash, distant Lightning.

Depth is created with Y separation, parallax, lighting, fog and material response. The player remains constrained to the gameplay plane.

## Character

- hooded/obscured face;
- layered tattered cloth;
- readable weapon silhouette;
- artifact anchors at chest/back/shoulders;
- crisp pixel treatment;
- lit or semi-lit sprite material only where it preserves pixel integrity;
- Lightning frames the pose rather than hiding it.

## Environment

Preferred motifs:
- ruined gothic arches;
- reliquaries;
- chains and hanging cages;
- broken bridges;
- corroded iron;
- cracked sacred stone;
- bone walls/ossuary forms;
- banners and vertical religious geometry;
- huge negative space;
- storm weather and distant red light.

3D models should be designed to read like the same art universe as the sprites: simplified macro-shapes, controlled roughness, hard value grouping, deliberately limited material palette.

## Sprite rendering

- import with Paper 2D settings for crisp low-resolution art;
- nearest/point-like sampling where appropriate;
- avoid texture blur/mip behavior that destroys pixel edges;
- author consistent Pixels Per Unreal Unit across character/weapon sheets;
- gameplay timing remains independent of flipbook frame count.

## Lighting

The baseline world should be dark but not muddy. Gameplay plane silhouettes must remain readable.

Lightning may briefly create high-intensity emissive flashes, local lights and exposure response, but long white-out frames are prohibited during ordinary combat.

## Niagara

### Lightning
Thin branching arcs, short lifetime, sharp directional travel, sparse sparks, contact flash, minimal lingering smoke.

### Thunder
Ground cracks, upward pillar, debris lift, shockwave rings, pressure dust, heavier electrical bloom and longer spatial footprint.

### Storm Warning
Persistent but restrained body arcs + weapon charge + occasional local discharges; intensity escalates without obscuring enemy telegraphs.

## Post process

Use carefully:
- subtle vignette;
- restrained contrast curve;
- controlled bloom;
- optional film grain/dither only if it does not smear pixels;
- chromatic aberration essentially off during normal play;
- motion blur off or heavily restricted for crisp sprites.
