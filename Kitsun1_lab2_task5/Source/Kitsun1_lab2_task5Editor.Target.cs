// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Kitsun1_lab2_task5EditorTarget : TargetRules
{
	public Kitsun1_lab2_task5EditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "Kitsun1_lab2_task5" } );
	}
}
