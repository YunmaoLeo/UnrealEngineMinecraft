// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blocks/BlockActor.h"
#include "GameFramework/PlayerController.h"
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
	int32 renderRange = 100;

	int32 chunkX = 0;
	int32 chunkY = 0;
	int32 chunkSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="render")
	int chunkElementCount = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="render")
	int unitBlockSize = 100;

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

private:

	ABlockActor* BlockInstances;
	bool UpdatePosition();

	void Initialize();
	void AddChunks();
};
