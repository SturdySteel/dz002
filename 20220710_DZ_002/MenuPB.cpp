#include "MenuPB.h"

void MenuPB::clearScreen(int pause)
{
	Sleep(pause);
	system("cls");
}

void MenuPB::showMessage(string mess, int pause)
{
	cout << mess;
	Sleep(pause);
}

MenuPB::MenuPB()
{
	idRec = 0;
	cMenu = 0;	
	selMenuM();
}

MenuPB::~MenuPB()
{
}

void MenuPB::selMenuM()
{
	while (cMenu != numMM)
	{
		cMenu = showMenu(arrMenuMain, numMM);
		switch (cMenu) 
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		}
	}
}

int MenuPB::showMenu(string* arr, int m_count)
{
	int selMenu{};
	clearScreen(500);
	showMessage("Оперируемый id " + to_string(idRec) + "\n\n", 0);

	for (int i{}; i < m_count; ++i)
		cout << (arr[i]) << "\n";

	cout << "\n\nСделайте выбор: ";
	cin >> selMenu;
	cin.ignore(32767, '\n');

	return selMenu;	
}

