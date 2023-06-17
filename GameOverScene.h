#pragma once
#include "IScene.h"
#include "Stage.h"
#include <ncurses.h>
#include <cstdlib>
#include <ctime>

class GameOverScene : public IScene
{
public:
    int maxwidth, maxheight;

    GameOverScene();
    ~GameOverScene();

    void Update(float eTime);
    void Render();

    void ClearCentre(float x, float y);

    int UserInput();

    int AskUserToPlayAgain();

    void Load();
};