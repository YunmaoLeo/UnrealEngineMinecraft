#include "World.h"

#include "AITestsCommon.h"
#include "WorldConstants.h"
#include "Minecraft/Chunk/Chunk.h"

using namespace WorldConstants;

World::World()
{
	InitWorld();
}

void World::InitWorld()
{
	int renderRange = WorldConstants::RENDER_RANGE;
	for (int x=-renderRange;x<=renderRange;x++)
	{
		for (int y = -renderRange; y<=renderRange; y++)
		{
			if (sqrt(pow(x,2)+pow(y,2))<=renderRange)
			{
				Chunk* chunk = new Chunk(x,y);
				Chunks.push_back(chunk);
			}
		}
	}
}

void World::RenderBlocks(BlockInstancesManager* manager)
{
	for (Chunk* eachChunk : Chunks)
	{
		eachChunk->RenderAllBlocks(manager);
	}
}

void World::Update()
{
	UpdateChunksNeedToRender();
}

bool World::UpdatePlayerPos(FVector& pos)
{
	const int posX = pos.X / (UNIT_BLOCK_SIZE * CHUNK_ELEMENT_COUNT);
	const int posY = pos.Y / (UNIT_BLOCK_SIZE * CHUNK_ELEMENT_COUNT);
	if (posX!=PlayerPosX || posY != PlayerPosY)
	{
		PlayerPosX = posX;
		PlayerPosY = posY;
		return true;
	}
	return false;
}

void World::UpdateChunksNeedToRender()
{
}
