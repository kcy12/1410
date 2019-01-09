#include <stdio.h>
#include <windows.h>
#include <mmdeviceapi.h>
#include <endpointvolume.h>
#include <iostream>
#include "Header.h"
#include "pch.h"
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
	cout << "Select by entering # for option you would like";
}

int Menu::Choice()//handles user input
{
	audioS b;
	switch (choice)
	{
		case -1:
			break;
		case 1:
			b.VolUp();
			break;
		case 2:
			b.VolDown();
			break;
		case 3:
			b.VolMute();
			break;
		case 4:
			b.VolSetS();
			break;
		case 5:
			b.VolCurrS();
			break;
		case 6:
			b.VolUnmute();
			break;
		case 7:
			b.VolCurrDB();
			break;
		default: cout << choice << " What went wrong? A option was no chosen" << endl;
			break;
	}
	return choice;
}

audioS::audioS()
{
	/*CoInitialize(NULL);
	IMMDeviceEnumerator *deviceEnumerator = NULL;
	hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_INPROC_SERVER, __uuidof(IMMDeviceEnumerator), (LPVOID *)&deviceEnumerator);
	IMMDevice *defaultDevice = NULL;

	hr = deviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &defaultDevice);
	deviceEnumerator->Release();
	deviceEnumerator = NULL;

	IAudioEndpointVolume *endpointVolume = NULL;
	hr = defaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, NULL, (LPVOID *)&endpointVolume);
	defaultDevice->Release();
	defaultDevice = NULL;*/

	//I think I can just do all this once and just call it. not sure how yet for now this is done EVERYTIME I want to use functions from endpoint vol
}

void audioS::VolCurrS()
{
	CoInitialize(NULL);
	IMMDeviceEnumerator *deviceEnumerator = NULL; //refrence to struct
	hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_INPROC_SERVER, __uuidof(IMMDeviceEnumerator), (LPVOID *)&deviceEnumerator);
	IMMDevice *defaultDevice = NULL;

	hr = deviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &defaultDevice);
	deviceEnumerator->Release();
	deviceEnumerator = NULL;

	IAudioEndpointVolume *endpointVolume = NULL; //refrence to struct
	hr = defaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, NULL, (LPVOID *)&endpointVolume);
	defaultDevice->Release();
	defaultDevice = NULL;
	/*Read comment in audioS::audioS()*/

	endpointVolume->GetMasterVolumeLevelScalar(&CurrentVol);
	cout << "Current volume scalar is: " << CurrentVol << endl;
}

void audioS::VolCurrDB()
{
	CoInitialize(NULL);
	IMMDeviceEnumerator *deviceEnumerator = NULL; //refrence to struct
	hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_INPROC_SERVER, __uuidof(IMMDeviceEnumerator), (LPVOID *)&deviceEnumerator);
	IMMDevice *defaultDevice = NULL;

	hr = deviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &defaultDevice);
	deviceEnumerator->Release();
	deviceEnumerator = NULL;

	IAudioEndpointVolume *endpointVolume = NULL; //refrence to struct
	hr = defaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, NULL, (LPVOID *)&endpointVolume);
	defaultDevice->Release();
	defaultDevice = NULL;
	/*Read comment in audioS::audioS()*/

	endpointVolume->GetMasterVolumeLevel(&CurrentVol);
	cout << "Current volume in DB is: " << CurrentVol << endl;
}

void audioS::VolUp()//raises volume by .1 scalar point
{
	CoInitialize(NULL);
	IMMDeviceEnumerator *deviceEnumerator = NULL; //refrence to struct
	hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_INPROC_SERVER, __uuidof(IMMDeviceEnumerator), (LPVOID *)&deviceEnumerator);
	IMMDevice *defaultDevice = NULL;

	hr = deviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &defaultDevice);
	deviceEnumerator->Release();
	deviceEnumerator = NULL;

	IAudioEndpointVolume *endpointVolume = NULL; //refrence to struct
	hr = defaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, NULL, (LPVOID *)&endpointVolume);
	defaultDevice->Release();
	defaultDevice = NULL;
	/*Read comment in audioS::audioS()*/

	endpointVolume->GetMasterVolumeLevelScalar(&CurrentVol);
	CurrentVol += .1;
	endpointVolume->SetMasterVolumeLevelScalar(CurrentVol,/*IDK how to get the pguidEventContext var I need here
														  It has somehting to do with event notification*/);
	cout << "Volume is set to " << CurrentVol;
}

