#include "BlockInstancesManager.h"

#include "Minecraft/NewPlayerController.h"

BlockInstancesManager::BlockInstancesManager(ABlockActor* ISMActor)
{
	BlockISMActor = ISMActor;
	MaxBlockCount = pow(WorldConstants::CHUNK_ELEMENT_COUNT, 2) * WorldConstants::CHUNK_DEPTH;

	for (int i = 0; i < static_cast<uint8>(BlockEnumType::AIR); i++)
	{
		auto type = static_cast<BlockEnumType>(i);
		BlockRecycledIndexArrayMap.Add(type, new std::vector<uint32>);
		BlockInstanceLastIndexMap.Add(type, 0);
	}
}

uint32 BlockInstancesManager::AddBlockInstance(BlockEnumType type, const FTransform& transform)
{
	BlockISMActor->BlockMeshesMap[type]->AddInstance(transform);
	int result;
	std::vector<uint32>* reArray = BlockRecycledIndexArrayMap[type];
	if (!reArray->empty())
	{
		// recycle array is not empty;
		uint32 index = reArray->back();
		reArray->pop_back();
		result = index;
	}
	else
	{
		// recycle array is empty;
		result = BlockInstanceLastIndexMap[type]++;
	}
	return result;
}

void BlockInstancesManager::RemoveBlockInstance(BlockEnumType type, uint32 index)
{
	BlockISMActor->BlockMeshesMap[type]->RemoveInstance(index);
	BlockRecycledIndexArrayMap[type]->push_back(index);
}
