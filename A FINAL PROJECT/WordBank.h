#pragma once

#include <vector>
#include <string>

using namespace std;

class WordBank {
private:
	vector<string> bank;
	string lastWord;
public:
	WordBank();

	/// <summary>
	/// Returns a random word from the word bank
	/// </summary>
	string getWord();
};