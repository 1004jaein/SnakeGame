all:
	g++ src/GameScene.cpp src/GameOverScene.cpp src/Snake.cpp src/Stage.cpp src/myFunction.cpp src/ItemManager.cpp src/MapManager.cpp src/WaitingScene.cpp src/Item.cpp src/main.cpp src/GameCoverScene.cpp -lncurses -o /tmp/a.out && /tmp/a.out
