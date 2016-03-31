#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <vector>
#include <string>

// Schedule 
// 3-29-16 Mr.Marchbanks
// Jeff Ceja Computer Programming

using namespace std;

float answer;

int main(){
	// Introduction
	cout << "Hi! This is a handy dandy schedule program." << endl;
	cout << "Jeffery Ceja 1st Hour Marchbanks." << endl;
	cout << "Try it out." << endl;
	//Staring A Menu
	do{
		cout << endl;
		cout << "Here are available options." << endl;
		cout << "*********************************************" << endl;
		cout << "* 1. Show a cool picture.                   *" << endl;
		cout << "* 2. Take a short break.                    *" << endl;
		cout << "* 3. Make a Shedule.                        *" << endl;
		cout << "* 4. Look at a selected schedule.           *" << endl;
		cout << "* 5. View all the schedules.                *" << endl;
		cout << "* 6. Check the time.                        *" << endl;
		cout << "* 7. Show another cool picture.             *" << endl;
		cout << "* Any other options will result in an Exit. *" << endl;
		cout << "*********************************************" << endl;
		cin >> answer;
		cout << endl;

		if (answer == 1){
			cout << "  * * * * * * * * * * * * * " << endl;
			cout << " * *********************** *   " << endl;
			cout << " * *  *       *       *  * *" << endl;
			cout << " * *   *     * *     *   * *" << endl;
			cout << " * *    *   *   *   *    * *" << endl;
			cout << " * *     * *     * *     * *" << endl;
			cout << " * *      *       *      * *" << endl;
			cout << " * *********************** *  " << endl;
			cout << "  * * * * * * * * * * * * * " << endl;
			continue;
		}
		if (answer == 2){
			cout << "B" << endl;
			continue;
		}
		if (answer == 3){
			// Schedule will consist of
			// Entering a Name
			// Entering the Event
			// Entering the current time (Whether PM or AM)
			// Entering the time of the upcoming Event.
			continue;
		}
		if (answer == 4){
			cout << "B" << endl;
			continue;
		}
		if (answer == 5){
			cout << "A" << endl;
			continue;
		}
		if (answer == 6){
			cout << "B" << endl;
			continue;
		}
		if (answer == 7){
			cout << "A" << endl;
			continue;
		}
		if (answer != 1, 2, 3, 4, 5, 6, 7){
			cout << "Program Exit." << endl << endl;
			system("pause");
			return 0;
		}
	} while (true);
}