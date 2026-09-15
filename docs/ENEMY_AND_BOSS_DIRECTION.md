# Enemy & Boss Direction — UE5

## Vertical-slice enemy roles

### Melee Zealot
Spacing, dodge and parry practice.

### Ranged Penitent
Forces movement, gap closing and target priority.

### Shield Guardian
Rejects pure light-spam; encourages flank, heavy, magic and defensive counterplay.

### Elite Executioner
Validates longer patterns, stagger resistance and anti-stunlock.

## AI architecture

Prefer a small C++ sensing/combat interface plus StateTree for readable hierarchical states when the behavior benefits from authorable transitions. Do not introduce Behavior Trees/EQS until a concrete need exists.

Shared states/concepts:

- Idle / Guard;
- Acquire;
- Approach / Reposition;
- Telegraph;
- Attack;
- Recover;
- Stagger / Launch;
- Dead.

Enemy attacks use the same damage/defense pipeline as the player.

## Mini-boss

Must validate:

- multiple attack patterns;
- clear telegraphs;
- parryable + unblockable attacks;
- AoE;
- transition around 50% HP;
- high but understandable control resistance;
- no permanent stun-lock;
- legitimate aerial/Thunder openings.

## Visual role readability

- melee: forward silhouette and exposed weapon;
- ranged: long weapon line;
- shield: large vertical blocking mass;
- elite: larger body and ritual hardware;
- boss/storm caster: halo/reliquary geometry and controlled Lightning framing.
