// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interact.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteract : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TOLWI_API IInteract
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	// Notifies an Actor that the interactive is in range
	virtual void NotifyInInteractRange(AActor* Interactive) = 0;

	// Notifies an Actor that the interactive is not range
	virtual void NotifyLeaveInteractRange(AActor* Interactive) = 0;
};
