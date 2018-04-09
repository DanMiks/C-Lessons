#include <iostream>
using namespace std;

int main()
{
    
    int number;
    cout << "Enter number: ";
    cin >> number;

    switch (number % 2)
    {
    case 0:
        cout << "even number" << endl;
        break;
    case 1:
        cout << "odd number" << endl;
        break;
    }

    return 0;
}