#pragma once 
#include "Player.h"
#include "Map.h"

class Tic {
private:
	Player players[2];
	Map map;
public:
	Tic();
	void run();
};