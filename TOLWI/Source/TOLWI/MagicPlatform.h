// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicInteractive.h"
#include "MagicPlatform.generated.h"

/**
 * 
 */
UCLASS()
class TOLWI_API AMagicPlatform : public ABasicInteractive
{
	GENERATED_BODY()
	
public:
	AMagicPlatform();

protected:
	virtual void BeginPlay() override;

protected:

	UPROPERTY(ReplicatedUsing = OnRep_IsVisibleChanged, EditDefaultsOnly, Category = "MagicPlatform")
		bool bIsVisible = false;

	UFUNCTION()
		void OnRep_IsVisibleChanged();

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerDoActivatedAction();

	void DoActivatedAction();

	//Event only implemented on a blueprint
	UFUNCTION(BlueprintImplementableEvent)
		void OnMagicPlatformEvent();

public:
	virtual void StartInteracting(APawn* PawnInstigator) override;

	virtual void SendSignalToInteractive() override;
};
