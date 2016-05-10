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

int Modulus(int iN, int iMod) {
	int iQ = (iN / iMod);
	return iN - (iQ*iMod);
}

char GetChar(int iGenerator, char cBase, int iRange) {
	return (cBase + Modulus(iGenerator, iRange));
}

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
float high;
float low;

int main(){
	// Introduction
	cout << "Hi! This is a handy dandy schedule program." << endl;
	cout << "Jeffery Ceja 1st Hour Marchbanks." << endl;
	cout << "Try it out." << endl;
	//Staring A Menu
	do{
		cout << endl;
		cout << "Here are available options. (Must be whole numbers)" << endl;
		cout << "**********************************************" << endl;
		cout << "* 1. Show a cool picture.                    *" << endl;
		cout << "* 2. Take a 5 second break.                  *" << endl;
		cout << "* 3. Make a Shedule.                         *" << endl;
		cout << "* 4. Show Highest event difference.          *" << endl;
		cout << "* 5. Show Lowest event difference.           *" << endl;
		cout << "* 6. Look at a selected schedule.            *" << endl;
		cout << "* 7. View all the schedules.                 *" << endl;
		cout << "* 8. Check the timestamp.                    *" << endl;
		cout << "* 9. Show 2 Pictures.                        *" << endl;
		cout << "* 10. Exit.                                  *" << endl;
		cout << "* Any other options will continue the loop.  *" << endl;
		cout << "**********************************************" << endl;
		cin >> answer;
		cout << endl;

		if (answer == 0){
			while (true){
				/*
				Practice matrix
				cout << (char)(rand() % 256) << " ";
				//wcout<< "B 1 1 0 1 0 0 1 1 1 0 A 1 1 0 1 0 0 1 1 1 C 0 1 1 0 1 0 0 1 1 1 0 0 1 1 J 1 0 0";
					//wcout<< "1 1 1 0 2 D 1 1 0 1 0 0 1 1 1 K ";
				Sleep(15);*/
				// Color code (Nicer matrix)
				HANDLE  hConsole;
				hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, 2);

				char caRow[80];
				int j = 7;
				int k = 2;
				int l = 5;
				int m = 1;
				while (true) {
					// Output a random row of characters
					for (int i = 0; i < 80; ++i)
					{
						if (caRow[i] != ' ') {
							caRow[i] = GetChar(j + i*i, 33, 30);
							if (((i*i + k) % 71) == 0) {
								SetConsoleTextAttribute(hConsole, 7);
							}
							else {
								SetConsoleTextAttribute(hConsole, 2);
							}
						}
						std::cout << caRow[i];
						SetConsoleTextAttribute(hConsole, 2);
					}
					j = (j + 31);
					k = (k + 17);
					l = (l + 47);
					m = (m + 67);
					caRow[Modulus(j, 80)] = '-';
					caRow[Modulus(k, 80)] = ' ';
					caRow[Modulus(l, 80)] = '-';
					caRow[Modulus(m, 80)] = ' ';
					// Delay
					Sleep(10);
				} //end while
			}
		}


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
			bool flag = false;
			if (schedules.size() ==0){
				cout << "There are no schedules." << endl;
					}
			if (schedules.size() == 1){
				cout << "There is only one event difference." << endl;
					cout << schedules[0].geteventDifference() << " is the time difference of the 1 Event." << endl;
						high = schedules[0].geteventDifference();
							}
			if (schedules.size() >=2){
				for (int i = 0; i <schedules.size(); i++){
					if (schedules[i].geteventDifference() > high){
						high = schedules[i].geteventDifference();
							}
								}
									cout << "These are the event differences." << endl;
										for (int i = 0; i <schedules.size(); i++){
											cout << schedules[i].geteventDifference() << endl;
												}
													}
														cout << "Highest Event Difference is : " << high << endl;
															continue;
																}


		if (answer == 5){
			//Show the time differences and closest schedule.
			bool flag = false;
			if (schedules.size() == 0){
				cout << "There are no schedules." << endl;
					}
			if (schedules.size() == 1){
				cout << "There is only one event difference." << endl;
					cout << schedules[0].geteventDifference() << " is the time difference of the 1 Event." << endl;
						low = schedules[0].geteventDifference();
							}
			if (schedules.size() >= 2){
				low = 100;
				for (int i = 0; i < schedules.size(); i++){
					if (schedules[i].geteventDifference() < low){
						low = schedules[i].geteventDifference();
							}
								}
									cout << "These are the event differences." << endl;
										for (int i = 0; i < schedules.size(); i++){
											cout << schedules[i].geteventDifference() << endl;
												}
													}
														cout << "Lowest Event Difference is : " << low << endl;
															continue;
																}
		

		if (answer == 6){
			//View a certain schedule, if any exist.
			cout << "What Schedule would you like to see?" << endl;
			cout << "If the schedules number doesn't exist, the loop will continue." << endl;
			cout << "Here are the names of the people who entered the events, if there are any." << endl;

			for (int i = 0; i < schedules.size(); i++){
				cout << "************************************" << endl;
				cout << "Event " << i + 1 << " : " << schedules[i].getName() << endl;
				cout << "************************************" << endl;
					}

			cin >> response;
			if (schedules.size()){
				for (int i = response; i <= response; i ++){
					cout << "***************************************************" << endl;
					cout << "Event " << i  << endl;
					cout << "Person's name.                               : " << schedules[response-1].getName() << endl;
					cout << "Event Name.                                  : " << schedules[response-1].getEvent() << endl;
					cout << "Enter time.                                  : " << schedules[response-1].getQtya() << endl;
					cout << "Time of the upcoming event.                  : " << schedules[response - 1].getUpComingEvent() << endl;
					cout << "Time between entered time and upcoming event : " << schedules[response - 1].geteventDifference() << endl;
					cout << "***************************************************" << endl;
					cout << endl;
						}
							}
								else{
										cout << "That schedule has either not been made or there are no schedules." << endl;
											}
												continue;
													}


		if (answer == 7){
			//View all the schedules
			if (schedules.size()){
				for (int i = 0; i < schedules.size(); i++){
					cout << "************************************" << endl;
					cout << "Event " << i +1 << endl;
					cout << "Person's name.               : " << schedules[i].getName() <<  endl;
					cout << "Event Name.                  : " << schedules[i].getEvent() <<  endl;
					cout << "Time Entered.                : " << schedules[i].getQtya() <<  endl;
					cout << "Time of the upcoming event.  : " << schedules[i].getUpComingEvent() << endl;
					cout << "Difference of the Event      : " << schedules[i].geteventDifference() << endl;
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