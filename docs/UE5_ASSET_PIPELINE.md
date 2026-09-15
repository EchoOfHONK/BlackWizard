# UE5 Asset Pipeline

## Source art versus production assets

`references/source/` contains concept boards only. Never slice those boards directly into production animation.

Production source should eventually live outside `.uasset` as editable originals plus exported PNG/TGA sheets, then import into `/Game/BlackWizard/...`.

## Recommended content tree

```text
/Game/BlackWizard/
  Maps/
  Characters/Player/
  Characters/Enemies/
  Weapons/
  Abilities/Lightning/
  Abilities/Thunder/
  Artifacts/
  Environment/
  VFX/
  UI/
  Data/
```

## Pixel character pipeline

1. Draw source at intended pixel resolution.
2. Export lossless PNG with alpha.
3. Import to UE.
4. Apply Paper 2D texture settings.
5. Create sprites/flipbooks.
6. Normalize pivot and Pixels Per Unreal Unit.
7. Assign project sprite material.
8. Bind presentation to gameplay state/events.
9. Validate at target gameplay resolution and camera distance.

## 3D environment pipeline

Use 3D geometry for depth architecture and large silhouettes. Keep geometry modular and collision separate from decorative meshes. Materials should preserve the concept's limited value/palette rather than chase photorealism.

## Artifact attachments

Artifact visuals are modular attachments on named anchors:

- Chest;
- Back;
- ShoulderL/ShoulderR if later required;
- Weapon overlay anchor.

Attachments may be sprite components, static/skeletal meshes, Niagara systems or a small composed Actor/Component set.

## Naming

Follow `docs/CONTENT_NAMING.md`.

## Git

`.uasset`, `.umap`, source art and audio should use Git LFS in normal local Git workflows. Do not commit DerivedDataCache, Intermediate, Saved or packaged builds.
