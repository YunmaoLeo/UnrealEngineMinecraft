// Fill out your copyright notice in the Description page of Project Settings.


#include "NewGameMode.h"
#include "GameFramework/PlayerController.h"
#include "MinecraftHUD.h"
#include "MyPawn.h"
#include "Kismet/KismetSystemLibrary.h"

ANewGameMode::ANewGameMode(): Super()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	if (PlayerPawnClassFinder.Class!=nullptr)
	{
		//UKismetSystemLibrary::PrintString(this, TEXT("HasPawn"));
		DefaultPawnClass = PlayerPawnClassFinder.Class;
	}

	HUDClass = AMinecraftHUD::StaticClass();
	MyPlayerControllerClass = ANewPlayerController::StaticClass();
}

void ANewGameMode::BeginPlay()
{
	Super::BeginPlay();

	ANewPlayerController* tempPlayerController = GetWorld()->SpawnActor<ANewPlayerController>(MyPlayerControllerClass);

	APawn* pawn = GetWorld()->SpawnActor<APawn>(DefaultPawnClass, FVector::ZeroVector, FRotator::ZeroRotator);
	tempPlayerController->Possess(pawn);
	
	tempPlayerController->SetAsLocalPlayerController();
}
