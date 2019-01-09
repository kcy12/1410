#include "Header.h"
#include <iostream>
using namespace std;

int main()
{
	int choice = 0;
	Menu a;//object a of menu
	a.MenuDisplay();//check Header.cpp
	cin >> choice;//gets user input
	a.Choice(choice);//check Header.cpp
	system("pause");
	return 0;
}