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
	bool result = UpdatePosition();
	// if (result)
	// {
	// 	AddChunks();
	// }
}

bool ANewPlayerController::UpdatePosition()
{
	APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (!IsValid(pawn))
	{
		UKismetSystemLibrary::PrintString(this, TEXT("PawnNotValid"));
		return false;
	}

	FVector position = pawn->GetActorLocation();
	int currentChunkX = position.X / chunkSize;
	int currentChunkY = position.Y / chunkSize;
	bool result = false;
	if (currentChunkX != chunkX || currentChunkY != chunkY)
	{
		result = true;
		chunkX = currentChunkX;
		chunkY = currentChunkY;
	}
	return result;
}

void ANewPlayerController::Initialize()
{
	BlockISMActor = GetWorld()->SpawnActor<ABlockActor>();
	manager = new BlockInstancesManager(BlockISMActor);
	chunkSize = chunkElementCount * unitBlockSize;
	AddChunks();
}

void ANewPlayerController::AddChunks()
{
	int index = 0;
	for (int x = chunkX - renderRange; x <= chunkX + renderRange; x++)
	{
		for (int y = chunkY - renderRange; y <= chunkY + renderRange; y++)
		{
			FVector Location(x * chunkSize, y * chunkSize, 0);
			FTransform transform;
			transform.SetLocation(Location);
			manager->AddBlockInstance(BlockEnumType(index%3), transform);
			index ++;
		}
	}
}
