/*
 Либо упражнение 5/6 из книги
*/
#include <iostream>

using namespace std;
int main()
{
    double cels = 1;
    double fahr;
    cout << "Please enter a Celsius value";
    cin >> cels;

    fahr = 1.8 * cels + 32;
    cout << "fahr:" << fahr << endl;
    cout << "cels:" << cels << endl;
    return 0;
}