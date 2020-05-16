// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicInteractive.generated.h"

UCLASS()
class TOLWI_API ABasicInteractive : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasicInteractive();

protected:
	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interactive", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interactive", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interactive", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Collision;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void StartInteracting(APawn* PawnInstigator);

	virtual ABasicInteractive* GetConnectedInteractive();

	virtual void SendSignalToInteractive();

protected:

	class ASmallCharacter* SmallCharacterOverlapping = nullptr;
	class ABigCharacter*	BigCharacterOverlapping = nullptr;
protected:

	UFUNCTION()
		void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

	UFUNCTION()
		void EndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		FName ID;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		FName ConnectedInteractiveID;
};
