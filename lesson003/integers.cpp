/*
    Целочисленные типы данных:
    short, long, int, long long
    char
    unsigned [type]
*/


#include <iostream>
#include <climits>

using namespace std;

int main () 
{
    // 1 byte (8 bits) - 256 значений информаци
    // 2 byte (8*2 bits = 16) - 65 536 значений информации
    // 4 byte (8*4 bits = 32) - 4 294 967 296
    // 8 byte (8*8 bits = 64) - примерно очень большое 19-20 цифр

    // Дипозоны целых чисел
    //   Положительные(0;inf)
    //      2 byte = [0; 2^16-1]
    //      4 byte = [0; 2^32-1]
    //      8 byte = [0; 2^64-1]
    //   Отрицательные
    //      1 byte = [-127; 126]
    //      2 byte = [-2^15; 2^15-1] [-32768; 32767]
    //      4 byte = [-2^31; 2^31-1] [-2мил; 2мил]
    //      8 byte = ...

    short a;        // 2 byte
    long b;         // 4 byte
    int c;          // 4 byte - машинозависимый тип данных
    long long d;    // 8 byte
    char e;         // 1 byte

    cout << "Size short: " << sizeof(short) << " in bytes" << endl;
    cout << "Size long: " << sizeof(long) << " in bytes" << endl;
    cout << "Size int: " << sizeof(int) << " in bytes" << endl;
    cout << "Size long long: " << sizeof(long long) << " in bytes" << endl;
    cout << "Size char: " << sizeof(char) << " in bytes" << endl;

    a = 17ll; // 17 type int
    d = 40000000000; // 40000000000 - type long long

    a = 32767;
    cout << a << endl;
    a++; // a = a+1; a += 1
    cout << a << endl; // переполнение

    unsigned int a1 = 0; // [0; 2^32-1]
    
    cout << INT_MAX << endl;

    //Операции:
    int x = 183, y=71;
    cout << x << "+" << y << "=" << (x+y) << endl;
    cout << x << "-" << y << "=" << (x-y) << endl;
    cout << x << "*" << y << "=" << (x*y) << endl;
    cout << x << "/" << y << "=" << (x/y) << endl; // целочисленное деление, дробная часть откидывается
    cout << x << "%" << y << "=" << (x%y) << endl; // деление с остатком

    // 70 % 5 = 0
    // 71 % 5 = 1
    // 72 % 5 = 2
    // 73 % 5 = 3
    // 74 % 5 = 4
    // 75 % 5 = 0

    // 183 рубля, 71 рубль масло
    // Сколько я смогу купить пачек масла: 183/71 = 2
    // Сколько останется денег: 183%71 = 41

    x = 5235;
    x = x % 2; // 0 1 - проверка четности нечости
    
    x = x % 10; // l- последния цифра
    x = 814535l;

    x = 814535l;
    x = x % 100; // 5l- последние две цифры
    
    x = 814535l;
    x = x % 1000; // 35l- последние три цифры


    cout << 1/2; // 0!!!!!!!!

    return 0;
}