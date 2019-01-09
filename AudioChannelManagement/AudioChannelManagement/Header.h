#ifndef USELESS_H
#define USELESS_H
#include <stdio.h>
#include <windows.h>
#include <mmdeviceapi.h>
#include <endpointvolume.h>
#include <iostream>
#include "pch.h"
using namespace std;

class audioS//class
{
	public:
		audioS();
		void VolCurrS();
		void VolCurrDB();
		void VolUp();
		void VolDown();
		void VolMute();
		void VolUnmute();
		void VolSetS();
	private:
		HRESULT hr;
		float VolChange;
		float CurrentVol = 0;
};
class Menu//class
{
	public:
		Menu();
		void MenuDisplay();
		int Choice();
		int choice = 0;//I know this is in the public section.
	private:

};
#endif 