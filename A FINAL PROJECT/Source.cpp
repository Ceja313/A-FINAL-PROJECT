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
float QtyA;
string line;
string linee;
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
		cout << "* 10. Exit.                                 *" << endl;
		cout << "* Any other options will continue the loop. *" << endl;
		cout << "*********************************************" << endl;
		cin >> answer;
		cout << endl;

		if (answer == 1){
			//Show a Cool Picture.
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
			//Take a Short Break.
			Sleep(5000);
			continue;
		}
		if (answer == 3){
			//Make a schedule
			Schedules temp;
			// Schedule will consist of
			// Entering a Name
			cout << "Enter your name. Name must be one word." << endl;
			cin >> linee;
			// Entering the current time (Whether PM or AM)
			cout << "Enter the current time of course using a . in place of :" << endl;
			cin >> QtyA;
			// Entering the Event
			cin.ignore();
			cout << "Enter the event." << endl;
			getline(cin, line);
			// Entering the time of the upcoming Event.
			cout << "Enter the time of the upcoming event. Using . instead of :" << endl;
			cin >> SRP;
			temp.geteventDifference();
			temp.seteventDifference(temp.geteventDifference());
			temp.setName(linee);
			temp.setQtya(QtyA);
			temp.setEvent(line);
			temp.setUpComingEvent(SRP);
			schedules.push_back(temp);
			cin.ignore();

		}

		if (answer == 4){
			//Show the time differences and farthest schedule.
			for (int i = 0; i <!schedules.size(); i++){
				cout << "************************************" << endl;
				cout << "Event " << i + 1 << endl;
				cout << "Person's name.               :" << schedules[i].getName() << "*" << endl;
				cout << "Event Name.                  :" << schedules[i].getEvent() << "*" << endl;
				cout << "Current time.                :" << schedules[i].getQtya() << "*" << endl;
				cout << "Time of the upcoming event.  :" << schedules[i].getUpComingEvent() << "*" << endl;
				cout << "************************************" << endl;
				cout << endl;
				/*
				do {
					// Reset our flag to false, meaning no changes have been made
					flag = false;

					// Iterate through our array - 1, to avoid going out of bounds with inner code
					for (int i = 0; i < 9; i++) {

						// If our current index is larger than the next array index, swap them
						if (schedules[i].geteventDifference > block[i + 1]) {

							swap = block[i];
							block[i] = block[i + 1];
							block[i + 1] = swap;

							// We made a change, set our flag to true to make another loop around
							flag = true;
						}

					}
				} */
			}
			continue;
		}
		if (answer == 5){
			//Show the time differences and closest schedule.
			for (int i = 0; i <!schedules.size(); i++){
				cout << "************************************" << endl;
				cout << "Event " << i + 1 << endl;
				cout << "Person's name.               :" << schedules[i].getName() << "*" << endl;
				cout << "Event Name.                  :" << schedules[i].getEvent() << "*" << endl;
				cout << "Current time.                :" << schedules[i].getQtya() << "*" << endl;
				cout << "Time of the upcoming event.  :" << schedules[i].getUpComingEvent() << "*" << endl;
				cout << "************************************" << endl;
				cout << endl;
			}
			continue;
		}
		if (answer == 6){
			//View a certain schedule, if any exist.
			cout << "What Schedule would you like to see?" << endl;
			cout << "Must be a whole number." << endl;
			cout << "If the schedules number doesn't exist, the loop will continue." << endl;
			cin >> response;
			if (schedules.size()){
				for (int i = response; i <! response+1; i ++){
					cout << "*******************************" << endl;
					cout << "Event " << i + 1  << endl;
					cout << "Person's name.               :" << schedules[response].getName() << endl;
					cout << "Event Name.                  :" << schedules[response].getEvent() << endl;
					cout << "Current time.                :" << schedules[response].getQtya() << endl;
					cout << "Time of the upcoming event.  :" << schedules[response].getUpComingEvent() << endl;
					cout << "*******************************" << endl;
					cout << endl;
				}
			}
			else{
				cout << "There are no schedules yet." << endl;
			}
			continue;
		}
		if (answer == 7){
			//View all the schedules
			if (schedules.size()){
				cout << "starts at 0" << endl;
				for (int i = 0; i <! schedules.size(); i++){
					cout << "************************************" << endl;
					cout << "Event " << i +1 << endl;
					cout << "Person's name.               :" << schedules[i].getName() << "*" << endl;
					cout << "Event Name.                  :" << schedules[i].getEvent() << "*" << endl;
					cout << "Current time.                :" << schedules[i].getQtya() << "*" << endl;
					cout << "Time of the upcoming event.  :" << schedules[i].getUpComingEvent() << "*" << endl;
					cout << "************************************" << endl;
					cout << endl;
				}
			}
			else{
				cout << "There are no schedules yet." << endl;
			}
			
			continue;
		}
		if (answer == 8){
			//Show the Time.
			cout << __TIMESTAMP__ << endl;
			continue;
		}
		if (answer == 9){
			//Show cool pictures
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
		if (answer == 10){
			// Exit the Program.
			cout << "Program has Exited." << endl;
			cout << "I Hope you had fun!" << endl << endl;
			system("pause");
			return 0;
		}
	} while (true);
}