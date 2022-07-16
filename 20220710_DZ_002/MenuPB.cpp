#include "MenuPB.h"

void MenuPB::clearScreen(int pause = 0)
{
	Sleep(pause);
	system("cls");
}

void MenuPB::showMessage(string mess, int pause = 0)
{
	cout << mess;
	Sleep(pause);
}


void MenuPB::pressAnyKey()
{
	std::cout << "\n\n";
	system("pause");
}


MenuPB::MenuPB(PhoneBook* dB):
	idRec{ 0 }, 
	cMenu{ 0 }, 
	arrMenuMain{
	"1. ���������� ������ ���������",
	"2. ����� ��������",
	"3. ������ / ������",
	"4. ���������� ������" },
	arrMenuRec{
	"1. ����� ������� ���",
	"2. ����� �� ������",
	"3. ����� �� id",
	"4. ���������� �������",
	"5. ���������� ��������",
	"6. �������� ��������",
	"7. �������" },
	arrMenuFile{
	"1. ������ ���� �� �����",
	"2. ������ ���� � ����",
	"3. �������"},
	dB { dB }
{			
	selMenuM();
}

MenuPB::~MenuPB()
{
	//cout << "destr1\n";
	delete[] dB;
}

void MenuPB::showRecord(PhoneBook* dBi)
{
	cout << "-----------------------------------\n";
	showMessage("ID: " + to_string(dBi->getID()) + "\n");
	showMessage("�������: " + dBi->getFN()->getSurname() + "\n");
	showMessage("���: " + dBi->getFN()->getName() + "\n");
	showMessage("��������: " + dBi->getFN()->getPatronomic() + "\n");
	showMessage("���������: " + dBi->getCellNum() + "\n");
	showMessage("��������: " + dBi->getHomeNum() + "\n");
	showMessage("�������: " + dBi->getWorkNum() + "\n");
	showMessage("���.����: " + dBi->getOtherInfo() + "\n");
	showMessage("\n");
	//cout << "-----------------------------------\n";	
}

void MenuPB::selMenuM() // �������� ����
{
	cMenu = 0;
	while (cMenu != numMM)
	{
		cMenu = showMenu(arrMenuMain, numMM);
		switch (cMenu) 
		{
		case 1: // "1. ���������� ������ ���������"			
			clearScreen();
			for (int i{}; i < record; ++i)
				showRecord(&dB[i]);			
			pressAnyKey();
			break;
		case 2: // "2. ����� ��������"
			selMenuR();
			break;
		case 3: // "3. ������ / ������"
			selMenuF();
			break;
		case 4: // "4. ���������� ������"
			break;
		}
	}
	cMenu = 0;
}

void MenuPB::selMenuR() // ����������� � ����������
{
	cMenu = 0;
	while (cMenu != numMR)
	{
		cMenu = showMenu(arrMenuRec, numMR);
		switch (cMenu)
		{
		case 1: // "1. ����� ������� ���"
			break;
		case 2: // "2. ����� �� ������"
			break;
		case 3: // "3. ����� �� id"
			break;
		case 4: // "4. ���������� �������"
			break;
		case 5: // "5. ���������� ��������"
			break;
		case 6: // "6. �������� ��������"
			break;
		case 7: // "7. �������"
			break;
		}
	}
	cMenu = 0;
}

void MenuPB::selMenuF() // ����������� � �������
{
	cMenu = 0;
	while (cMenu != numMF)
	{
		cMenu = showMenu(arrMenuFile, numMF);
		switch (cMenu)
		{
		case 1: // "1. ������ ���� �� �����"
			break;
		case 2: // "2. ������ ���� � ����"
			break;
		case 3: // "3. �������"
			break;
		}
	}
	cMenu = 0;
}

int MenuPB::showMenu(string* arr, int m_count)
{
	int selMenu{};
	clearScreen(500);
	showMessage("����������� id " + to_string(idRec) + "\n\n", 0);

	for (int i{}; i < m_count; ++i)
		cout << (arr[i]) << "\n";

	cout << "\n\n�������� �����: ";
	cin >> selMenu;
	cin.ignore(32767, '\n');

	return selMenu;	
}

