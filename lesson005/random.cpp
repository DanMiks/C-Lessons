#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandom(int min, int max)
{
    int x = max+1;
    while(x > max) 
        x = min + rand()/((RAND_MAX + 1u)/max);
    
    return x;
}

int main()
{
    srand(time(nullptr)); // use current time as seed for random generator

    for (int i=0; i<10; i++) 
    {
        cout << generateRandom(100, 1000) << endl;
    }

}