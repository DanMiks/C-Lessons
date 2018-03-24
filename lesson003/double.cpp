#include <iostream>

using namespace std;

int main() 
{
    //0.007 -> 0.00701 -> 0.0071 -> 0.008
    // ВЕЩЕСТВЕННЫЕ ЧИСЛА НЕ НУМИРУЮТСЯ, МЕЖДУ ДВУМЯ ЧИСЛАМИ БЕСКОНЕЧНО МНОГО ДРУГИХ ЧИСЕЛ
    // ЗАДАТЬ ДИПОЗОН НЕ ВОЗМОЖНО

    //7.6e-5 = 7.6 * 10^-5 = 0.00001 * 7.6 = 

    float a = 12.5; // 4 bytes - 6 значимые цифры
    double b = 0.000076; // 8 bytes - 16 значимые цифры
    long double c = 1.0; // 12 bytes - 21 значимые цифры

    cout << sizeof(a) << " bytes" << endl;
    cout << sizeof(b) << " bytes" << endl;
    cout << sizeof(c) << " bytes" << endl;

    cout << a << " " << b << " " << c << endl;


    cout.setf(ios_base::fixed, ios_base::floatfield); //set format
    a = 1.0/3.0; //0.3333.....
    cout << a * 1e9 << endl;

    b = 1.0/3.0; //0.3333.....
    cout << b * 1e6 << endl;

    // +, -, *, /

    return 0;
}