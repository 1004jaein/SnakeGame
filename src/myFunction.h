#pragma once
#include "IScene.h"
#include <chrono>
#include <iostream>

#define DROP_ITEM_INTERVAL 3.0f

#define WIDTH 62
#define HEIGHT 32

using namespace std;

void Init();
void Update(float eTime);
void Render();
void Destroy();
float GetElapsedTime();
void ChangeScene(IScene *p, bool nowSceneErase = true);