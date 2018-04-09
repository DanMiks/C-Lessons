/*
    while - до тех пор пока
    while(логическое условие)
    {
        //код
    }
*/

#include <iostream>

using namespace std;

int main() 
{

    /*int i=0;

    while(i < 10)
    {
        cout << i << endl;
        i++; // i = i + 1;
    }*/

    /*char answer = 'y';

    while (answer == 'y' || answer == 'Y')
    {
        cout << "Wow!" << endl;
        cout << "Continue?(y/n): ";
        cin >> answer;
    }

    cout << "End.";*/

    char answer='n';
    do {
        cout << "Wow!" << endl;
        cout << "Continue?(y/n): ";
        cin >> answer;
    } while(answer == 'y' || answer == 'Y');

    return 0;
}