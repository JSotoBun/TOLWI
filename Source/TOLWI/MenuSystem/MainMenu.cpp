// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include "ServerRow.h"

#include "UObject/ConstructorHelpers.h"

#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Components/TextBlock.h"





bool UMainMenu::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) return false;

	if (!ensure(HostButton != nullptr)) return false;
	HostButton->OnClicked.AddDynamic(this, &UMainMenu::OnHostButtonPressed);

	if (!ensure(JoinButton != nullptr)) return false;
	JoinButton->OnClicked.AddDynamic(this, &UMainMenu::OnJoinButtonPressed);


	if (!ensure(CancelJoinMenuButton != nullptr)) return false;
	CancelJoinMenuButton->OnClicked.AddDynamic(this, &UMainMenu::onCancelJoinServer);

	if (!ensure(ConfirmJoinMenuButton != nullptr)) return false;
	ConfirmJoinMenuButton->OnClicked.AddDynamic(this, &UMainMenu::onJoinSelectedServer);

	return true;
}

void UMainMenu::Setup(IMenuInterface* MenuInterface)
{
	ServerMenuInterface = MenuInterface;
	this->AddToViewport();

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	FInputModeUIOnly InputModeData;
	InputModeData.SetWidgetToFocus(this->TakeWidget());
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

	PlayerController->SetInputMode(InputModeData);

	PlayerController->bShowMouseCursor = true;

}

void UMainMenu::Teardown()
{
	this->RemoveFromViewport();

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	FInputModeGameOnly InputModeData;
	PlayerController->SetInputMode(InputModeData);

	PlayerController->bShowMouseCursor = false;
}

void UMainMenu::OnHostButtonPressed()
{
	if (ServerMenuInterface == nullptr) return;
	ServerMenuInterface->Host("TOLWIGameServer");
}

void UMainMenu::OnJoinButtonPressed()
{
	if ((MenuSwitcher == nullptr) || (JoinMenu == nullptr)) return;

	MenuSwitcher->SetActiveWidget(JoinMenu);

	if (ServerMenuInterface == nullptr) return;

	ServerMenuInterface->OpenServerListMenu();
}

void UMainMenu::onCancelJoinServer()
{
	if ((MenuSwitcher == nullptr) || (MainMenu == nullptr)) return;

	MenuSwitcher->SetActiveWidget(MainMenu);
}

void UMainMenu::onJoinSelectedServer()
{
	if ((ServerList == nullptr) && (ServerMenuInterface == nullptr)) return;


	if (SelectedScrollIndex.IsSet())
	{
		int32 ScrollCount = ServerList->GetChildrenCount();
		int32 SelectedIndex = (int32)SelectedScrollIndex.GetValue();
		if ((ScrollCount > 0) && (SelectedIndex >= 0) && (SelectedIndex < ScrollCount))
		{
			ServerMenuInterface->JoinSession(SelectedScrollIndex.GetValue());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("[UMainMenu::InitializeSessionsList] No sessions available"));
		}

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[UMainMenu::InitializeSessionsList] Unable to Join Session"));
	}


}

void UMainMenu::SelectIndexServerList(uint32 Index)
{
	UE_LOG(LogTemp, Warning, TEXT("[UMainMenu::SelectIndex] SelectIndex: %i"), Index);

	SelectedScrollIndex = Index;
	UpdateServerList();
}

void UMainMenu::UpdateServerList()
{
	if (ServerList == nullptr) return;

	// Start from 1, not counting Header
	int indexRow = 0;
	for (int32 i = 1; i < ServerList->GetChildrenCount(); ++i)
	{
		auto Row = Cast<UServerRow>(ServerList->GetChildAt(i));
		if (Row != nullptr)
		{
			Row->Selected = (SelectedScrollIndex.IsSet() && (SelectedScrollIndex.GetValue() == indexRow));

			indexRow++;
		}
	}
}

