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
		cout << "Here are options available." << endl;
		cout << "***********************************" << endl;
		cout << "* 1. Show a cool picture.         *" << endl;
		cout << "* 2. Take a short break.          *" << endl;
		cout << "* 3. Make a Shedule.              *" << endl;
		cout << "* 4. Look at a selected schedule. *" << endl;
		cout << "* 5. View all the schedules.      *" << endl;
		cout << "* 6. Check the time.              *" << endl;
		cout << "* 7. Show another cool picture.   *" << endl;
		cout << "* 8. Exit.                        *" << endl;
		cout << "***********************************" << endl;
		cin >> answer;
		cout << endl;
	} while (answer != 7);
}