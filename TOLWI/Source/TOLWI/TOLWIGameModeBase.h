// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TOLWIGameModeBase.generated.h"

/**
 * 
 */
UCLASS(minimalapi)
class ATOLWIGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	ATOLWIGameModeBase();


public:

	void CompletedSpringLevel(APawn* InstigatorPawn, bool bSuccess);
};
