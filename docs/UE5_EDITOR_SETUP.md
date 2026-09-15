# UE5 Editor Setup

## Required baseline

- Unreal Engine 5.8.x with C++ toolchain for Windows.
- Visual Studio 2022 or supported Rider/Build Tools configuration for the installed engine.
- Git + Git LFS for normal local development.

## Enabled plugins

The `.uproject` enables:

- Paper 2D;
- Enhanced Input;
- Gameplay Abilities;
- Gameplay Tags;
- Niagara;
- Python Editor Script Plugin.

If the editor requests restart after enabling a built-in plugin, restart before judging the project broken.

## First open

1. Generate project files if required.
2. Build `BlackWizardEditor` Development Editor Win64.
3. Open `BlackWizard.uproject`.
4. Let shader/asset discovery complete.
5. Create editor assets only under `/Game/BlackWizard/`.
6. Run automation/bootstrap scripts only after reading their source.

## Project settings to validate

- Paper 2D import defaults;
- Enhanced Input classes;
- collision channels for combat queries;
- Windows target/RHI appropriate to reference hardware;
- default game mode;
- fixed gameplay expectations at 60 Hz without tying logic to render FPS.
