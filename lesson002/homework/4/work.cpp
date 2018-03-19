/*
 Либо упражнение 5/6 из книги
*/
#include <iostream>

using namespace std;

double convertorTemp(double cels)
{
    return 1.8 * cels + 32;
}



int main()
{
    double cels = 1;
    double fahr;
    cout << "Please enter a Celsius value ";
    cin >> cels;

    fahr = convertorTemp(cels);
    cout << "fahr:" << fahr << endl;
    cout << "cels:" << cels << endl;
    return 0;
}