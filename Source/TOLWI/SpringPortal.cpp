// Fill out your copyright notice in the Description page of Project Settings.


#include "SpringPortal.h"
#include "Components/BoxComponent.h"
#include "BigCharacter.h"
#include "SmallCharacter.h"
#include "TOLWIPlayerController.h"
#include "TOLWIGameMode.h"
#include "UnrealNetwork.h"

// Sets default values
ASpringPortal::ASpringPortal()
{
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootScene;

	Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	Collision->SetupAttachment(RootComponent);
	Collision->OnComponentBeginOverlap.AddDynamic(this, &ASpringPortal::HandleOverlap);

	PlayerCount = 0;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ASpringPortal::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ASmallCharacter* SmallPawn = Cast<ASmallCharacter>(OtherActor);
	ABigCharacter *BigPawn = Cast<ABigCharacter>(OtherActor);

	if (BigPawn == nullptr)
	{
		return;
	}

	PlayerCount++;

	if (PlayerCount >= 2)
	{
		UWorld* World = GetWorld();
		if (World == nullptr)
		{
			return;
		}

		ATOLWIGameMode* GameMode = Cast<ATOLWIGameMode>(World->GetAuthGameMode());

		if (GameMode == nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("[ASpringPortal::HandleOverlap] GameMode NULL"));
			return;
		}
		if (GameMode != nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("[ASpringPortal::HandleOverlap] GameMode NOT NULL"));
			GameMode->CompletedSpringLevel(BigPawn, true);
			
		}
	}
}

// Called when the game starts or when spawned
void ASpringPortal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpringPortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpringPortal::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASpringPortal, PlayerCount);
}

