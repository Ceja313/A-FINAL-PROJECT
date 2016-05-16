#include "Tic.h"
#include <iostream>
using namespace std;
Tic::Tic() {
	players[0] = Player('X');
	players[1] = Player('O');
}

void Tic::run() {
	int x, y;
	while (true) {
		for (int p = 0; p < 2; p++) {
			cout << "Player 1: " << players[0].getWins() << endl;
			cout << "Player 2: " << players[1].getWins() << endl;

			map.display();
			cout << "Player " << p + 1 << " pick a position" << endl;
			cin >> x >> y;

			map.setKey(players[p], x - 1, y - 1);
			if (map.hasWon(players[p])) {
				cout << "Player " << p + 1 << " wins!!!!" << endl;
				players[p].win();
				if (p == 0) {
					players[1].lose();
				}
				else {
					players[0].lose();
				}

				map.reset();
				break;
			}
		}
		if (map.draw()) {
			players[0].draw();
			players[1].draw();
			map.reset();
		}
	}
}