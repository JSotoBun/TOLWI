// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicInteractive.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class TOLWI_API AMovingPlatform : public ABasicInteractive
{
	GENERATED_BODY()
	
public:
	AMovingPlatform();

protected:
	virtual void BeginPlay() override;

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MovingPlatform")
		class USceneComponent* ObjectToToggle;

	UPROPERTY(ReplicatedUsing = OnRep_IsMovingChanged, EditDefaultsOnly, Category = "MovingPlatform")
		bool bIsMoving = false;

	//Event when bIsMovingChanges
	UFUNCTION()
		void OnRep_IsMovingChanged();

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerDoActivatedAction();

	void DoActivatedAction();

	//Event only implemented on a blueprint
	UFUNCTION(BlueprintImplementableEvent)
		void OnPlatformMovingEvent();

public:
	virtual void StartInteracting(APawn* PawnInstigator) override;

	virtual void SendSignalToInteractive() override;
};
