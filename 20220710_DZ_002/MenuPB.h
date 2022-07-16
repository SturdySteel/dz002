#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#define MENUPB

using namespace std;

#ifdef MENUPB

class MenuPB
{
private:
	static const int numMM{ 3 };
	static const int numMR{ 4 };
	int idRec;
	int cMenu;	
	string arrMenuMain[numMM]{
		"1. ���������� ������ ���������",
		"2. ����� ��������",
		"3. ���������� ������" };
	string arrMenuRec[numMR]{
		"1. ���������� �������",
		"2. ���������� ��������",
		"3. �������� ��������",
		"4. �������" };

private:

	void clearScreen(int pause);
	void showMessage(string mess, int pause);

public:
	
	MenuPB();
	~MenuPB();

private:

	void selMenuM();	
	int showMenu(string* arr, int m_count);	
};
#endif // MENUPB

