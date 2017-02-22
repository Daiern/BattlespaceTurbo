// Fill out your copyright notice in the Description page of Project Settings.



#include "BattlespaceTurbo.h"
#include "MainMenuGameMode.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>




void AMainMenuGameMode::BeginPlay()
{
	Super::BeginPlay();
	ChangeMenuWidget(StartingWidgetClass);
}

void AMainMenuGameMode::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if (CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromViewport();
		CurrentWidget = nullptr;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Remove Widget"));
	}
	if (NewWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Add Widget"));
		}
	}
}