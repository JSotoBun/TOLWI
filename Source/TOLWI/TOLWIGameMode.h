// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "OnlineIdentityInterface.h"
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TOLWIGameMode.generated.h"


/**
 * 
 */
UCLASS(config=Game)
class TOLWI_API ATOLWIGameMode : public AGameMode
{
	GENERATED_BODY()
public:

	ATOLWIGameMode();

	class ABasicInteractive* FindInteractiveById(const FName& ID) const;


protected:

	virtual void BeginPlay() override;
private:

	// List of interactives in the current level
	TArray<class ABasicInteractive*> InteractiveInLevelList;

private:
	void GetInteractivesInLevel();
public:

	void CompletedSpringLevel(APawn* InstigatorPawn, bool bSuccess);
};
