using UnrealBuildTool;
using System.Collections.Generic;

public class BlackWizardEditorTarget : TargetRules
{
    public BlackWizardEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V5;
        ExtraModuleNames.AddRange(new string[] { "BlackWizard" });
    }
}
