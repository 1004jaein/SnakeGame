
#pragma once
#include "IObject.h"
#include "CharPosition.h"
#include "myFunction.h"
#include "Snake.h"
#include "IScene.h"
#include <vector>
#include <ncurses.h>
#include <cstdlib>
#include <string>
#include <ctime>


class map : public IObject
{
public:
    char data[HEIGHT][WIDTH];

    float lastDropTime = 0;

    map();
    ~map();

    void Render();
    void Update(float eTime);

    void *GetData();

    void PatchData(int y, int x, char patchData);

    void Print();
    void Load();
};