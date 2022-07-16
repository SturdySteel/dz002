#include "PhoneBook.h"

PhoneBook::PhoneBook() : PhoneBook(rec, 0, 0, 0, "") {}
PhoneBook::PhoneBook(FullName* rec) : PhoneBook(rec, 0, 0, 0, "") {}
PhoneBook::PhoneBook(FullName* rec, int cellNum, int homeNum, int workNum, string otherInfo) : 
	id{ idS }
{
	this->rec = this->rec == nullptr ? new FullName() : rec;	
	setCellNum(cellNum);
	setHomeNum(homeNum);
	setWorkNum(workNum);
	setOtherInfo(otherInfo);
	++idS;
}

PhoneBook::~PhoneBook()
{
	cout << "destr\n";
	delete rec;
}

//FullName* PhoneBook::genFN()
//{
//	return new FullName();
//}

FullName* PhoneBook::getFN()
{
	return rec;
}

int PhoneBook::getID()
{
	return id;
}

int PhoneBook::getCellNum()
{
	return cellNum;
}

int PhoneBook::getHomeNum()
{
	return homeNum;
}

int PhoneBook::getWorkNum()
{
	return workNum;
}

string PhoneBook::getOtherInfo()
{
	return otherInfo;
}

void PhoneBook::setSurname(string surname)
{
	rec->setSurnameF(surname);
}

void PhoneBook::setName(string name)
{
	rec->setNameF(name);
}

void PhoneBook::setPatronomic(string patronymic)
{
	rec->setPatronomicF(patronymic);
}

void PhoneBook::setCellNum(int cellNum)
{
	this->cellNum = cellNum;
}

void PhoneBook::setHomeNum(int homeNum)
{
	this->homeNum = homeNum;
}

void PhoneBook::setWorkNum(int workNum)
{
	this->workNum = workNum;
}

void PhoneBook::setOtherInfo(string otherInfo)
{
	this->otherInfo = otherInfo;
}
