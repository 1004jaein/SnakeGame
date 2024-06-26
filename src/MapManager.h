#pragma once
#include "IObject.h"
#include "Position.h"
#include "myFunction.h"
#include "Snake.h"
#include "IScene.h"
#include <vector>
#include <ncurses.h>
#include <cstdlib>
#include <string>
#include <ctime>

class MapManager : public IObject
{
public:
    char data[HEIGHT][WIDTH];

    float lastDropTime = 0;

    MapManager();
    ~MapManager();

    void Render();
    void Update(float eTime);

    void *GetData();

    void PatchData(int y, int x, char patchData);

    void Print();
    void Load();
};