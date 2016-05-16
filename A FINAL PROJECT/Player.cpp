#include "Player.h"

Player::Player(char v) {
	key = v;
	wins = 0;
	losses = 0;
	games = 0;
}

char Player::getKey() {
	return key;
}

int Player::getWins() {
	return wins;
}

int Player::getLosses() {
	return losses;
}

int Player::getGames() {
	return games;
}

void Player::win() {
	wins++;
	games++;
}

void Player::lose() {
	losses++;
	games++;
}

void Player::draw() {
	games++;
}