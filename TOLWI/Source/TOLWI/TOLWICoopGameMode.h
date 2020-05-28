// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TOLWICoopGameMode.generated.h"


USTRUCT(BlueprintType)
struct FPlayerStarts
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY()
		FVector PlayerStart1;

		UPROPERTY()
		FVector PlayerStart2;

};
/**
 * 
 */
UCLASS()
class TOLWI_API ATOLWICoopGameMode : public AGameMode
{
	GENERATED_BODY()
	
private:
	bool hasSetSecondPlayer;
	bool canFinishSetup;

	void SetupTwoPlayers();

public:

	ATOLWICoopGameMode();

	class ABasicInteractive* FindInteractiveById(const FName& ID) const;
	class ABasicInteractiveSmall* FindSmallInteractiveById(const FName& ID) const;

	void SpringLevelComplete();
	void SummerLevelComplete();
	void AutumnLevelComplete();
	void WinterLevelComplete();


protected:
	
	virtual void BeginPlay() override;
	int32 InitialID;

	UPROPERTY()
		class BigCharacter* PlayerOneInWorld;

	//Level Reference
	class ALevelScriptActor* LevelActorInstance;

	//Level Name
	static const FString MyLevelName;


public:

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Play Mode")
	bool isTwoPlayerMode;
private:
	

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Levels")
	TArray<FString> Levels;
	
	int32 CurrentLevelIndex;
	FString NextLevel;

	void CheckLevel();

	// List of interactives in the current level
	TArray<class ABasicInteractive*> InteractiveInLevelList;
	TArray<class ABasicInteractiveSmall*> SmallInteractiveInLevelList;

public:
	// Struct Reference
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		FPlayerStarts PlayerStartSetup;

	// Populate World With Respawn Locations
	void CreatePlayerStartPoints();
};
