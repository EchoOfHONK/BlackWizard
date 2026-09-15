using UnrealBuildTool;
using System.Collections.Generic;

public class BlackWizardTarget : TargetRules
{
    public BlackWizardTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V5;
        ExtraModuleNames.AddRange(new string[] { "BlackWizard" });
    }
}
