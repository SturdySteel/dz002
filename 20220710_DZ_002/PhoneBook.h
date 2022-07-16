#pragma once
#include <string>
#include<iostream>
#include "FullName.h"

using namespace std;

static int record = 5;
static int idS{ 1000 };

class PhoneBook
{
private:	
	const int id;
	FullName* rec{ nullptr };
	string cellNum;
	string homeNum;
	string workNum;
	string otherInfo;
	
public:
	PhoneBook(); 
	PhoneBook(FullName* rec); 
	PhoneBook(FullName* rec, string cellNum, string homeNum, string workNum, string otherInfo);
	
	~PhoneBook();
	
	//FullName* genFN();
	
	FullName* getFN();
	int getID();
	string getCellNum();
	string getHomeNum();
	string getWorkNum();
	string getOtherInfo();

	void setSurname(string surname); 
	void setName(string name);
	void setPatronomic(string patronymic);

	void setCellNum(string cellNum);
	void setHomeNum(string homeNum);
	void setWorkNum(string workNum);
	void setOtherInfo(string otherInfo);
};