// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "TOLWIGameModeBase.h"
#include "BigCharacter.h"
#include "SmallCharacter.h"
#include "TOLWIGameState.h"
#include "UObject/ConstructorHelpers.h"


ATOLWIGameModeBase::ATOLWIGameModeBase()
{
	//set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Characters/BigCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	/*
	static ConstructorHelpers::FClassFinder<APawn> Player2PawnBPClass(TEXT("/Game/Characters/SmallCharacter"));
	if (Player2PawnBPClass.Class != NULL)
	{
		DefaultPawnClass = Player2PawnBPClass.Class;
	}
	*/
	
};

void ATOLWIGameModeBase::CompletedSpringLevel(APawn * InstigatorPawn, bool bSuccess)
{
	if (InstigatorPawn == nullptr) return;

	ATOLWIGameState* GameState = GetGameState<ATOLWIGameState>();

	if (GameState != nullptr)
	{

		//call multicast
		GameState->MulticastOnSpringPortal(InstigatorPawn);
	}
}
