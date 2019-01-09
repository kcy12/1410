#ifndef USELESS_H
#define USELESS_H
#include <stdio.h>
#include <windows.h>
#include <mmdeviceapi.h>
#include <endpointvolume.h>
#include <iostream>
using namespace std;

/*class audioS
{
	public:
		audioS();
		void VolCurrS();
		void VolCurrDB();
		void VolUp();
		void VolDown();
		void VolMute();
		void VolSetS();
		void VolSetDB();
	private:
		HRESULT hr;
		bool decibels = true;
		bool scalar = true;
		double newVolume = 6;
		float VolChange;
		float CurrentVol = 0;

};*/ //This isn't needed for testing my Menu Class
class Menu
{
	public:
		Menu();
		void MenuDisplay();
		int Choice(int);
	private:

};
#endif 

