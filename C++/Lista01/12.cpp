#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double  a, b, c, d, e, f, x, y;

    a = 4;
    b = 1;
    c = 2;
    d = 5;
    e = 10;
    f = 6;

    x = (c * e) - (b * f); // Parte de cima da operação
    x = x / ((a * e) - (b * d)); // Parte de baixo da operação

    y = (a * f) - (c * d); // Parte de cima da operação
    y = y / ((a * e) - (b * d)); // Parte de baixo da operação

    cout << "Valor de x: " << x << endl;
    cout << "Valor de y: " << y << endl;
    return 0;
}