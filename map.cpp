#include <iostream>
using namespace std;
#include "map.h"
#include <vector>
#include <fstream>

extern Stage *stage;

map::map() // load txt file. named stageName. ex) 1.txt 2.txt 3.txt 4.txt
{
}

void map::Load()
{

    ifstream readFile;
    string src = "map/map" + to_string(stage->getNowStage() + 1) + ".txt";

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

    /* data가 올바르게 들어갔는지 확인하기 위한 검증 코드*/
    // std::string Path = "test.txt";

    // std::ofstream writeFile(Path);
    // if (writeFile.is_open())
    // {
    // for(int i=0;i<HEIGHT;i++){
    // for(int j = 0; j < WIDTH; j++){
    // writeFile <<data[i][j];
    // // cout<<data[i][j];
    // }
    // writeFile << "\n";
    // }

    // }
}

void *map::GetData()
{
    return data;
}

void map::PatchData(int y, int x, char patchData)
{
    data[y][x] = patchData;
}

map::~map()
{
}

void map::Render()
{
}

void map::Update(float eTime)
{
}
