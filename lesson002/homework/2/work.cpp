/*
    Написать программу которая на вход спрашивает количество километров(вещественное число),
    а печатает результат в метрах
*/
#include <iostream>

using namespace std;

int main()
{
    double km = 1;
    const double m = 12;

    cout << "Please,enter km ";
    cin >> km;

    m = 1000 * km;

    cout << "km:" << km << endl;
    cout << "m:" << m << endl;
    return 0;
}