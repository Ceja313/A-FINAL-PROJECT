#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <vector>
#include <string>
#include <Windows.h>
#include "Schedule.h"
#include <fstream>

// Schedule 
// 3-29-16 Mr.Marchbanks
// Jeff Ceja Computer Programming

using namespace std;

ifstream in;
ofstream out;
vector<Schedules> schedules;
string name;
string QtyA;
string line;
string line2;
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
		cout << "* 4. Show the farthest schedule from now.   *" << endl;
		cout << "* 5. Show the closest schedule from now.    *" << endl;
		cout << "* 6. Look at a selected schedule.           *" << endl;
		cout << "* 7. View all the schedules.                *" << endl;
		cout << "* 8. Check the time and date.               *" << endl;
		cout << "* 9. Show another cool picture.             *" << endl;
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
			Schedules temp;
			// Schedule will consist of
			// Entering a Name
			cout << "Enter your name." << endl;
			getline(in, line);
			// Entering the Event
			getline(in, line2);
			// Entering the current time (Whether PM or AM)
			// Entering the time of the upcoming Event.
			continue;
		}
		if (answer == 6){
			//View a certain schedule
			continue;
		}
		if (answer == 7){
			//View all the schedules
			continue;
		}
		if (answer == 8){
			cout << __TIMESTAMP__ << endl;
			continue;
		}
		if (answer == 9){
			cout << "     ***************** " << endl;
			cout << "   ****************    " << endl;
			cout << "  **************       " << endl;
			continue;
		}
		if (answer != 1, 2, 3, 4, 5, 6, 7, 8, 9){
			cout << "Program has exited." << endl << endl;
			system("pause");
			return 0;
		}
	} while (true);
}