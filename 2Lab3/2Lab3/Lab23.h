#ifndef LAB23_H
#define LAB23_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
public:
	string player;
	char input;

	Player(string p, char i) : player(p), input(i) {} // constructor
};

class TTT {
public:
	TTT(); // constructor
	void display();
	bool checkWin(char input);
	bool draw();
	void playGame(Player& p1, Player& p2);
	void resetBoard();
};
#endif