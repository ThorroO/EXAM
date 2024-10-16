#include <iostream>
#include "GameBoard.h"

using namespace std;

int main() {
	GameBoard board;
	while (true) {
		int x, y, shipLen;
		bool horisontal;
		board.printBoard();
		cout << "Put ship(x, y, (1 if horisontal, 0 if vertical), shipLen";
		cin >> x >> y >> horisontal >> shipLen;
		board.putShip(x, y, horisontal, shipLen);
	}
}