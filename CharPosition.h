#pragma once

class CharPosition
{
    int x; int y;
    CharPosition(int col=0, int row=0):x(col), y(row){}
    ~CharPosition(){}
}