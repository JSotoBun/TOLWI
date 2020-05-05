// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class TOLWIEditorTarget : TargetRules
{
	public TOLWIEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
      //  bUsesSteam = true;
		//DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "TOLWI" } );
	}
}
