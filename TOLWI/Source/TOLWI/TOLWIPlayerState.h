// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "TOLWIPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class TOLWI_API ATOLWIPlayerState : public APlayerState
{
	GENERATED_BODY()
	

public:

	ATOLWIPlayerState();

	void SetCharacters(int32 NewCharNum);

	int32 GetCharNum() const;

protected:
	UPROPERTY(Transient, Replicated)
		int32 CharNum;
};
