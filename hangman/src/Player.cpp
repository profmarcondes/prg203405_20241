/*
 * Player.cpp
 *
 *  Created on: Mar 23, 2020
 *      Author: hugom
 */

#include "Player.h"

Player::Player(){
	cout << "Welcome Player! What is your name ? ";
	getline(cin, _name);
	_wins = 0;
	_times = 0;
	_score = 0;
}

void Player::updateStats(bool result, int score) {
	_times++;
	if(result)
		_wins++;
	_score += score;
}

char Player::askLetter() {
	string input;
	cout << "Say a letter: ";
	getline(cin,input);
	return tolower(input[0]);
}

void Player::printStats() {
	cout << endl << "Stats for player " << _name << endl;
	cout << "Games played " << _times << endl;
	cout << "Wins " << _wins << endl;
	cout << "Win Percentage " << (double)_wins/_times << endl;
	cout << "Player Points " << _score << endl;
}
