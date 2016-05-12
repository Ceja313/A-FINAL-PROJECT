#include "Game.h"

#include <iostream>

void Game::run() {
	do {
		guess = 0;
		word = bank.getWord();
		display = word;

		char letter;

		for (int i = 0; i < display.length(); i++) {
			display[i] = '_';
		}

		do {
			for (int i = 0; i < display.length(); i++) {
				cout << display[i] << " ";
			}
			cout << endl;

			cout << "Guesses remaining: " << 6 - guess << endl;

			cout << "Make a guess: ";
			cin >> letter;

			bool found = false;
			for (int i = 0; i < display.length(); i++) {
				if (word[i] == letter) {
					found = true;
					display[i] = letter;
				}
			}

			if (!found) {
				cout << "Incorrect!" << endl;
				guess++;
			}

		} while (guess < 6 && display != word);

		if (display != word) {
			cout << "Game over" << endl;
			cout << "The word is " << word << endl;
		}
		else {
			cout << "You won!" << endl;
		}


		cout << "Continue [y/n]? ";
		cin >> letter;
		if (letter == 'y') {
			continue;
		}
		else {
			break;
		}

	} while (true);
}