void audioS::VolDown()//lowers volume by .1 scalar point
{
	CoInitialize(NULL);
	IMMDeviceEnumerator *deviceEnumerator = NULL; //refrence to struct
	hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_INPROC_SERVER, __uuidof(IMMDeviceEnumerator), (LPVOID *)&deviceEnumerator);
	IMMDevice *defaultDevice = NULL;

	hr = deviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &defaultDevice);
	deviceEnumerator->Release();
	deviceEnumerator = NULL;

	IAudioEndpointVolume *endpointVolume = NULL; //refrence to struct
	hr = defaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, NULL, (LPVOID *)&endpointVolume);
	defaultDevice->Release();
	defaultDevice = NULL;
	/*Read comment in audioS::audioS()*/

	endpointVolume->GetMasterVolumeLevelScalar(&CurrentVol);
	CurrentVol -= .1;
	endpointVolume->SetMasterVolumeLevelScalar(CurrentVol, /*IDK how to get the pguidEventContext var I need here. 
														  It has somehting to do with event notification*/);
	cout << "Volume is set to " << CurrentVol;
}

void audioS::VolMute()//mutes endpoint device 
{
	CoInitialize(NULL);
	IMMDeviceEnumerator *deviceEnumerator = NULL; //refrence to struct
	hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_INPROC_SERVER, __uuidof(IMMDeviceEnumerator), (LPVOID *)&deviceEnumerator);
	IMMDevice *defaultDevice = NULL;

	hr = deviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &defaultDevice);
	deviceEnumerator->Release();
	deviceEnumerator = NULL;

	IAudioEndpointVolume *endpointVolume = NULL; //refrence to struct
	hr = defaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, NULL, (LPVOID *)&endpointVolume);
	defaultDevice->Release();
	defaultDevice = NULL;
	/*Read comment in audioS::audioS()*/
	bool bMute = TRUE;
	endpointVolume->SetMute(bMute, /*IDK how to get the pguidEventContext var I need here 
								   It has somehting to do with event notification*/);
	cout << "Audio is muted";
}

void audioS::VolUnmute()
{
	CoInitialize(NULL);
	IMMDeviceEnumerator *deviceEnumerator = NULL; //refrence to struct
	hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_INPROC_SERVER, __uuidof(IMMDeviceEnumerator), (LPVOID *)&deviceEnumerator);
	IMMDevice *defaultDevice = NULL;

	hr = deviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &defaultDevice);
	deviceEnumerator->Release();
	deviceEnumerator = NULL;

	IAudioEndpointVolume *endpointVolume = NULL; //refrence to struct
	hr = defaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, NULL, (LPVOID *)&endpointVolume);
	defaultDevice->Release();
	defaultDevice = NULL;
	/*Read comment in audioS::audioS()*/
	bool bMute = FALSE;
	endpointVolume->SetMute(bMute, /*IDK how to get the pguidEventContext var I need here 
								   It has somehting to do with event notification*/);
	cout << "Audio is unmuted";
}

void audioS::VolSetS()//sets volume to scalar value as chosen by user
{
	CoInitialize(NULL);
	IMMDeviceEnumerator *deviceEnumerator = NULL; //refrence to struct
	hr = CoCreateInstance(__uuidof(MMDeviceEnumerator), NULL, CLSCTX_INPROC_SERVER, __uuidof(IMMDeviceEnumerator), (LPVOID *)&deviceEnumerator);
	IMMDevice *defaultDevice = NULL;

	hr = deviceEnumerator->GetDefaultAudioEndpoint(eRender, eConsole, &defaultDevice);
	deviceEnumerator->Release();
	deviceEnumerator = NULL;

	IAudioEndpointVolume *endpointVolume = NULL; //refrence to struct
	hr = defaultDevice->Activate(__uuidof(IAudioEndpointVolume), CLSCTX_INPROC_SERVER, NULL, (LPVOID *)&endpointVolume);
	defaultDevice->Release();
	defaultDevice = NULL;
	/*Read comment in audioS::audioS()*/
	cout << "What would you like to set the volume to? (Scalar betwenn 0.0 and 1.0";
	cin >> VolChange;
	endpointVolume->SetMasterVolumeLevelScalar(VolChange, /*IDK how to get the pguidEventContext var I need here
														  It has somehting to do with event notification*/);
	cout << "The volume is set to " << VolChange;
}