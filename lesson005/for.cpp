/*
    for - в течение
    Ты знаешь сколько раз цикл должен исполняться

    for(инициализация; условие; оператор)
    {
        код
    }
*/
#include <iostream>

using namespace std;

int main() 
{

    /*for(int i=1; i<=10; i+=2)
    {
        cout << i << endl;
    }*/

    /*for (int i=10; i>0; i--) 
    {
        cout << i << endl;
    }*/

    /*for (int i=0; i<1000; i++) 
    {
        cout << i << endl;
        if (i == 20)
            break;
    }*/

    for (int i=0; i<20; i++) 
    {
        if (i==15)
            continue;
        cout << i << endl;
    }


    cout << "End";

    return 0;
}