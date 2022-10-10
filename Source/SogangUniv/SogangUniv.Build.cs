// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SogangUniv : ModuleRules
{
	public SogangUniv(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		//PublicIncludePaths.AddRange(
		//		new string[] {
		//	"Source/Runtime/Launch/Private",
		//		}
		//		);

		//PublicIncludePaths.AddRange(
		//		new string[] {
		//	"../../../../Source/Runtime/Core/Public", 
		//	"../../../../Source/Runtime/Launch/Public",
		//	"../../../../Source/Runtime/Core/Public/Android", 
		//	"../../../../Source/Runtime/Launch/Public/Android"
		//		}
		//		);

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "ApexDestruction", "AIModule", "GameplayTasks", "NavigationSystem", "UMG", "Networking", "Sockets", "mobilehelper" /*, "Launch", "ApplicationCore"*/ });

		PrivateDependencyModuleNames.AddRange(new string[] { "ImageWrapper", "RenderCore", "RHI" });

		// Uncomment if you are using Slate UI
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
