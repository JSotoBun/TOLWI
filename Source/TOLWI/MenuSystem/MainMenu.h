// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuInterface.h"
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
class TOLWI_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()


public:

	void Setup(IMenuInterface* ServerMenuInterface);

	void Teardown();

protected:

	virtual bool Initialize() override;


protected:
	IMenuInterface* ServerMenuInterface;

protected:

	//Menus
	UPROPERTY(meta = (BindWidget))
		class UWidgetSwitcher* MenuSwitcher;


	UPROPERTY(meta = (BindWidget))
		class UWidget* MainMenu;

	// Link to buttons
	UPROPERTY(meta = (BindWidget))
		class UButton* HostButton;

	UFUNCTION()
		void OnHostButtonPressed();

	UPROPERTY(meta = (BindWidget))
		class UButton* JoinButton;

	UFUNCTION()
		void OnJoinButtonPressed();

	//// JOIN SESSIONS ///////
protected:

	UPROPERTY(meta = (BindWidget))
		class UWidget* JoinMenu;

	UPROPERTY(meta = (BindWidget))
		class UPanelWidget* ServerList;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UServerRow> ServerRowClass;
	TOptional<uint32> SelectedScrollIndex;


	//buttons

	UPROPERTY(meta = (BindWidget))
		class UButton* CancelJoinMenuButton;

	UFUNCTION()
		void onCancelJoinServer();

	UPROPERTY(meta = (BindWidget))
		class UButton* ConfirmJoinMenuButton;

	UFUNCTION()
		void onJoinSelectedServer();

public:
	void InitialiseServerList(TArray<FServerData> Data);
	void SelectIndexServerList(uint32 Index);
	void UpdateServerList();


};
