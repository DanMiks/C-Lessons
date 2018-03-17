/*
    Урок 2.
    Переменные
    Синтаксис: type name_var [= value];
*/
#include <iostream>

using namespace std;

int main()
{
    int health;
    int a = 2;

    cout << "Please, enter health value: ";
    cin >> health;

    cout << "Health: " << health << endl;

    health -= 20; // health = health - 20;

    cout << "Health: " << health << endl;

    health = (2 + a) * 2;

    cout << "Health: " << health << endl;

    return 0;
}