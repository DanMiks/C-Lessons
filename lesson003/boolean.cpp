#include <iostream>

using namespace std;

int main() 
{
    bool a = true; // истина либо это все что не нолб
    bool b = false; // ложь

    // Операции сравнения
    int n1=100, n2=100;
    cout << n1 << "<" << n2 << ": " << (n1<n2) << endl;
    cout << n1 << ">" << n2 << ": " << (n1>n2) << endl;
    cout << n1 << "<=" << n2 << ": " << (n1<=n2) << endl;
    cout << n1 << ">=" << n2 << ": " << (n1>=n2) << endl;
    cout << n1 << "==" << n2 << ": " << (n1==n2) << endl;
    cout << n1 << "!=" << n2 << ": " << (n1!=n2) << endl;

    //Логические операции
    //Инверсия true->false, false->true. НЕ

    cout << a << "= !" << (!a) << endl;
    cout << b << "= !" << (!b) << endl;

    //Логическое И, &&
    a=true;b=true;
    cout << a << " && " << b << " = " << (a&&b) << endl;
    a=false;
    cout << a << " && " << b << " = " << (a&&b) << endl;
    a=true;b=false;
    cout << a << " && " << b << " = " << (a&&b) << endl;
    a=false;b=false;
    cout << a << " && " << b << " = " << (a&&b) << endl;


    //Логическое или, ||
    a=true;b=true;
    cout << a << " || " << b << " = " << (a||b) << endl;
    a=false;
    cout << a << " || " << b << " = " << (a||b) << endl;
    a=true;b=false;
    cout << a << " || " << b << " = " << (a||b) << endl;
    a=false;b=false;
    cout << a << " || " << b << " = " << (a||b) << endl;

    int x = 100;
    bool c = (x = 5); // !!!!!!!!!!!!!!!!!!  ОПЕРАЦИЯ ПРИСВАИВАНИЯ
    cout << c << ", " << x << endl;

    //Тернарный оператор ?:
    // логическое условие ? выражение1 : выражения2
    n1=30; n2=9;
    int max = ( n1 > n2 ? n1 : n2)+1;

    cout << max;

    int a1=0; int a2=10; //границы
    int n=10;
    bool n1= n > a1 && n < a2; //отрезок, не включительно границ
    bool n2= n >= a1 && m <= a2;//интервал, включая границы

    return 0;
}