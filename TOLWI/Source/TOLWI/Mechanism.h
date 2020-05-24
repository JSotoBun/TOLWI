// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicInteractive.h"
#include "Mechanism.generated.h"

/**
 * 
 */
UCLASS()
class TOLWI_API AMechanism : public ABasicInteractive
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
