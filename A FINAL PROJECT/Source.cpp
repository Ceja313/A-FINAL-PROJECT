#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <vector>
#include <string>
#include <Windows.h>

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
		cout << "Here are available options. (Must be whole numbers)" << endl;
		cout << "*********************************************" << endl;
		cout << "* 1. Show a cool picture.                   *" << endl;
		cout << "* 2. Take a 5 second break.                 *" << endl;
		cout << "* 3. Make a Shedule.                        *" << endl;
		cout << "* 4. Look at a selected schedule.           *" << endl;
		cout << "* 5. View all the schedules.                *" << endl;
		cout << "* 6. Check the time and date.               *" << endl;
		cout << "* 7. Show another cool picture.             *" << endl;
		cout << "* Any other options will result in an Exit. *" << endl;
		cout << "*********************************************" << endl;
		cin >> answer;
		cout << endl;

		if (answer == 1){
			cout << "  * * * * * * * * * * * * *" << endl;
			cout << " * *********************** *" << endl;
			cout << " * *  *       *       *  * *" << endl;
			cout << " * *   *     * *     *   * *" << endl;
			cout << " * *    *   *   *   *    * *" << endl;
			cout << " * *     * *     * *     * *" << endl;
			cout << " * *      *       *      * *" << endl;
			cout << " * *********************** *" << endl;
			cout << "  * * * * * * * * * * * * *" << endl;
			continue;
		}
		if (answer == 2){
			Sleep(5000);
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
			//View a certain schedule
			continue;
		}
		if (answer == 5){
			//View all the schedules
			continue;
		}
		if (answer == 6){
			cout << __TIMESTAMP__ << endl;
			continue;
		}
		if (answer == 7){
			cout << "     ***************** " << endl;
			cout << "   ****************    " << endl;
			cout << "  **************       "
			continue;
		}
		if (answer != 1, 2, 3, 4, 5, 6, 7){
			cout << "Program Exit." << endl << endl;
			system("pause");
			return 0;
		}
	} while (true);
}