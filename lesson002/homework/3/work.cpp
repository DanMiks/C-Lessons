/*
    Упражнение 4 в книге
*/
#include <iostream>

using namespace std;

int main()
{
    double age = 1;
    double months;
    cout << "Enter your age ";
    cin >> age;
    months = age * 12;

    cout << "age:" << age << endl;
    cout << "months:" << months << endl;
    return 0;
}