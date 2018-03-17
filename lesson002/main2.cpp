#include <iostream>
#include <cmath>

using namespace std;

double sum(double num1, double num2) {
    return num1+num2;
}

int main() {

    double a;
    double b;

    cout << "Please, enter a and b: ";
    cin >> a >> b;

    double c = sum(a, b);
    cout << c << endl;

    cout << sqrt(25.0) << endl;

}