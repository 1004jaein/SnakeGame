#pragma once
#include "IScene.h"
#include "WaitingScene.h"
#include "Stage.h"
#include "Snake.h"
#include "ItemManager.h"
#include <iostream>
#include <vector>
#include <ncurses.h>
#include <cstdlib>
#include <ctime>

#include "MapManager.h"

using int32 = int;

class GameScene : public IScene
{
public:
	int32 score;
	int32 maxwidth, maxheight;

	char edgechar;

	GameScene();
	~GameScene();

	ItemManager *itemManager;

	bool isChangeScene;

	void InitGameWindow();
	void Update(float eTime);
	void Render();
	void ProcessCollision();
};