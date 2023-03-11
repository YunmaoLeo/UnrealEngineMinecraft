#pragma once
#include "Minecraft/Blocks/BlockInstancesManager.h"

class Chunk;

class World
{
public:
	World();
	void InitWorld();
	void RenderBlocks(BlockInstancesManager* manager);
	void Update();
	bool UpdatePlayerPos(FVector& pos);
private:
	void UpdateChunksNeedToRender();
	std::vector<Chunk*> Chunks;
	int PlayerPosX = 0;
	int PlayerPosY = 0;
};
