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
float SRP;
string QtyA;
string line;
string line2;
string line3;
float answer;
int response;
float now;

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
		cout << "* 9. Show 2 Pictures.                       *" << endl;
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
			getline(cin, line);
			cin.ignore();
			// Entering the current time (Whether PM or AM)
			cout << "Enter the current time of course using a . in place of :" << endl;
			cin >> QtyA;
			cin.ignore();
			// Entering the Event
			cout << "Enter the event." << endl;
			getline(cin, line2);
			cin.ignore();
			// Entering the time of the upcoming Event.
			cout << "Enter the time of the upcoming event. Using . instead of :" << endl;
			cin >> SRP;
			cin.ignore();
			temp.setName(line);
			temp.setQtya(QtyA);
			temp.setEvent(line2);
			temp.setUpComingEvent(SRP);
			schedules.push_back(temp);
			cin.ignore();
			continue;

		}
		if (answer == 6){
			//View a certain schedule, if any exist.
			cout << "What Schedule would you like to see?" << endl;
			cin >> response;

			continue;
		}
		if (answer == 7){
			//View all the schedules
			for (int i = 0; i < schedules.size(); i++){
				cout << "*******************************" << endl;
				cout << "Event " << i + 1 << endl;
				cout << "Person's name.               :" << schedules[i].getName() << endl;
				cout << "Event Name.                  :" << schedules[i].getEvent() << endl;
				cout << "Current time.                :" << schedules[i].getQtya() << endl;
				cout << "Time of the upcoming event.  :" << schedules[i].getUpComingEvent() << endl;
				cout << "*******************************" << endl;
				cout << endl;
			}
			
			continue;
		}
		if (answer == 8){
			cout << __TIMESTAMP__ << endl;
			continue;
		}
		if (answer == 9){
			cout << "________________00" << endl;
			cout << "_______________0000" << endl;
			cout << "___0__________000000___________0" << endl;
			cout << "___00_________000000___________0" << endl;
			cout << "____0000______000000__________00" << endl;
			cout << "____000000____0000000_____00000" << endl;
			cout << "_0_____0000000_000000_00000000___0" << endl;
			cout << "00______000000_00000_0000000____00" << endl;
			cout << "0000_____000000_000_000000____0000" << endl;
			cout << "_000000000__0000_0_000_0_000000000" << endl;
			cout << "____000000000__0_0_0_00000000000" << endl;
			cout << "________000000000000000000000" << endl;
			cout << "______________000_0_0000" << endl;
			cout << "____________00000_0__00000" << endl;
			cout << "__________00_______0_______00" << endl;
			cout << "____________________0" << endl;
			cout << endl << "It is just a leaf. " << endl << endl;

			cout << "_________________88" << endl;
			cout << "________________8888" << endl;
			cout << "________________8888" << endl;
			cout << "_______________888888" << endl;
			cout << "______________88888888" << endl;
			cout << "_____________8888888888" << endl;
			cout << "____________8888888888888" << endl;
			cout << "_________888888888888888888" << endl;
			cout << "_______8888888888888888888888" << endl;
			cout << "_____________8888888888" << endl;
			cout << "___________88888888888888" << endl;
			cout << "_________888888888888888888" << endl;
			cout << "_______8888888888888888888888" << endl;
			cout << "____8888888888888888888888888888" << endl;
			cout << "___________888888888888888" << endl;
			cout << "__________88888888888888888" << endl;
			cout << "________888888888888888888888" << endl;
			cout << "_____888888888888888888888888888" << endl;
			cout << "__888888888888888888888888888888888" << endl;
			cout << "__________888888888888888888" << endl;
			cout << "_________88888888888888888888" << endl;
			cout << "_______888888888888888888888888" << endl;
			cout << "_____8888888888888888888888888888" << endl;
			cout << "__8888888888888888888888888888888888" << endl;
			cout << "88888888888888__8888888__8888888888888" << endl;
			cout << "_________________88888" << endl;
			cout << "_________________88888" << endl;
			continue;
		}
		if (answer != 1, 2, 3, 4, 5, 6, 7, 8, 9){
			cout << "Program has exited." << endl << endl;
			system("pause");
			return 0;
		}
	} while (true);
}