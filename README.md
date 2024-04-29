# SnakeGame
ncurses 모듈을 활용한 C++ 기반 Snake Game

## 설치 방법
https://github.com/1004jaein/SnakeGame로 이동해 파일을 다운받는다.

터미널창을 열어 
'''
g++ src/GameScene.cpp src/GameOverScene.cpp src/Snake.cpp src/Stage.cpp src/myFunction.cpp src/ItemManager.cpp src/MapManager.cpp src/WaitingScene.cpp src/Item.cpp src/main.cpp src/GameCoverScene.cpp -lncurses -o /tmp/a.out && /tmp/a.out
'''
을 입력한다.

## <게임진행 방법>
1)   G(growth item)에 o(snake head)가 닿으면 growth item 1개가 반영되어 snake의 길이가 1 증가한다.
2)   P(poison item)에 o(snake head)가 닿으면 poison item 1개가 반영되어 snake의 길이가 1 감소한다.
3)   벽에 닿으면 game-over가 된다.
4)   @(Snake-body)가 2이하가 되면 game-over가 된다.
5)   Game over의 경우 y를 누르면 재시작 할 수 있다.

<stage 1>
![image](https://github.com/1004jaein/SnakeGame/assets/105484114/3c307c8a-30f1-4341-b9b8-0ec9e79ae5ad)

<stage 2>
![image](https://github.com/1004jaein/SnakeGame/assets/105484114/918893ee-f860-4d42-908e-e05014ab67a9)

<stage 3>
 ![image](https://github.com/1004jaein/SnakeGame/assets/105484114/4b330a1c-58dc-4dd0-8cc9-767e84f38f41)
