/*
    Упражнение 4 в книге
*/
#include <iostream>

using namespace std;

int main()
{
    int age = 1;
    int months;
    const int MONTHS_IN_YEAR = 12 
    cout << "Enter your age ";
    cin >> age;
    months = age * MONTHS_IN_YEAR;

    cout << "age:" << age << endl;
    cout << "months:" << months << endl;
    return 0;
}