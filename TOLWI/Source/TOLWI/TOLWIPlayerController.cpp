// Fill out your copyright notice in the Description page of Project Settings.

#include "TOLWI.h"
#include "TOLWIPlayerController.h"
#include "TOLWIGameMode.h"

void ATOLWIPlayerController::IsBigCharacter()
{
	static ConstructorHelpers::FClassFinder<APawn> Player1PawnOb(TEXT("/Game/Characters/BigCharacter"));
	if (Player1PawnOb.Class != NULL)
	{
		Player1PawnObClass = Player1PawnOb.Class;
	}

	
}

void ATOLWIPlayerController::IsSmallCharacter()
{
	static ConstructorHelpers::FClassFinder<APawn> Player2PawnOb(TEXT("/Game/Characters/SmallCharacter"));
	if (Player2PawnOb.Class != NULL)
	{
		Player2PawnObClass = Player2PawnOb.Class;
	}
}
