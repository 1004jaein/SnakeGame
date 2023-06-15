#include <iostream>
using namespace std;
#include "map.h"
#include <vector>
#include <fstream>

extern Stage *stage;

map::map() 
{
}

void map::Load()
{
    data[22][22]={0};
    for(int i=0;i<22;i++){
        data[0][i]=1;
        data[i][0]=1;
        data[21][i]=1;
        data[i][21]=1;
    }
    data[0][0]=2;
    data[0][21]=2;
    data[21][0]=2;
    data[21][21]=2;
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
