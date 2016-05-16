#pragma once

class Player {
public:
	Player(char v);
	Player() {}

	char getKey();
	int getWins();
	int getLosses();
	int getGames();

	void win();
	void lose();
	void draw();
private:
	char key;
	int wins;
	int losses;
	int games;
};