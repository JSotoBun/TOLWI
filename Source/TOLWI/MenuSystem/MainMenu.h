// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "MainMenu.generated.h"


USTRUCT()
struct FServerData
{
	GENERATED_BODY()

		FString Name;
	uint16 CurrentPlayers;
	uint16 MaxPlayers;
	FString HostUsername;
};


/**
 * 
 */
UCLASS()
class TOLWI_API UMainMenu : public UMenuWidget
{
	GENERATED_BODY()


public:

	UMainMenu(const FObjectInitializer & ObjectInitializer);

	void SetServerList(TArray<FServerData> ServerNames);

	void SelectIndex(uint32 Index);
protected:

	virtual bool Initialize();


private:

	TSubclassOf<class UUserWidget> ServerRowClass;

	UPROPERTY(meta = (BindWidget))
	class UButton* HostButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* JoinButton;



	UFUNCTION()
	void HostServer();

};
