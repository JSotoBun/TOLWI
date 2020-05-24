// Fill out your copyright notice in the Description page of Project Settings.

#include "TOLWI.h"
#include "TOLWIPlayerState.h"
#include "Net/UnrealNetwork.h"

ATOLWIPlayerState::ATOLWIPlayerState()
{
	bReplicates = true;
}
void ATOLWIPlayerState::SetCharacters(int32 NewCharNum)
{
	CharNum = NewCharNum;
}

int32 ATOLWIPlayerState::GetCharNum() const
{
	return CharNum;
}

void ATOLWIPlayerState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATOLWIPlayerState, CharNum);
}