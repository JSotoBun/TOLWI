// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "TOLWIGameModeBase.h"
#include "BigCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATOLWIGameModeBase::ATOLWIGameModeBase()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Characters/BigCharacter"));

	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

}
