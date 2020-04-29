// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
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

	UFUNCTION(Exec)
	void Host() override;

	UFUNCTION(Exec)
	void Join(const FString& Address) override;

	virtual void LoadMainMenu() override;

private:
	TSubclassOf<class UUserWidget> MenuClass;
	
	class UMainMenu* Menu;

};
