/*
 * main.cpp
 *
 *  Created on: Mar 23, 2020
 *      Author: hugom
 */

#include "Hangman.h"
#include <iostream>
using namespace std;

int main() {
	Hangman game;

	char op = 'y';
	while(tolower(op) == 'y') {
	   game.play();
	   game.printStats();
	   cout << endl << "Would you like to play again ? (y/n) ";
       op = cin.get();
       cin.ignore();
	}

	return 0;
}

