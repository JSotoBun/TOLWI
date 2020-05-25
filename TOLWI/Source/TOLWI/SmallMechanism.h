// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicInteractiveSmall.h"
#include "SmallMechanism.generated.h"

/**
 * 
 */
UCLASS()
class TOLWI_API ASmallMechanism : public ABasicInteractiveSmall
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(Replicated, EditDefaultsOnly, Category = "Mechanism")
		bool bIsActivated = false;

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerDoActivatedAction();

	void DoActivatedAction();

	// Event only implemented on a blueprint
	UFUNCTION(BlueprintImplementableEvent)
		void onMechanismActivatedEvent();

public:

	virtual void StartInteracting(APawn* PawnInstigator) override;
};
