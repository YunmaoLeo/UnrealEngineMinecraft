#pragma once
#include <vector>

#include "Minecraft/Blocks/BlockEnumType.h"
#include "Minecraft/Blocks/BlockInstancesManager.h"

class Chunk
{
public:
	Chunk(int x, int y);
	~Chunk();
	void RenderAllBlocks(BlockInstancesManager* manager);
	void RemoveAllBlocks(BlockInstancesManager* manager);

private:
	std::vector<std::vector<std::vector<BlockEnumType>>> Blocks;
	std::vector<std::vector<std::vector<bool>>> BlocksVisibleStatus;
	std::vector<std::vector<std::vector<int>>> BlocksInstanceIndex;

	int indexX;
	int indexY;
	FVector origin;
	uint8 blockSize;
	uint8 size;
	int chunkSize;
	uint16 depth;
	void InitBlocks();

	void GenerateTerrain();

	bool CheckInRange(int x, int y, int z) const;

	void CheckTerrainBlockVisibility();
	bool CheckIsType(int x, int y, int z, BlockEnumType type) const;
};
