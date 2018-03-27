/*
    У нас есть квартира
    1) цена int - price
    2) этаж int - floor
    3) кол-во комнат int - rooms
    Все данные с клавиатуры

    Проверить 3 условие
    1) Квартира на 6 этаже и цена меньше миллиона
    2) Цена от 1 миллиона до 2 миллионов и кол-во комнат больше 3
    3) (Квартира на 3-8 этаже) или (цена меньше миллиона но квартира на 1 этаже)

*/
#include <iostream>

using namespace std;
int main()
{
    int price, floor, rooms;
    cout << "Enter price  ";
    cin >> price;
    cout << "Enter floor  ";
    cin >> floor;
    cout << "Enter rooms  ";
    cin >> rooms;

    bool cond1 = (floor == 6 && price < 1e6);
    bool cond2 = (price >= 1e6 && price <= 2e6 && floor > 3);
    bool cond3 = (floor >= 3 && floor <= 8) || (price < 1e6 && floor == 1);
    cout << "cond1 " << cond1 << endl;
    cout << "cond2 " << cond2 << endl;
    cout << "cond3 " << cond3 << endl;
    return 0;
}