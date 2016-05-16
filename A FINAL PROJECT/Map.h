#pragma once

#include "Player.h"

class Map {
private:
	char grid[3][3];
public:
	Map();
	void setKey(Player p, int x, int y);
	bool hasWon(Player p);
	bool draw();
	void reset();
	void display();
};