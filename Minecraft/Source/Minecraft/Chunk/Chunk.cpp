#include "Chunk.h"

#include <chrono>


#include "Minecraft/Tools/ScopedTimer.h"
#include "Minecraft/World/WorldConstants.h"
#include "Minecraft/WorldGenerator/WorldGenerator.h"

Chunk::Chunk(int x, int y)
{
	size = WorldConstants::CHUNK_ELEMENT_COUNT;
	depth = WorldConstants::CHUNK_DEPTH;
	blockSize = WorldConstants::UNIT_BLOCK_SIZE;
	chunkSize = size * blockSize;

	indexX = x;
	indexY = y;

	origin = FVector((indexX - 0.5) * chunkSize, (indexY - 0.5) * chunkSize, 0);
	Blocks = std::vector<std::vector<std::vector<BlockEnumType>>>();
	Blocks.resize(size, std::vector<std::vector<BlockEnumType>>(
		              size, std::vector<BlockEnumType>(depth)));

	BlocksVisibleStatus = std::vector<std::vector<std::vector<bool>>>();
	BlocksVisibleStatus.resize(size, std::vector<std::vector<bool>>(
		                           size, std::vector<bool>(depth, false)));

	BlocksInstanceIndex = std::vector<std::vector<std::vector<int>>>();
	BlocksInstanceIndex.resize(size, std::vector<std::vector<int>>(
		                           size, std::vector<int>(depth, -1)));
	InitBlocks();
}

void Chunk::InitBlocks()
{
	GenerateTerrain();
	CheckTerrainBlockVisibility();
}

void Chunk::GenerateTerrain()
{
	ScopedTimer _RenderTimer(TEXT("GenerateTerrian"));
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			float xCoor = (float(origin.X) + (x + 0.5f) * blockSize) * WorldGenerator::COOR_STEP;
			float yCoor = (float(origin.Y) + (y + 0.5f) * blockSize) * WorldGenerator::COOR_STEP;
			WorldGenerator::Biomes biomes;
			int height = WorldGenerator::getRealHeightAndBiomes(xCoor, yCoor, biomes);
			for (int z = 0; z < depth; z++)
			{
				BlockEnumType type = WorldGenerator::getBlockType(x, y, height, biomes, z);
				Blocks[x][y][z] = type;
			}
		}
	}
}

void Chunk::RenderAllBlocks(BlockInstancesManager* manager)
{
	ScopedTimer _RenderTimer(TEXT("RenderAllBlocks"));
	std::vector<FTransform> transforms;
	std::vector<BlockEnumType> blocks;
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			for (int z = 0; z < depth; z++)
			{
				if (BlocksVisibleStatus[x][y][z])
				{
					FVector location(blockSize * x, blockSize * y, blockSize * (z));
					FTransform transform;
					transform.SetLocation(location + origin);
					transforms.push_back(transform);
					blocks.push_back(Blocks[x][y][z]);
					// BlocksInstanceIndex[x][y][z] = manager->AddBlockInstance(Blocks[x][y][z], transform);
				}
			}
		}
	}
	AsyncTask(
		ENamedThreads::GameThread,
		[transforms,manager,blocks]()
		{
			for (int i = 0; i < transforms.size(); i++)
			{
				manager->AddBlockInstance(blocks[i], transforms[i]);
			}
		}
	);
}

void Chunk::RemoveAllBlocks(BlockInstancesManager* manager)
{
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			for (int z = 0; z < depth; z++)
			{
				if (BlocksVisibleStatus[x][y][z])
				{
					manager->RemoveBlockInstance(Blocks[x][y][z], BlocksInstanceIndex[x][y][z]);
				}
			}
		}
	}
}

bool Chunk::CheckInRange(int x, int y, int z) const
{
	if (x < 0 || x >= size || y < 0 || y >= size || z < 0 || z >= depth)
	{
		return false;
	}
	return true;
}

void Chunk::CheckTerrainBlockVisibility()
{
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			for (int z = 0; z < depth; z++)
			{
				if (Blocks[x][y][z] == BlockEnumType::AIR)
				{
					continue;
				}
				if (x == 0 || x == size - 1 || y == 0 || y == size - 1 || z == 0 || z == depth - 1)
				{
					BlocksVisibleStatus[x][y][z] = true;
					continue;
				}
				if (CheckIsType(x - 1, y, z, BlockEnumType::AIR)
					|| CheckIsType(x + 1, y, z, BlockEnumType::AIR)
					|| CheckIsType(x, y - 1, z, BlockEnumType::AIR)
					|| CheckIsType(x, y + 1, z, BlockEnumType::AIR)
					|| CheckIsType(x, y, z - 1, BlockEnumType::AIR)
					|| CheckIsType(x, y, z + 1, BlockEnumType::AIR)
				)
				{
					BlocksVisibleStatus[x][y][z] = true;
				}
			}
		}
	}
}

bool Chunk::CheckIsType(int x, int y, int z, BlockEnumType type) const
{
	if (!CheckInRange(x, y, z))
	{
		return false;
	}
	return Blocks[x][y][z] == type;
}

Chunk::~Chunk()
{
	Blocks.clear();
	BlocksVisibleStatus.clear();
}
