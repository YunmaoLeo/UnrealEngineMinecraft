#include "Chunk.h"
#include "Minecraft/World/WorldConstants.h"

Chunk::Chunk(int x, int y)
{
	size = WorldConstants::CHUNK_ELEMENT_COUNT;
	depth = WorldConstants::CHUNK_DEPTH;
	blockSize = WorldConstants::UNIT_BLOCK_SIZE;
	chunkSize = size*blockSize;
	
	indexX = x;
	indexY = y;

	origin = FVector((indexX-0.5)*chunkSize, (indexY-0.5)*chunkSize, 0);
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
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			int height =1;
			for (int z = 0; z < depth; z++)
			{
				BlockEnumType type;
				if (z < height)
				{
					type = BlockEnumType::STONE;
				}
				else if (z == height)
				{
					type = BlockEnumType::GRASS;
				}
				else
				{
					type = BlockEnumType::AIR;
				}
				Blocks[x][y][z] = type;
			}
		}
	}
}

void Chunk::RenderAllBlocks(BlockInstancesManager* manager)
{
	for (int x=0; x<size; x++)
	{
		for (int y =0; y<size; y++)
		{
			for (int z=0; z<depth; z++)
			{
				if (BlocksVisibleStatus[x][y][z])
				{
					FVector location(blockSize*x,blockSize*y,blockSize*(z));
					FTransform transform;
					transform.SetLocation(location+origin);
					BlocksInstanceIndex[x][y][z] = manager->AddBlockInstance(Blocks[x][y][z], transform);
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
				if (Blocks[x][y][z]==BlockEnumType::AIR)
				{
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
