// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blocks/BlockActor.h"
#include "Blocks/BlockInstancesManager.h"
#include "GameFramework/PlayerController.h"
#include "World/WorldConstants.h"
#include "NewPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MINECRAFT_API ANewPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="render")
	int32 renderRange = WorldConstants::RENDER_RANGE;

	int32 chunkX = 0;
	int32 chunkY = 0;
	int32 chunkSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="render")
	int chunkElementCount = WorldConstants::CHUNK_ELEMENT_COUNT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="render")
	int unitBlockSize = WorldConstants::UNIT_BLOCK_SIZE;

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

private:
	BlockInstancesManager* manager;
	ABlockActor* BlockISMActor;
	bool UpdatePosition();

	void Initialize();
	void AddChunks();
};
