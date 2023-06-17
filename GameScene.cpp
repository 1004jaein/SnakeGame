#include "GameScene.h"
#include "WaitingScene.h"
#include "Snake.h"
#include "ItemManager.h"
#include "myFunction.h"
#include "IObject.h"
#include "MapManager.h"
#include "Position.h"

#include <unistd.h>
#include <vector>
#include <ncurses.h>
using namespace std;
extern Stage *stage;
using int32 = int;

MapManager *mapManager;
Snake *snake;

GameScene::GameScene()
{
  srand(time(NULL));

  mapManager = new MapManager();
  mapManager->Load();

  snake = new Snake();
  itemManager = new ItemManager();
  
  InitGameWindow();
  refresh();
}

GameScene::~GameScene()
{
  nodelay(stdscr, false);
  endwin();
}

void GameScene::InitGameWindow()
{
  initscr();
  nodelay(stdscr, TRUE);
  keypad(stdscr, true);                 
  noecho();
  curs_set(0);
  getmaxyx(stdscr, maxheight, maxwidth);
  return;
}

void GameScene::ProcessCollision()
{
  int y = snake->GetHead().y;
  int x = snake->GetHead().x;

  char temp = mapManager->data[y][x];


  if (temp == '1' || temp == '7' || snake->entire.size() <= 4)
  {
    snake->isDied = true;
  }
  else if (temp == '5')
  {
    itemManager->DeleteCollisionData(y, x);
    snake->Grow();
  }
  else if (temp == '6')
  {
    itemManager->DeleteCollisionData(y, x);
    snake->Shrink();
  }
}

void GameScene::Update(float eTime)
{

  snake->Update(eTime);
  if (snake->IsCollision())
  {
    ProcessCollision();
  }
  if (snake->isDied)
  {
    ChangeScene(new GameOverScene());
  }
  snake->PushData();
  itemManager->Update(eTime);
  usleep(150000);
}

void GameScene::Render()
{
  for (int i = 0; i < HEIGHT; i++)
  {
    for (int j = 0; j < WIDTH; j++)
    {
      switch (mapManager->data[i][j])
      {
      case '0':
        mvaddch(i, j, ' ');
        break;
      case '1':
        mvaddch(i, j, '-');
        break;
      case '7':
        mvaddch(i, j, '|');
        break;
      case '2':
        mvaddch(i, j, 'X');
        break;
      case '3':
        mvaddch(i, j, 'O');
        break;
      case '4':
        mvaddch(i, j, '@');
        break;
      case '5':
        mvaddch(i, j, 'G');
        break;
      case '6':
        mvaddch(i, j, 'P');
        break;
      }
    }
  }

  refresh();
}