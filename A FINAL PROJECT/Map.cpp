#include "Map.h"

#include <iostream>
using namespace std;

Map::Map() {
	reset();
}

void Map::reset() {
	for (int i = 0; i < 3; i++) {
		for (int g = 0; g < 3; g++) {
			grid[i][g] = '_';
		}
	}
}

void Map::setKey(Player p, int x, int y) {
	grid[x][y] = p.getKey();
}

bool Map::hasWon(Player p) {
	// Have they won on the x axis?
	for (int x = 0; x < 3; x++) {
		if (grid[x][0] == p.getKey() &&
			grid[x][1] == p.getKey() &&
			grid[x][2] == p.getKey())
			return true;
	}


	// Have they won on the y axis?
	for (int y = 0; y < 3; y++) {
		if (grid[0][y] == p.getKey() &&
			grid[1][y] == p.getKey() &&
			grid[2][y] == p.getKey())
			return true;
	}


	// Have they won diaganol tl to br
	if (grid[0][0] == p.getKey() &&
		grid[1][1] == p.getKey() &&
		grid[2][2] == p.getKey())
		return true;

	// Have they won diaganol tr to bl
	if (grid[2][0] == p.getKey() &&
		grid[1][1] == p.getKey() &&
		grid[0][2] == p.getKey())
		return true;

	// They havent won
	return false;
}

bool Map::draw() {
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			if (grid[x][y] != '_') {
				return false;
			}
		}
	}

	return true;
}

void Map::display() {
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			cout << grid[x][y] << " ";
		}
		cout << endl;
	}
}