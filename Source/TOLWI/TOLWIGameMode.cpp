// Fill out your copyright notice in the Description page of Project Settings.


#include "TOLWIGameMode.h"
#include "TOLWIGameInstance.h"
#include "BigCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATOLWIGameMode::ATOLWIGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> Player1PawnOb(TEXT("/Game/Characters/BigCharacter"));
	if (Player1PawnOb.Class != NULL)
	{
		DefaultPawnClass = Player1PawnOb.Class;
	}

	
}



