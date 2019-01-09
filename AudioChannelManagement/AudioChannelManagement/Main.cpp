#include "pch.h"
#include "Header.h"
#include <stdio.h>
#include <windows.h>
#include <mmdeviceapi.h>
#include <endpointvolume.h>
#include <iostream>
using namespace std;

int main()
{
	cout << "AudioManagement Program" << endl;//declares program name for user
	Menu a;//object a of menu
	while (a.choice != -1)//goes until user picks -1
	{
		a.MenuDisplay();//ref Header.cpp
		//system("pause");
		cin >> a.choice;//ref Header.h
		a.Choice();//ref Header.cpp
	}
	cout << "Bye Bye!" << endl;
	system("pause");
	return 0;
}