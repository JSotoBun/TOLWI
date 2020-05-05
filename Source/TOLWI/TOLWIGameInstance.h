// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"

#include "OnlineSubsystem.h"
#include "Public/Interfaces/OnlineSessionInterface.h"

#include "MenuSystem/MenuInterface.h"
#include "TOLWIGameInstance.generated.h"
/**
 * 
 */
UCLASS()
class TOLWI_API UTOLWIGameInstance : public UGameInstance, public IMenuInterface
{
	GENERATED_BODY()


public:
	UTOLWIGameInstance(const FObjectInitializer & ObjectInitializer);
	
	virtual void Init();

	UFUNCTION(BlueprintCallable)
	void LoadMenu();

	//UFUNCTION(Exec)
	//void Host(FString ServerName) override;

	//UFUNCTION(Exec)
	//void Join(uint32 Index) override;

	//void StartSession();

	//virtual void LoadMainMenu() override;

	//void RefreshServerList() override;

private:

	//Session
	IOnlineSessionPtr SessionInterface;
	TSharedPtr<class FOnlineSessionSearch> SessionSearch;


public:
	UFUNCTION()
		void Host(FString ServerName) override;

	UFUNCTION()
		void JoinSession(uint32 Index) override;

	UFUNCTION()
		void EndSession() override;

	UFUNCTION()
		void OpenServerListMenu() override;

private:
	TSubclassOf<class UUserWidget> MenuClass;
	class UMainMenu* Menu;


private:
	//Session Events
	FString DesiredServerName;

	void OnCreateSessionComplete(FName SessionName, bool Success);
	void OnDestroySessionComplete(FName SessionName, bool Success);
	void OnFindSessionsComplete(bool Success);
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
	void CreateSession();
};
