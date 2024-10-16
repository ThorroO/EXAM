#pragma once
class GameBoard
{
	int ships = 0;
	int dots[10][10];
	
public:
	GameBoard();
	int getDot(int x, int y);
	int getShips();
	void printBoard();
	~GameBoard();
	void shoot(int x, int y);
	void putShip(int x, int y, bool horisontal, int shipLen);
};

