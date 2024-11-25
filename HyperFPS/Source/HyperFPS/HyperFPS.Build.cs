// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HyperFPS : ModuleRules
{
	public HyperFPS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
