/******************************************
*Student name: Tal Pogorelis
*Student ID: 318225349
*Exercise #: 2
******************************************/

#include "OfflinePlayer.h"
#include <iostream>

/**
 * The constructor method.
 * @param color - the player's color
 */
OfflinePlayer::OfflinePlayer(int color): Player(color){
	// TODO Auto-generated constructor stub

}

/**
 * The function lets the player choose his next move.
 * @return - a Cell containing the X,Y values of the next move.
 */
Cell OfflinePlayer::chooseMove(){
	std::cout << "Please enter your move row,col: ";
	int x, y;
	std::cin >> x >> y;
	Cell chosenXY = Cell(x,y);
	return chosenXY;

}


