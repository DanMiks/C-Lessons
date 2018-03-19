//Упражнение 7 из книги

// Прототип

#include <iostream>

using namespace std;

void printTime(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes << endl;
}

int main()
{
    int  hours;
    int  minutes;
    cout << "Enter the number of hours ";
    cin >> hours;
    cout << "Enter the number of minutes ";
    cin >> minutes;
 
    printTime(hours,minutes);
    printTime(hours,minutes);
    printTime(hours,minutes);
    return 0;
}
