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
	"1. Отобразить список контактов",
	"2. Поиск контакта",
	"3. Запись / Чтение",
	"4. Завершение работы" },
	arrMenuRec{
	"1. Найти контакт ФИО",
	"2. Найти по номеру",
	"3. Найти по id",
	"4. Отобразить контакт",
	"5. Добавление контакта",
	"6. Удаление контакта",
	"7. Возврат" },
	arrMenuFile{
	"1. Чтение базы из файла",
	"2. Запись базы в файл",
	"3. Возврат"},
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
	showMessage("Фамилия: " + dBi->getFN()->getSurname() + "\n");
	showMessage("Имя: " + dBi->getFN()->getName() + "\n");
	showMessage("Отчество: " + dBi->getFN()->getPatronomic() + "\n");
	showMessage("Мобильный: " + dBi->getCellNum() + "\n");
	showMessage("Домашний: " + dBi->getHomeNum() + "\n");
	showMessage("Рабочий: " + dBi->getWorkNum() + "\n");
	showMessage("Доп.инфо: " + dBi->getOtherInfo() + "\n");
	showMessage("\n");
	//cout << "-----------------------------------\n";	
}

void MenuPB::selMenuM() // Основное меню
{
	cMenu = 0;
	while (cMenu != numMM)
	{
		cMenu = showMenu(arrMenuMain, numMM);
		switch (cMenu) 
		{
		case 1: // "1. Отобразить список контактов"			
			clearScreen();
			for (int i{}; i < record; ++i)
				showRecord(&dB[i]);			
			pressAnyKey();
			break;
		case 2: // "2. Поиск контакта"
			selMenuR();
			break;
		case 3: // "3. Запись / Чтение"
			selMenuF();
			break;
		case 4: // "4. Завершение работы"
			break;
		}
	}
	cMenu = 0;
}

void MenuPB::selMenuR() // Манипуляции с контактами
{
	cMenu = 0;
	while (cMenu != numMR)
	{
		cMenu = showMenu(arrMenuRec, numMR);
		switch (cMenu)
		{
		case 1: // "1. Найти контакт ФИО"
			break;
		case 2: // "2. Найти по номеру"
			break;
		case 3: // "3. Найти по id"
			break;
		case 4: // "4. Отобразить контакт"
			break;
		case 5: // "5. Добавление контакта"
			break;
		case 6: // "6. Удаление контакта"
			break;
		case 7: // "7. Возврат"
			break;
		}
	}
	cMenu = 0;
}

void MenuPB::selMenuF() // Манипуляции с файлами
{
	cMenu = 0;
	while (cMenu != numMF)
	{
		cMenu = showMenu(arrMenuFile, numMF);
		switch (cMenu)
		{
		case 1: // "1. Чтение базы из файла"
			break;
		case 2: // "2. Запись базы в файл"
			break;
		case 3: // "3. Возврат"
			break;
		}
	}
	cMenu = 0;
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

