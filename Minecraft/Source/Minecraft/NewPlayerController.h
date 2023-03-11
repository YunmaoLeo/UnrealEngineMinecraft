// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blocks/BlockActor.h"
#include "Blocks/BlockInstancesManager.h"
#include "World/World.h"
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

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

private:
	BlockInstancesManager* manager;
	ABlockActor* BlockISMActor;
	World* world;
	void UpdatePosition();

	void Initialize();
};
