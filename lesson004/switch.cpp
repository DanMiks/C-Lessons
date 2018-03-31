/*
    Switch - Переключить
    switch(целое число) {
        case 1:
            cout << "A";
            break;
        case 2:
            cout << "B";
            break;
        case 3:
        case 4:
        case 5:
            cout << "C";
            break;
        default:
            cout << "D";
    }
*/

#include <iostream>

using namespace std;

int main() 
{
    /*int month;
    cin >> month;

    switch(month) {
        case 1:
            cout << "January";
            break;
        case 2:
            cout << "Febrarury";
            break;
        case 3:
            cout << "March";
            break;
        case 5:
        case 6:
            cout << "5 or 6";
            break;
        default:
            cout << "Unknown";
    }*/

    // Калькулятор
    int a,b;
    char oper;

    cout << "Enter expressesion: ";
    cin >> a >> oper >> b; // 2+2

    switch (oper) {
        case '+':
            cout << a+b;
            break;           
        case '-':
            cout << a-b;
            break;
        case '*':
            cout << a*b;
            break;
        case '/':
            cout << a/b;
            break;
        default:
            cout << "Unknown";
    }

    return 0;
}