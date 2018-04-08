# 3
#include <windows.h>
#include <locale.h>
#include <wchar.h>
#include <iostream>
using namespace std;

int main()
{
    // Make sure you have Lucida Console or Consolas font installed and choose it as the console font.
    // Set the specified system locale to 'Russian_Russia.1251'.
    setlocale(LC_ALL, "Russian");
    // Set CP1251 instead of default CP866 to output Cyrillic text.
    SetConsoleOutputCP(1251);
    // In most cases the trick should do the job. No warranty though: it's Windows, baby.
    wprintf(L"Сообщение\n");
    int number;
    cout << "Введите число: ";
    cin >> number;

    switch (number % 2)
    {
    case 0:
        cout << "even number" << endl;
        break;
    case 1:
        cout << "odd number" << endl;
        break;
    }

    return 0;
}