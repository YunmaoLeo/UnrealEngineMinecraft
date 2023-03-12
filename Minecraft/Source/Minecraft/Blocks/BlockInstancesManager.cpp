#include "BlockInstancesManager.h"

#include "Minecraft/NewPlayerController.h"
#include "Minecraft/World/WorldConstants.h"

BlockInstancesManager::BlockInstancesManager(ABlockActor* ISMActor)
{
	BlockISMActor = ISMActor;
	MaxBlockCount = pow(WorldConstants::CHUNK_ELEMENT_COUNT, 2) * WorldConstants::CHUNK_DEPTH;
}

uint32 BlockInstancesManager::AddBlockInstance(BlockEnumType type, const FTransform& transform)
{
	return BlockISMActor->BlockMeshesMap[type]->AddInstance(transform);
}

void BlockInstancesManager::RemoveBlockInstance(BlockEnumType type, uint32 index)
{
	BlockISMActor->BlockMeshesMap[type]->RemoveInstance(index);
}
