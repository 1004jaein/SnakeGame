# SnakeGame
##설치 방법
https://github.com/1004jaein/SnakeGame로 이동해 파일을 다운받는다.

터미널창을 열어 
'''
g++ src/GameScene.cpp src/GameOverScene.cpp src/Snake.cpp src/Stage.cpp src/myFunction.cpp src/ItemManager.cpp src/MapManager.cpp src/WaitingScene.cpp src/Item.cpp src/main.cpp src/GameCoverScene.cpp -lncurses -o /tmp/a.out && /tmp/a.out
'''
을 입력한다.

##<게임진행 방법>
1)	G(growth item)에 o(snake head)가 닿으면 growth item 1개가 반영되어 snake의 길이가 1 증가한다.
2)	P(poison item)에 o(snake head)가 닿으면 poison item 1개가 반영되어 snake의 길이가 1 감소한다.
3)	벽에 닿으면 game-over가 된다.
4)	@(Snake-body)가 2이하가 되면 game-over가 된다.
5)	Game over의 경우 y를 누르면 재시작 할 수 있다.

![image](https://github.com/1004jaein/SnakeGame/assets/105484114/ad0fe62f-16d4-4aea-b3f5-3127130c9393)
<stage 1>
 ![image](https://github.com/1004jaein/SnakeGame/assets/105484114/33168480-9dcb-4849-ae13-33eebda497d9)

<stage2>
![image](https://github.com/1004jaein/SnakeGame/assets/105484114/60a7edbb-d075-4674-959e-35c3c327d3fb)
  
<stage3>
![image](https://github.com/1004jaein/SnakeGame/assets/105484114/181d4927-35d0-4fd1-8f5b-72470f60cdf5)

 
