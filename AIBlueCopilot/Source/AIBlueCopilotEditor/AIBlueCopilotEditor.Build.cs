using UnrealBuildTool;
using System.Collections.Generic;

public class AIBlueCopilotEditor : ModuleRules
{
    public AIBlueCopilotEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "AIBlueCopilot"
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "Slate",
            "SlateCore",
            "EditorStyle",
            "UnrealEd",
            "LevelEditor",
            "ToolMenus",
            "Projects",
            "DesktopPlatform",
            "Json",
            "JsonUtilities",
            "HTTP",
            "AssetTools",
            "AssetRegistry",
            "Kismet"
        });

        // Allow use in editor only
        if (Target.bBuildEditor == true)
        {
            PrivateDependencyModuleNames.Add("UnrealEd");
        }
    }
}
