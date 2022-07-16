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
		"1. Отобразить список контактов",
		"2. Поиск контакта",
		"3. Завершение работы" };
	string arrMenuRec[numMR]{
		"1. Отобразить контакт",
		"2. Добавление контакта",
		"3. Удаление контакта",
		"4. Возврат" };

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

