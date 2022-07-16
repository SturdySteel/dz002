#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include "PhoneBook.h"

using namespace std;

class MenuPB
{
private:
	static const int numMM{ 4 };
	static const int numMR{ 7 };
	static const int numMF{ 3 };
	int idRec;
	int cMenu;	
	string arrMenuMain[numMM];
	string arrMenuRec[numMR];
	string arrMenuFile[numMF];
	PhoneBook* dB;

public:

	MenuPB(PhoneBook* dB);
	~MenuPB();

private:

	void clearScreen(int pause);
	void showMessage(string mess, int pause);
	void pressAnyKey();
	void selMenuM();
	void selMenuR();
	void selMenuF();
	int showMenu(string* arr, int m_count);
	void showRecord(PhoneBook* dBi);

};