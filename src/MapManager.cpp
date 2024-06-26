#include "MapManager.h"
#include "myFunction.h"
#include <vector>
#include <fstream>

extern Stage *stage;

MapManager::MapManager()
{
}

void MapManager::Load()
{

    std::ifstream readFile;
    string src = "map/map" + std::to_string(stage->getNowStage() + 1) + ".txt";

    readFile.open(src);
    int height = 0;

    while (!readFile.eof())
    {
        char temp[120];
        readFile.getline(temp, 120);

        for (int i = 0; i < WIDTH; i++)
        {
            data[height][i] = temp[i];
        }

        height++;
    }
}

void *MapManager::GetData()
{
    return data;
}

void MapManager::PatchData(int y, int x, char patchData)
{
    data[y][x] = patchData;
}

MapManager::~MapManager()
{
}

void MapManager::Render()
{
}

void MapManager::Update(float eTime)
{
}
