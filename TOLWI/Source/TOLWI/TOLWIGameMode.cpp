// Fill out your copyright notice in the Description page of Project Settings.

#include "TOLWI.h"
#include "TOLWIGameMode.h"
#include "TOLWIGameInstance.h"
#include "TOLWIGameState.h"
#include "TOLWIPlayerController.h"
#include "BasicInteractive.h"
#include "TOLWIPlayerState.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

ATOLWIGameMode::ATOLWIGameMode()
{

	PlayerControllerClass = ATOLWIPlayerController::StaticClass();
	PlayerStateClass = APlayerState::StaticClass();


}



void ATOLWIGameMode::BeginPlay()
{
	Super::BeginPlay();

	GetInteractivesInLevel();


}

void ATOLWIGameMode::PostLogin(APlayerController * newPlayer)
{
	Super::PostLogin(newPlayer);
	
	bool isBigChar = false;
	bool isSmallChar = false;

	for (FConstPlayerControllerIterator iter = GetWorld()->GetPlayerControllerIterator(); iter; ++iter)
	{
		APlayerController* playerController = iter->Get();
		ATOLWIPlayerState* countPlayerState = Cast<ATOLWIPlayerState>(playerController->PlayerState);

		if (countPlayerState != nullptr)
		{
			switch (countPlayerState->GetCharNum())
			{
			case 1:
				isBigChar = true;
				break;
			case 2:
				isSmallChar = true;
				break;
			}
	}
			
	}
	if (!isBigChar)
	{
		ATOLWIPlayerState* countPlayerState = Cast<ATOLWIPlayerState>(newPlayer->PlayerState);
		if (countPlayerState != nullptr)
		{
			countPlayerState->SetCharacters(1);
			
		}
	}
	else if (!isSmallChar)
	{
		ATOLWIPlayerState* countPlayerState = Cast<ATOLWIPlayerState>(newPlayer->PlayerState);
		if (countPlayerState != nullptr)
		{
			countPlayerState->SetCharacters(2);
			
		}
		
	}
	
}




void ATOLWIGameMode::GetInteractivesInLevel()
{
	TArray<AActor*> Objects;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABasicInteractive::StaticClass(), Objects);
	for (int32 i = 0; i < Objects.Num(); i++)
	{
		ABasicInteractive* Interactive = Cast<ABasicInteractive>(Objects[i]);
		if (Interactive != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("[ARoomGameMode::GetInteractivesInRoom] Interactive: %s "), *Interactive->GetName());

			InteractiveInLevelList.Add(Interactive);
		}
		UE_LOG(LogTemp, Warning, TEXT("[ARoomGameMode::GetInteractablesInRoom] InteractableList Num: %i "), InteractiveInLevelList.Num());
	}
}

ABasicInteractive * ATOLWIGameMode::FindInteractiveById(const FName & ID) const
{
	for (int32 i = 0; i < InteractiveInLevelList.Num(); i++)
	{
		if (InteractiveInLevelList[i]->ID == ID)
		{
			UE_LOG(LogTemp, Warning, TEXT("[ARoomGameMode::FindInteractiveById] Interactive: %s "), *InteractiveInLevelList[i]->GetName());

			return InteractiveInLevelList[i];
		}
	}

	return nullptr;
}



void ATOLWIGameMode::CompletedSpringLevel(APawn * InstigatorPawn, bool bSuccess)
{
	if (InstigatorPawn == nullptr) return;

	ATOLWIGameState* GameState = GetGameState<ATOLWIGameState>();

	if (GameState != nullptr)
	{

		//call multicast
		GameState->MulticastOnSpringPortal(InstigatorPawn);
	}
}
