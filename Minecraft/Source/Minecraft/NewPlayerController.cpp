// Fill out your copyright notice in the Description page of Project Settings.


#include "NewPlayerController.h"

#include "Blocks/BlockActor.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void ANewPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UKismetSystemLibrary::PrintString(this, TEXT("GamePlayerUse"));
	Initialize();
}

void ANewPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	UpdatePosition();
	// if (result)
	// {
	// 	AddChunks();
	// }
}

void ANewPlayerController::UpdatePosition()
{
	APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (!IsValid(pawn))
	{
		UKismetSystemLibrary::PrintString(this, TEXT("PawnNotValid"));
		return;
	}

	FVector position = pawn->GetActorLocation();
	world->UpdatePlayerPos(position);
}

void ANewPlayerController::Initialize()
{
	BlockISMActor = GetWorld()->SpawnActor<ABlockActor>();
	manager = new BlockInstancesManager(BlockISMActor);
	world = new World(manager);
	world->RenderBlocks();
}

