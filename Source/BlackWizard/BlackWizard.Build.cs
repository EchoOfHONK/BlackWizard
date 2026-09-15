using UnrealBuildTool;

public class BlackWizard : ModuleRules
{
    public BlackWizard(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] {"Core","CoreUObject","Engine","InputCore","EnhancedInput","GameplayAbilities","GameplayTags","GameplayTasks","Paper2D","Niagara","UMG"});
        PrivateDependencyModuleNames.AddRange(new string[] {"Slate","SlateCore"});
    }
}
