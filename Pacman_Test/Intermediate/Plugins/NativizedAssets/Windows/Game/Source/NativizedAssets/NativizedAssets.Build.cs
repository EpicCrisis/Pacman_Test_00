// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class NativizedAssets : ModuleRules
{
	public NativizedAssets(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "Engine", "Pacman_Test" });

		PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "Paper2D", "AIModule", "InputCore", "SlateCore", "ClothingSystemRuntimeInterface", "GameplayTasks", "UMG", "MovieScene", "Slate", "ClothingSystemRuntime" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}