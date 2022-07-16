#include "FullName.h"

FullName::FullName() : FullName("No surname", "No name", "No patronymic") {}
FullName::FullName(string surname) : FullName(surname, "No name", "No patronymic") {}
FullName::FullName(string surname, string name) : FullName(surname, name, "No patronymic") {}
FullName::FullName(string surname, string name, string patronymic)
{
	setSurnameF(surname);
	setNameF(name);
	setPatronomicF(patronymic);
}

string FullName::getSurname() 
{
	return surname; 
}

string FullName::getName()
{
	return name;
}


string FullName::getPatronomic()
{
	return patronymic;
}

void FullName::setSurnameF(string surname)
{
	this->surname = surname;
}

void FullName::setNameF(string name)
{
	this->name = name;
}

void FullName::setPatronomicF(string patronymic)
{
	this->patronymic = patronymic;
}


