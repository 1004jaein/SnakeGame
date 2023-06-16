#pragma once

class CharPosition
{
    int x; int y;
    CharPosition(int32 col=0, int32 row=0):x(col), y(row){}
    ~CharPosition(){}
}