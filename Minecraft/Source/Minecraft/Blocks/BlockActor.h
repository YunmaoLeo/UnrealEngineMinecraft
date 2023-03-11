// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BlockEnumType.h"
#include "GameFramework/Actor.h"
#include "BlockActor.generated.h"

UCLASS()
class MINECRAFT_API ABlockActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlockActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, Category="Materials")
	TMap<BlockEnumType, UMaterialInterface*> MaterialsMap;
	
	UPROPERTY(EditAnywhere)
	TMap<BlockEnumType, UInstancedStaticMeshComponent*> BlockMeshesMap;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UMaterialInstance* LoadMaterial(FString typeName);

private:
	void InitInstancedStaticMeshes();
	void InitMaterials();
};
