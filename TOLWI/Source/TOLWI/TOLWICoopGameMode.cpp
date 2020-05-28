// Fill out your copyright notice in the Description page of Project Settings.


#include "TOLWICoopGameMode.h"
#include "TOLWI.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/HUD.h"
#include "GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Public/EngineUtils.h"
#include "UObject/ConstructorHelpers.h"
#include "BigCharacter.h"
#include "SmallCharacter.h"


void ATOLWICoopGameMode::SetupTwoPlayers()
{
}

ATOLWICoopGameMode::ATOLWICoopGameMode()
{

}

ABasicInteractive * ATOLWICoopGameMode::FindInteractiveById(const FName & ID) const
{
	return nullptr;
}

ABasicInteractiveSmall * ATOLWICoopGameMode::FindSmallInteractiveById(const FName & ID) const
{
	return nullptr;
}

void ATOLWICoopGameMode::SpringLevelComplete()
{
}

void ATOLWICoopGameMode::SummerLevelComplete()
{
}

void ATOLWICoopGameMode::AutumnLevelComplete()
{
}

void ATOLWICoopGameMode::WinterLevelComplete()
{

}

void ATOLWICoopGameMode::BeginPlay()
{

}

void ATOLWICoopGameMode::Tick(float DeltaTime)
{
}

void ATOLWICoopGameMode::CheckLevel()
{
}

void ATOLWICoopGameMode::CreatePlayerStartPoints()
{
}
