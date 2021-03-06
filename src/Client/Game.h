
#ifndef GAME_H_
#define GAME_H_
#include <iostream>
#include "Game.h"
#include "ReversiBoard.h"
#include "Player.h"
#include "Client.h"

/**
 * The game class, this class contains the game logic.
 */
class Game {
private:

	ReversiBoard* gameBoard;
	Player* playerOne;
	Player* playerTwo;
	int gameMode;

	void initialize();
	bool chooseWinner(bool winCondition);
	void playOneTurn();

	Client* gameClient;

	void connectToServer();
public:
	Game(int gameMode, int BoardWidth = 8,int BoardLength = 8);
	virtual ~Game();

	void gameLoop();
	void chooseWinner();
	void start();
};

#endif /* GAME_H_ */
