// Fill out your copyright notice in the Description page of Project Settings.


#include "SmallMechanism.h"
#include "UnrealNetwork.h"

void ASmallMechanism::StartInteracting(APawn * PawnInstigator)
{
	Super::StartInteracting(PawnInstigator);

	if (bIsActivated)
	{
		UE_LOG(LogTemp, Warning, TEXT("[AMechanism::StartInteracting] bIsActivated, we can't activated it again"));
	}
	else
	{
		// Check my role, if I am not the server-client call the server
		if (Role < ROLE_Authority)
		{
			ServerDoActivatedAction();
		}
		else
		{
			// I am the server, do the action
			DoActivatedAction();
		}
	}
}


void ASmallMechanism::ServerDoActivatedAction_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("[ASmallMechanism::ServerDoActivatedAction]"));

	DoActivatedAction();
}

bool ASmallMechanism::ServerDoActivatedAction_Validate()
{
	return true;
}
void ASmallMechanism::DoActivatedAction()
{
	UE_LOG(LogTemp, Warning, TEXT("[ASmallMechanism::ServerDoActivatedAction]"));

	bIsActivated = true;

	ABasicInteractiveSmall* interactive = GetConnectedInteractive();

	if (interactive != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("[ASmallMechanism::DoActivatedAction] Connected Interactive found called SendSignalToInteractive: %s "), *interactive->GetName());

		interactive->SendSignalToInteractive();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[ASmallMechanism::DoActivatedAction] Connected Interactive not found "));
	}

	// Call the event
	onMechanismActivatedEvent();
}


void ASmallMechanism::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASmallMechanism, bIsActivated);
}