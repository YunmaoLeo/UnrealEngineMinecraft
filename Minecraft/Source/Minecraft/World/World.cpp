#include "World.h"

#include "AITestsCommon.h"
#include "WorldConstants.h"
#include "Minecraft/Chunk/Chunk.h"

using namespace WorldConstants;

World::World(BlockInstancesManager* instanceManager)
{
	manager = instanceManager;
	InitWorld();
}

void World::InitWorld()
{
	int renderRange = WorldConstants::RENDER_RANGE;
	for (int x = -renderRange; x <= renderRange; x++)
	{
		for (int y = -renderRange; y <= renderRange; y++)
		{
			if (CheckIsInRenderRange(x,y))
			{
				Chunk* chunk = new Chunk(x, y);
				Chunks.Add({x,y}, chunk);
			}
		}
	}
}

void World::RenderBlocks()
{
	for (auto chunk : Chunks)
	{
		chunk.Value->RenderAllBlocks(manager);
	}
}

void World::Update()
{
}

bool World::UpdatePlayerPos(FVector& pos)
{
	const int posX = pos.X / (UNIT_BLOCK_SIZE * CHUNK_ELEMENT_COUNT);
	const int posY = pos.Y / (UNIT_BLOCK_SIZE * CHUNK_ELEMENT_COUNT);
	if (posX != PlayerPosX || posY != PlayerPosY)
	{
		// RemoveChunks(posX, posY);
		PlayerPosX = posX;
		PlayerPosY = posY;
		AddChunksNeedToRender(posX, posY);
		return true;
	}
	return false;
}

void World::RemoveChunks(int newPosX, int newPosY)
{
	for (auto item : Chunks)
	{
		int x =item.Key.X;
		int y = item.Key.Y;
		if (sqrt(pow(x-newPosX, 2) + pow(y-newPosY, 2)) > RENDER_RANGE)
		{
			item.Value->RemoveAllBlocks(manager);
			delete item.Value;
			Chunks.Remove({x, y});
		}
	}
}

void World::AddChunksNeedToRender(int newPosX, int newPosY)
{
	// add new render chunks.
	int range = WorldConstants::RENDER_RANGE;
	for (int x = -range; x <= range; x++)
	{
		for (int y = -range; y <= range; y++)
		{
			int newX = newPosX + x;
			int newY = newPosY + y;
			if (CheckIsInRenderRange(newX, newY))
			{
				if (!Chunks.Find({newX, newY}))
				{
					Chunk* chunk = new Chunk(newX, newY);
					Chunks.Add({newX, newY}, chunk);
					chunk->RenderAllBlocks(manager);
				}
			}
		}
	}
}

bool World::CheckIsInRenderRange(int x, int y)
{
	return sqrt(pow(x-PlayerPosX, 2) + pow(y-PlayerPosY, 2)) <= RENDER_RANGE;
}
