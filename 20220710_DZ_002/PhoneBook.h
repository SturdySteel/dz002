#pragma once
#include <string>
#include<iostream>
#include "FullName.h"

#define PHONEBOOK

using namespace std;

#ifdef PHONEBOOK

static int idS{ 1000 };

class PhoneBook
{
private:	
	const int id;
	FullName* rec{ nullptr };
	int cellNum;
	int homeNum;
	int workNum;
	string otherInfo;

public:
	PhoneBook(); 
	PhoneBook(FullName* rec); 
	PhoneBook(FullName* rec, int cellNum, int homeNum, int workNum, string otherInfo);
	
	~PhoneBook();
	
	//FullName* genFN();
	
	FullName* getFN();
	int getID();
	int getCellNum();
	int getHomeNum();
	int getWorkNum();
	string getOtherInfo();

	void setSurname(string surname); 
	void setName(string name);
	void setPatronomic(string patronymic);

	void setCellNum(int cellNum);
	void setHomeNum(int homeNum);
	void setWorkNum(int workNum); 
	void setOtherInfo(string otherInfo);
};

#endif // PHONEBOOK





