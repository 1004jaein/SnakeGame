#include "Item.h"
#include "Position.h"
#include "myFunction.h"
#include "MapManager.h"

extern MapManager *mapManager;

Position Item::getRandPosition()
{
    Position temp;
    while (1)
    {
        int x = rand() % (WIDTH);
        int y = rand() % (HEIGHT);
        if (mapManager->data[y][x] == '0')
        {
            temp.x = x;
            temp.y = y;
            break;
        }
    }
    return temp;
}

Item::Item(std::string t, float eTime) : type(t), dropTime(eTime)
{
    Position temp = getRandPosition();
    position.x = temp.x;
    position.y = temp.y;
}

Item::~Item()
{
}

void Item::Update(float eTime)
{
}

void Item::Render()
{
}