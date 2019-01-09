#include <iostream>
#include "Header.h"
using namespace std;
Menu::Menu()
{
}

void Menu::MenuDisplay()//Prints the interactable menu
{
	cout << "option -1: ";
	cout << "exits the program" << endl;
	cout << "option 1: ";
	cout << "Volume up 1 scalar point" << endl;
	cout << "option 2: ";
	cout << "Volume down 1 scalar point" << endl;
	cout << "option 3: ";
	cout << "Volume set scalar" << endl;
	cout << "option 4: ";
	cout << "Volume set DB" << endl;
	cout << "option 5: ";
	cout << "Mute volume" << endl;
	cout << "Select by entering # for option you would like" << endl;
}

int Menu::Choice(int z)//handles user input
{
	switch (z)
	{
		case -1:
			break;
		case 1:
			cout << "testing options 1" << endl;//these are placeholders bc this is just to test the class
			break;
		case 2:
			cout << "testing options 2" << endl;//check above
			break;
		case 3:
			cout << "testing options 3" << endl;
			break;
		case 4:
			cout << "testing options 4" << endl;
			break;
		case 5:
			cout << "testing options 5" << endl;
			break;
		default: cout << z << " What went wrong? A option was not chosen" << endl;
			break;
	}
	return z;
}

