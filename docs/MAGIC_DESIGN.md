# Lightning, Thunder & Storm Warning

## Lightning identity

Lightning is fast, precise, violent and combo-friendly. It should feel like immediate electrical intent, not slow projectile casting.

### Vertical-slice abilities

- **Lightning Bolt** — fast directional strike/projectile.
- **Chain Lightning** — bounded jumps across nearby valid targets; visited-target protection.
- **Lightning Hand** — short-range near-instant combo tool.
- **Lightning Infusion** — temporarily electrifies equipped weapon.
- **Lightning Launcher** — lifts/launches a target for aerial continuation.
- **Lightning Glide** — traversal ability that emits energy downward and reduces falling speed.

## Thunder sub-school

Role:

- AoE;
- crowd control;
- launch;
- stagger;
- pressure/shockwave.

Signature rule: **effects generally originate below and rise upward**.

### Vertical-slice Thunder abilities

- **Thunder Pillar** — ground-origin vertical burst; launches targets.
- **Rising Storm** — sequential ground eruptions.
- **Thunder Shockwave** — large-area stagger/control effect.

## Unreal implementation

Use GAS abilities for activation/cost/tags, C++ ability tasks when timing/targeting needs custom deterministic behavior, and Gameplay Cues/Niagara for presentation.

Recommended naming:

- `GA_LightningBolt`
- `GA_ChainLightning`
- `GA_LightningHand`
- `GA_LightningInfusion`
- `GA_LightningLauncher`
- `GA_LightningGlide`
- `GA_ThunderPillar`
- `GA_RisingStorm`
- `GA_ThunderShockwave`

Presentation:

- `GC_Lightning_*`
- `GC_Thunder_*`
- `NS_Lightning_*`
- `NS_Thunder_*`

## Storm Warning

Storm meter rewards successful offense, combo continuation, parry/perfect parry, perfect dodge, Lightning use, kills and maintained pressure. Exact gains remain data-driven.

At full meter, temporary **Storm Warning Mode** activates:

- charged body aura;
- weapon electricity;
- increased Shock/Stagger pressure;
- high normal-enemy stun potential;
- bounded elite/boss control.

Suggested GAS representation:

- Storm is an Attribute;
- activation applies `GE_StormWarningActive`;
- active state grants `State.StormWarning.Active`;
- modifiers affect Stagger/Shock calculations, not global enemy freeze.
