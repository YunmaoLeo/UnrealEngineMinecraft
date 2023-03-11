#pragma once
#include <vector>

#include "BlockActor.h"
#include "BlockEnumType.h"

class BlockInstancesManager
{
public:
	BlockInstancesManager(ABlockActor* ISMActor);
	uint32 AddBlockInstance(BlockEnumType type, const FTransform& transform);
	void RemoveBlockInstance(BlockEnumType type, uint32 index);

private:
	// Last index of every Block Instances Array
	TMap<BlockEnumType, uint32> BlockInstanceLastIndexMap;
	// Recycle the index of every Block Instances to avoid overflow.
	TMap<BlockEnumType, std::vector<uint32>*> BlockRecycledIndexArrayMap;
	ABlockActor* BlockISMActor;
	uint32 MaxBlockCount;
};
