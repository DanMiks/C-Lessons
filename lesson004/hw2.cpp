#include <iostream>

using namespace std;
int main()
{

    int salary;
    cout << "Enter salary: ";
    cin >> salary;
    double percent = 0.0;
    if (salary <= 8000)
    {
        cout << "No tax" << endl;
    }
    else if (salary < 100000)
    {
        cout << "13 procent" << endl;
        percent = 0.13;
    }
    else if (salary < 1000000)
    {
        cout << "18 procent" << endl;
        percent = 0.18;
    }
    else
    {
        cout << "25 procent" << endl;
        percent = 0.25;
    }
    double tax = salary * percent;
    cout << fixed;
    cout <<"Tax in rub " << tax << endl;

    
    return 0;
}