// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockActor.h"

#include "BlockEnumType.h"
#include "Engine/AssetManager.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ABlockActor::ABlockActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	InitMaterials();
	InitInstancedStaticMeshes();
}

// Called when the game starts or when spawned
void ABlockActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABlockActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockActor::InitInstancedStaticMeshes()
{
	UStaticMesh* myMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cube.Cube"));
	for (int i =0; i< static_cast<uint8>(BlockEnumType::AIR); i++)
	// for (int i = 0; i < 1; i++)
	{
		BlockEnumType type = static_cast<BlockEnumType>(i);
		UHierarchicalInstancedStaticMeshComponent* BlockMeshComponent;

		BlockMeshComponent = NewObject<UHierarchicalInstancedStaticMeshComponent>(this,*UEnum::GetValueAsString<BlockEnumType>(type));
		BlockMeshComponent->SetStaticMesh(myMesh);
		BlockMeshComponent->SetMaterial(0, MaterialsMap[type]);
		BlockMeshesMap.Add(type, BlockMeshComponent);
	}
}

void ABlockActor::InitMaterials()
{
	const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("BlockEnumType"), true);
	for (int i = 0; i < static_cast<uint8>(BlockEnumType::AIR); i++)
	{
		BlockEnumType type = static_cast<BlockEnumType>(i);
		FString name = EnumPtr->GetDisplayNameTextByIndex(static_cast<int32>(type)).ToString();
		UMaterialInstance* material = LoadMaterial(name);
		if (material)
		{
			MaterialsMap.Add(type, material);
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("load Material fail"));
		}
	}
}

UMaterialInstance* ABlockActor::LoadMaterial(FString typeName)
{
	FString baseDir = "/Game/Materials/BlockMaterials/Materials/";
	baseDir += typeName + "_Mat" + "." + typeName + "_Mat";

	FStringAssetReference MaterialRef(baseDir);

	UMaterial* BaseMaterial = LoadObject<UMaterial>(nullptr, *baseDir);


	if (BaseMaterial)
	{
		UE_LOG(LogTemp, Log, TEXT("%s: load Material success"), *typeName);
		UMaterialInstanceDynamic* Material =
			UMaterialInstanceDynamic::Create(BaseMaterial, nullptr);
		return Material;
	}
	else
	{
		return nullptr;
	}
}
