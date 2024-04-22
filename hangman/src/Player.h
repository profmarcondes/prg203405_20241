/*
 * Player.h
 *
 *  Created on: Mar 23, 2020
 *      Author: hugom
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
using namespace std;

class Player {
public:
	Player();
	void updateStats(bool result, int score);
	char askLetter();
	void printStats();

private:
	string 	_name;
	int 	_score;
	int 	_wins;
	int 	_times;
};

#endif /* PLAYER_H_ */
