#pragma once
#include<string>

using namespace std;

class FullName
{
	string surname;
	string name;
	string patronymic;

public:
	
	FullName();
	FullName(string surname);	
	FullName(string surname, string name);
	FullName(string surname, string name, string patronymic);

	string getSurname();
	string getName();	
	string getPatronomic();

	void setSurnameF(string surname);
	void setNameF(string name);
	void setPatronomicF(string patronymic);

};