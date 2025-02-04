// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TOLWIPlayerController.generated.h"


/**
 * 
 */
UCLASS()
class TOLWI_API ATOLWIPlayerController : public APlayerController
{
	GENERATED_BODY()

	
public:
	

	UFUNCTION(BlueprintImplementableEvent, Category = "Player Controller")
	void OnSpringLevelCompleted(APawn* InstigatorPawn);

	//ATOLWIPlayerController();

	TSubclassOf<APawn> Player1PawnObClass;
	TSubclassOf<APawn> Player2PawnObClass;

	void IsBigCharacter();
	void IsSmallCharacter();
protected:


};
