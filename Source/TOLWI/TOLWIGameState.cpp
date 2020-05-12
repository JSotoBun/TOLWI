// Fill out your copyright notice in the Description page of Project Settings.


#include "TOLWIGameState.h"
#include "TOLWIPlayerController.h"

void ATOLWIGameState::MulticastOnSpringPortal_Implementation(APawn* InstigatorPawn)
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; It++)
	{
		ATOLWIPlayerController* PC = Cast<ATOLWIPlayerController>(It->Get());

		if (PC && PC->IsLocalController())
		{
			PC->OnSpringLevelCompleted(InstigatorPawn);
			UE_LOG(LogTemp, Warning, TEXT("Overlapping"));
			UWorld* World = GetWorld();
			World->ServerTravel("/Game/Levels/Autumn?listen");
		}
	}
}