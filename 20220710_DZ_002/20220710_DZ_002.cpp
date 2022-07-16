#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <time.h>
#include "MenuPB.h"
#include "FullName.h"
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

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));
    rand();

    int record = 5;
     
    //FullName* a = new FullName{"test1"};

    //cout << a->getSurname() << ' ' << a->getName() << ' ' << a->getPatronomic() << '\n';

    //PhoneBook* arr = new PhoneBook[record];
    /*for (int i{}; i < record; ++i)
    {
        arr[i].setSurname(randString(random(3, 10)));
        arr[i].setName(randString(random(3, 10)));
        arr[i].setPatronomic(randString(random(3, 10)));
    }*/

    PhoneBook a[2];
    cout << a[1].getFN()->getSurname() << ' ';// << a->getName() << ' ' << a->getPatronomic() << '\n';
    MenuPB menu;        
    

    return 0;
}
