// Copyright Syntheticgamelabs. All Rights Reserved.
// Developer: Syntheticgamelabs
// Contact: syntheticgamelabs@gmail.com

using UnrealBuildTool;

public class AIBlueCopilot : ModuleRules
{
	public AIBlueCopilot(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput",
			"HTTP",
			"Json",
			"JsonUtilities",
			"AssetRegistry",
			"AssetTools",
			"UnrealEd",
			"Projects"
		});

		// Link against Crypt32 on Windows for DPAPI
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.Add("Crypt32.lib");
		}

		// Editor-only dependencies for notifications and Slate UI (Editor target only)
		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "EditorStyle" });
		}
	}
}
