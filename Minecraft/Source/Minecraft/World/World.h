#pragma once
#include "Minecraft/Blocks/BlockInstancesManager.h"

class Chunk;

class World
{
public:
	World();
	World(BlockInstancesManager* manager);
	void InitWorld();
	void RenderBlocks();
	void Update();
	bool UpdatePlayerPos(FVector& pos);
	void RemoveChunks(int newPosX, int newPosY);

private:
	void AddChunksNeedToRender(int newPosX, int newPosY);
	bool CheckIsInRenderRange(int x, int y);
	TMap<FIntPoint, Chunk*> Chunks;
	BlockInstancesManager* manager;
	int PlayerPosX = 0;
	int PlayerPosY = 0;
};
