// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicInteractiveSmall.h"
#include "SmallCharacter.h"
#include "Components/BoxComponent.h"
#include "TOLWIGameMode.h"

// Sets default values
ABasicInteractiveSmall::ABasicInteractiveSmall()
{
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	// Mesh
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
	Mesh->SetupAttachment(RootComponent);

	Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	Collision->SetupAttachment(RootComponent);

	// Dynamic events
	Collision->OnComponentBeginOverlap.AddDynamic(this, &ABasicInteractiveSmall::BeginOverlap);
	Collision->OnComponentEndOverlap.AddDynamic(this, &ABasicInteractiveSmall::EndOverlap);

	// Mark the interactive as replicates
	SetReplicates(true);

	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasicInteractiveSmall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicInteractiveSmall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasicInteractiveSmall::StartInteracting(APawn * PawnInstigator)
{
	UE_LOG(LogTemp, Warning, TEXT("ABasicInteractiveSmall::StartInteracting called"));
}

ABasicInteractiveSmall * ABasicInteractiveSmall::GetConnectedInteractive()
{
	if (ConnectedInteractiveID == "NONE") return nullptr;

	ATOLWIGameMode * GMode = Cast<ATOLWIGameMode>(GetWorld()->GetAuthGameMode());

	if (GMode == nullptr) return nullptr;

	ABasicInteractiveSmall* interactive = GMode->FindSmallInteractiveById(ConnectedInteractiveID);

	return interactive;
}

void ABasicInteractiveSmall::SendSignalToInteractive()
{
	UE_LOG(LogTemp, Warning, TEXT("ABasicInteractiveSmall::SendSignalToInteractive called"));
}

void ABasicInteractiveSmall::BeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (SmallCharacterOverlapping != nullptr) return;

	auto Character = Cast<ASmallCharacter>(OtherActor);
	if (Character)
	{
		SmallCharacterOverlapping = Character;

		// Detects if  the interface CharacterOverlapping
		IInteract* Interface = Cast<IInteract>(SmallCharacterOverlapping);

		if (Interface)
		{
			SetOwner(SmallCharacterOverlapping);

			// Notify the interface with this interactive
			Interface->NotifyInInteractRange(this);
		}
	}
}

void ABasicInteractiveSmall::EndOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	auto Character = Cast<ASmallCharacter>(OtherActor);
	if (Character)
	{
		if ((SmallCharacterOverlapping != nullptr) && (SmallCharacterOverlapping == Character))
		{
			// Release the overlapped character reference
			SmallCharacterOverlapping = nullptr;

			IInteract* Interface = Cast<IInteract>(SmallCharacterOverlapping);

			if (Interface)
			{
				SetOwner(nullptr);

				// Notifies the interface
				Interface->NotifyLeaveInteractRange(this);
			}
		}
	}
}

