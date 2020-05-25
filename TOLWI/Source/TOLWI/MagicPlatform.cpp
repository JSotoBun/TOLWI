// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicPlatform.h"
#include "UnrealNetwork.h"


AMagicPlatform::AMagicPlatform()
{

}
void AMagicPlatform::BeginPlay()
{
	Super::BeginPlay();
}

void AMagicPlatform::OnRep_IsVisibleChanged()
{
}

void AMagicPlatform::ServerDoActivatedAction_Implementation()
{
	DoActivatedAction();
}

bool AMagicPlatform::ServerDoActivatedAction_Validate()
{
	return true;
}
void AMagicPlatform::DoActivatedAction()
{
	bIsVisible = true;
	OnMagicPlatformEvent();
	OnRep_IsVisibleChanged();
}



void AMagicPlatform::StartInteracting(APawn * PawnInstigator)
{
	Super::StartInteracting(PawnInstigator);

	if (bIsVisible)
	{
		UE_LOG(LogTemp, Warning, TEXT("[ADoor::StartInteracting] bIsOpen ==  we can go in"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[ADoor::StartInteracting] bIsOpen == false we can go in"));
	}
}

void AMagicPlatform::SendSignalToInteractive()
{
	UE_LOG(LogTemp, Warning, TEXT("[ADoor::SendSignalToInteractive] "));

	Super::SendSignalToInteractive();

	if (!bIsVisible)
	{
		UE_LOG(LogTemp, Warning, TEXT("[ADoor::SendSignalToInteractive] !bIsOpen"));

		// We need to check if we are server or not
		if (Role < ROLE_Authority)
		{
			ServerDoActivatedAction();
		}
		else
		{
			DoActivatedAction();
		}
	}
}

void AMagicPlatform::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMagicPlatform, bIsVisible);
}