void UMainMenu::InitialiseServerList(TArray<FServerData> Data)
{
	UE_LOG(LogTemp, Warning, TEXT("[UMainMenu::InitializeSessionsList] %i"), Data.Num());
	if (ServerList == nullptr) return;

	UWorld* World = this->GetWorld();
	if (World == nullptr) return;

	ServerList->ClearChildren();
	uint32 IndexRow = 0;
	for (const FServerData& ServerData : Data)
	{
		UE_LOG(LogTemp, Warning, TEXT("[UMainMenu::InitializeSessionsList] %s"), *ServerData.Name);

		UServerRow* Row = CreateWidget<UServerRow>(World, ServerRowClass);
		if (Row == nullptr) return;

		Row->ServerName->SetText(FText::FromString(ServerData.Name));
		Row->HostUser->SetText(FText::FromString(ServerData.HostUsername));

		FString FractionText = FString::Printf(TEXT("%d/%d"), ServerData.CurrentPlayers, ServerData.MaxPlayers);
		Row->ConnectionFraction->SetText(FText::FromString(FractionText));

		Row->Setup(this, IndexRow);
		++IndexRow;
		ServerList->AddChild(Row);
	}
}






/*

void UMainMenu::SetServerList(TArray<FServerData> ServerNames)
{
	UWorld* World = this->GetWorld();
	if (!ensure(World != nullptr)) return;

	ServerList->ClearChildren();

	uint32 i = 0;
	for (const FServerData& ServerData : ServerNames)
	{
		UServerRow* Row = CreateWidget<UServerRow>(World, ServerRowClass);
		if (!ensure(Row != nullptr)) return;

		Row->ServerName->SetText(FText::FromString(ServerData.Name));
		Row->HostUser->SetText(FText::FromString(ServerData.HostUsername));
		FString FractionText = FString::Printf(TEXT("%d/%d"), ServerData.CurrentPlayers, ServerData.MaxPlayers);
		Row->ConnectionFraction->SetText(FText::FromString(FractionText));
		Row->Setup(this, i);
		++i;

		ServerList->AddChild(Row);
	}
}

void UMainMenu::SelectIndex(uint32 Index)
{
	SelectedIndex = Index;
	UpdateChildren();
}

void UMainMenu::UpdateChildren()
{
	for (int32 i = 0; i < ServerList->GetChildrenCount(); ++i)
	{
		auto Row = Cast<UServerRow>(ServerList->GetChildAt(i));
		if (Row != nullptr)
		{
			Row->Selected = (SelectedIndex.IsSet() && SelectedIndex.GetValue() == i);
		}
	}
}

void UMainMenu::JoinServer()
{
	if (SelectedIndex.IsSet() && MenuInterface != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Selected index %d."), SelectedIndex.GetValue());
		MenuInterface->Join(SelectedIndex.GetValue());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Selected index not set."));
	}
}

void UMainMenu::OpenJoinMenu()
{
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(JoinMenu != nullptr)) return;
	MenuSwitcher->SetActiveWidget(JoinMenu);
	if (MenuInterface != nullptr) {
		MenuInterface->RefreshServerList();
	}
}

void UMainMenu::OpenMainMenu()
{
	if (!ensure(MenuSwitcher != nullptr)) return;
	if (!ensure(JoinMenu != nullptr)) return;
	MenuSwitcher->SetActiveWidget(MainMenu);
}

void UMainMenu::QuitPressed()
{
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	PlayerController->ConsoleCommand("quit");
}
 
 void UMainMenu::OpenHostMenu()
{
	MenuSwitcher->SetActiveWidget(HostMenu);
}

void UMainMenu::HostServer()
{
	if (MenuInterface != nullptr)
	{
		FString ServerName = ServerHostName->Text.ToString();
		MenuInterface->Host(ServerName);
	}
}

UMainMenu::UMainMenu(const FObjectInitializer & ObjectInitializer)
{
	ConstructorHelpers::FClassFinder<UUserWidget> ServerRowBPClass(TEXT("/Game/UI/Widgets/ServerRow"));
	if (!ensure(ServerRowBPClass.Class != nullptr)) return;

	ServerRowClass = ServerRowBPClass.Class;
}

*/
