// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class TOLWITarget : TargetRules
{
	public TOLWITarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
       bUsesSteam = true;
        //DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "TOLWI" } );
	}
}
