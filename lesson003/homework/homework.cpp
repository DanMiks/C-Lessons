/*
    Пользовател с клавиатру вводит кол-во секунд, большое число примерно 18355323
    Вывести на экран:
    1. Кол-во дней
    2. Кол-во оставшихся часов
    3. Кол-во оставшихся минут
    4. Кол-во оставщих секунд


    Используй целочисленное деление и деление с остатком
    86400 - секунд в дней
    18355323 / 86400 = 212
    18355323 % 86400 = 38 532 оставшиеся секудны которых не хвотило до дня
    38532 / 3600 = 10
    38532 % 3600 = 2532 секундо оставшиеся после час
*/
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    const long SECONDS_IN_DAY = 86400, SECONDS_IN_HOUR = 3600, SECONDS_IN_MIN = 60;
    long sec;
    cout << "Enter the number of seconds : ";
    cin >> sec;

    long days = sec / SECONDS_IN_DAY;
    long hours = sec % SECONDS_IN_DAY / SECONDS_IN_HOUR;
    long minutes = sec % SECONDS_IN_HOUR / SECONDS_IN_MIN;
    long secRemainder = sec % SECONDS_IN_MIN;

    cout << days << " days " << hours << " hours " << minutes << " minutes " << secRemainder << " seconds" << endl;

    return 0;
}