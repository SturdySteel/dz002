#include <string>
#include <iostream>
#include "PhoneBook.h"

using namespace std;

int random(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

string randString(int len)
{
    string str;
    char arr[] = "abcdefghijklmnopqrstuvwxyz";

    for (int i{}; i < len; ++i)
        str += arr[rand() % (sizeof(arr) - 1)];

    return str;
}
string randPhoneNumb(int len)
{
    string str;
    char arr[] = "1234567890";

    for (int i{}; i < len; ++i)
        str += arr[rand() % (sizeof(arr) - 1)];
    
    return str;
}

PhoneBook* genDB(int length)
{
    PhoneBook* arr = new PhoneBook[length];
    for (int i{}; i < length; ++i)
    {
        arr[i].setSurname(randString(random(3, 8)));
        arr[i].setName(randString(random(3, 8)));
        arr[i].setPatronomic(randString(random(3, 8)));
        arr[i].setCellNum(randPhoneNumb(10));
        arr[i].setWorkNum(randPhoneNumb(10));
        arr[i].setHomeNum(randPhoneNumb(10));
        arr[i].setOtherInfo(randString(random(10, 20)));
    }
    return arr;
}
