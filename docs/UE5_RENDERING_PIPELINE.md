# UE5 Rendering Pipeline — 2.5D Pixel + 3D

## Objective

Reach the mood of the concept sheets without sacrificing crisp gameplay readability.

## Camera

Start with a perspective camera using a low/narrow FOV and enough distance to approximate an orthographic side view while retaining useful depth/parallax. Keep true orthographic as an experiment, not a dependency, until all required lighting/VFX behavior is validated.

Initial tuning range (not canon):
- FOV: approximately 18–30 degrees;
- camera positioned along Y, looking toward gameplay plane;
- controlled X/Z follow with separate combat look-ahead;
- fixed/very limited roll;
- camera shake via impulses, not constant noise.

## Gameplay plane

Player/enemy collision lives near one Y plane. 3D art layers occupy depth. Collision-relevant platforms are simple hidden/clean geometry; visual meshes may extend behind/forward without changing the combat plane.

## Paper 2D import

Epic's Paper 2D system supports sprites, sprite sheets/flipbooks and hybrid 2D/3D projects. Standardize `Pixels Per Unreal Unit` per asset family and use Paper 2D import settings to preserve crisp source textures.

## Materials

Create project-owned sprite materials instead of depending forever on engine defaults:
- `M_Sprite_UnlitMasked_Crisp`
- `M_Sprite_LitMasked_Crisp`
- `MI_PlayerSprite`
- `MI_EnemySprite`

Expose controlled emissive multiplier for Lightning/Storm overlays. Do not use filtering that softens pixel edges.

Environment materials:
- stone;
- dark iron;
- bone/ivory;
- cloth/banner;
- wet/rain response;
- emissive ritual red.

## Atmosphere

Use 3D fog/rain/ash in depth layers. Keep density lower around gameplay silhouettes. Foreground fog must be masked/attenuated around player combat if it blocks telegraphs.

## Niagara

Create reusable effect primitives:
- electrical arc;
- branch burst;
- contact spark;
- ground crack flash;
- debris lift;
- shockwave ring;
- storm aura;
- dash trail;
- parry burst.

Gameplay applies effects by event/cue; Niagara does not decide damage.

## Performance

Profile representative worst-case combat early: several enemies + Chain Lightning + Thunder + Storm aura + layered weather. Target stable 60 FPS on the documented reference PC; use Unreal Insights and stat commands rather than judging editor viewport smoothness alone.
