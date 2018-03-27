/*
    У нас имеется счет в банке(int amount=500)$ 
    У нас имеется кридитный лимит(int creditLimit=2000)$

    Совершается покупка на money$ вводится с клавиатуры

    Проверить:
    1) Достаточно ли своих средств для совершения платеж
    2) Достаточно ли средств с учетом кридитного лимита для совершения платежа
*/
#include <iostream>

using namespace std;
int main()
{
    int money;
    int balance = 500;
    int creditLimit = 2000;
    cout << "Enter the money : ";
    cin >> money;
    cout << "Checking purchase on " << money << "$, balance: " << balance << ". Enable: " << (money <= balance) << endl;
    cout << "Checking purchase on :" << money << "$, balance with credit limit : " <<  (balance + creditLimit)   <<  ". Enable: "  << ((balance + creditLimit) >= money) << endl;
    return 0;
}