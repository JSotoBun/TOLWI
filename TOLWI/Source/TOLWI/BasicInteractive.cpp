// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicInteractive.h"
#include "BigCharacter.h"
#include "SmallCharacter.h"
#include "Components/BoxComponent.h"
#include "TOLWIGameMode.h"

// Sets default values
ABasicInteractive::ABasicInteractive()
{
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	// Mesh
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
	Mesh->SetupAttachment(RootComponent);

	Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	Collision->SetupAttachment(RootComponent);

	// Dynamic events
	Collision->OnComponentBeginOverlap.AddDynamic(this, &ABasicInteractive::BeginOverlap);
	Collision->OnComponentEndOverlap.AddDynamic(this, &ABasicInteractive::EndOverlap);

	// Mark the interactive as replicates
	SetReplicates(true);

	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABasicInteractive::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicInteractive::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasicInteractive::StartInteracting(APawn * PawnInstigator)
{
	UE_LOG(LogTemp, Warning, TEXT("ABasicInteractive::StartInteracting called"));
}

ABasicInteractive * ABasicInteractive::GetConnectedInteractive()
{
	if (ConnectedInteractiveID == "NONE") return nullptr;

	ATOLWIGameMode * GM = Cast<ATOLWIGameMode>(GetWorld()->GetAuthGameMode());

	if (GM == nullptr) return nullptr;

	ABasicInteractive* interactive = GM->FindInteractiveById(ConnectedInteractiveID);

	return interactive;
}

void ABasicInteractive::SendSignalToInteractive()
{
	UE_LOG(LogTemp, Warning, TEXT("ABasicInteractive::SendSignalToInteractive called"));
}

void ABasicInteractive::BeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (BigCharacterOverlapping != nullptr) return;

	auto Character = Cast<ABigCharacter>(OtherActor);
	if (Character)
	{
		BigCharacterOverlapping = Character;

		// Detects if  the interface CharacterOverlapping
		IInteract* Interface = Cast<IInteract>(BigCharacterOverlapping);

		if (Interface)
		{
			SetOwner(BigCharacterOverlapping);

			// Notify the interface with this interactive
			Interface->NotifyInInteractRange(this);
		}
	}
	}


void ABasicInteractive::EndOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	auto Character = Cast<ABigCharacter>(OtherActor);
	if (Character)
	{
		if ((BigCharacterOverlapping != nullptr) && (BigCharacterOverlapping == Character))
		{
			// Release the overlapped character reference
			BigCharacterOverlapping = nullptr;

			IInteract* Interface = Cast<IInteract>(BigCharacterOverlapping);

			if (Interface)
			{
				SetOwner(nullptr);

				// Notifies the interface
				Interface->NotifyLeaveInteractRange(this);
			}
		}
	}
}

