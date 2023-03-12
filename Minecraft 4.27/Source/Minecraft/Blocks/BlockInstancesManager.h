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
	ABlockActor* BlockISMActor;
	uint32 MaxBlockCount;
};
