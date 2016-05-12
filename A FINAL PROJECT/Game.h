#pragma once

#include <string>
#include "WordBank.h"

using namespace std;

class Game {
private:
	string word, display;
	int guess;
	WordBank bank;
public:
	void run();
};