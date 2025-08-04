#include<iostream>
using namespace std;

double calcular(double a, double b, double anos) {
    while (a < b)
    {
        a = a * 1.03;
        b = b * 1.015;
        anos++;
    }
    return anos;
}

int main() {
    double a = 0, b = 0, anos = 0;
    a = 80000;
    b = 200000;

    anos = calcular(a,b,anos);

    cout << "o numero de anos necessarios: " << anos << endl;

    return 0;
}