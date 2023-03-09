// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NewPlayerController.h"
#include "GameFramework/GameModeBase.h"
#include "NewGameMode.generated.h"


/**
 * 
 */
UCLASS()
class MINECRAFT_API ANewGameMode : public AGameModeBase
{
	GENERATED_BODY()

	ANewGameMode();

protected:
	virtual void BeginPlay() override;

private:
	TSubclassOf<class ANewPlayerController> MyPlayerControllerClass;
};
