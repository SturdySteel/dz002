#include "PhoneBook.h"

PhoneBook::PhoneBook() : PhoneBook(rec, "", "", "", "") {}
PhoneBook::PhoneBook(FullName* rec) : PhoneBook(rec, "", "", "", "") {}
PhoneBook::PhoneBook(FullName* rec, string cellNum, string homeNum, string workNum, string otherInfo) :
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
	//cout << "destr\n";
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

string PhoneBook::getCellNum()
{
	return cellNum;
}

string PhoneBook::getHomeNum()
{
	return homeNum;
}

string PhoneBook::getWorkNum()
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

void PhoneBook::setCellNum(string cellNum)
{
	this->cellNum = cellNum;
}

void PhoneBook::setHomeNum(string homeNum)
{
	this->homeNum = homeNum;
}

void PhoneBook::setWorkNum(string workNum)
{
	this->workNum = workNum;
}

void PhoneBook::setOtherInfo(string otherInfo)
{
	this->otherInfo = otherInfo;
}
