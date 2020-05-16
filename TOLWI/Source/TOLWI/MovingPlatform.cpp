// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"
#include "UnrealNetwork.h"

AMovingPlatform::AMovingPlatform()
{
	ObjectToToggle = CreateDefaultSubobject<USceneComponent>(TEXT("ObjectToToggle"));
	ObjectToToggle->SetupAttachment(RootComponent);
}
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	if (ObjectToToggle == nullptr) return;

	ObjectToToggle->SetVisibility(false, true);
}

void AMovingPlatform::OnRep_IsMovingChanged()
{
	if (bIsMoving)
	{
		ObjectToToggle->SetVisibility(true, true);
	}
	else
	{
		ObjectToToggle->SetVisibility(false, true);

	}
}

void AMovingPlatform::ServerDoActivatedAction_Implementation()
{
	DoActivatedAction();
}

bool AMovingPlatform::ServerDoActivatedAction_Validate()
{
	return true;
}
void AMovingPlatform::DoActivatedAction()
{
	bIsMoving = true;
	OnPlatformMovingEvent();
	OnRep_IsMovingChanged();
}



void AMovingPlatform::StartInteracting(APawn * PawnInstigator)
{
	Super::StartInteracting(PawnInstigator);

	if (bIsMoving)
	{
		UE_LOG(LogTemp, Warning, TEXT("[ADoor::StartInteracting] bIsOpen ==  we can go in"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[ADoor::StartInteracting] bIsOpen == false we can go in"));
	}
}

void AMovingPlatform::SendSignalToInteractive()
{
	UE_LOG(LogTemp, Warning, TEXT("[ADoor::SendSignalToInteractive] "));

	Super::SendSignalToInteractive();

	if (!bIsMoving)
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

void AMovingPlatform::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMovingPlatform, bIsMoving);
}