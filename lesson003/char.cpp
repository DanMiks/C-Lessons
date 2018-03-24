#include <iostream>

using namespace std;

int main() 
{
    //ASCII - [0;127]
    // character - символ
    char a,b,c; // целые числа, 1 байт [-128; 127]

    a = 'a';
    b = '1';
    c = 'A';

    a = a+1;

    cout << a << " " << b << " " << c << endl;
    cout << (int)a << " " << (int)b << " " << (int)c << endl;

    a = '\n';

    /*short a1, b1, c1;
    a1 = a;
    b1 = b;
    c1 = c;
    cout << a1 << " " << b1 << " " << c1 << endl;*/

    return 0;
}