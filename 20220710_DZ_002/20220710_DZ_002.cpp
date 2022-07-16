#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <time.h>
#include "MenuPB.h"
#include "FullName.h"
#include "PhoneBook.h"
//#include "GenDB.cpp"

using namespace std;

int random(int min, int max);
string randString(int len);
string randPhoneNumb(int len);
PhoneBook* genDB(int length);

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));
    rand();
    
    PhoneBook* arr = genDB(record);

    MenuPB menu(arr);
    
    return 0;
}
