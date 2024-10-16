#include "GameBoard.h"
#include <iostream>

using namespace std;

GameBoard::GameBoard() {
	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 10; b++) {
			dots[a][b] = 0;
		}
	}
}

GameBoard::~GameBoard() {
	return;
}

int GameBoard::getShips() {
	return ships;
}

int GameBoard::getDot(int x, int y) {
	return dots[x][y];
}

void GameBoard::printBoard() {
	cout << "  0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |" << endl;
	for (int a = 0; a < 10; a++) {
		cout << a;
		for (int b = 0; b < 10; b++) {
			cout << " ";
			if (dots[a][b] == 0) {
				cout << " ";
			}
			else if (dots[a][b] == 1) {
				cout << "S";
			}
			else if (dots[a][b] == 2) {
				cout << "H";
			}
			else if (dots[a][b] == 3) {
				cout << "M";
			}
			cout << " |";
		}
		cout << endl << "----|---|---|---|---|---|---|---|---|---|" << endl;
	}
	cout << endl;
}

void GameBoard::putShip(int x, int y, bool horisontal, int shipLen) {
	if (horisontal == true) {
		for (int a = 0; a < shipLen; a++) {
			dots[x][y + a] = 1;
		}
	}
	else {
		for (int a = 0; a < shipLen; a++) {
			dots[x + a][y] = 1;
		}
	}
}