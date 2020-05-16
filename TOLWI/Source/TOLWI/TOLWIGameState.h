// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "GameFramework/GameState.h"
#include "TOLWIGameState.generated.h"


/**
 * 
 */
UCLASS()
class TOLWI_API ATOLWIGameState : public AGameState
{
	GENERATED_BODY()
	

public:
	//This runs in all the clients
	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnSpringPortal(APawn* InstigatorPawn);
};
