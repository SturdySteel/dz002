#pragma once
#include <string>

using namespace std;

class FullName
{
	string* surname;
	string* name;	
	string* patronymic;

public:
	FullName() : FullName("No surname", "No name", "No patronomic") {}
	FullName(string surname) : FullName (surname, "No name", "No patronomic") {}
	FullName(string surname, string name) : FullName(surname,name, "No patronomic"){}
	FullName(string surname, string name, string patronymic)
	{
		*this->surname = surname;
		*this->name = name;
		*this->patronymic = patronymic;
	}
};