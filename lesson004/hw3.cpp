#include <iostream>

using namespace std;

int main()
{
    int rub;
    int choice;
    double exchange = 0.0;
    cout << "Enter money in rub ";
    cin >> rub;
    cout << "1-usd,2-eur,3-pounds,4-grivn ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        exchange = 58.0736;
        break;
    case 2:
        exchange = 71.3260;
        break;
    case 3:
        exchange = 81.8388;
        break;
    case 4:
        exchange = 2.212;
        break;
    default:
    cout <<"Error,incorrect choice";
    return 1;
    }

    double value = rub / exchange;
    cout << "Value " << value << endl;
    return 0;
}