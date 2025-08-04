#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double x1, y1, x2, y2, d;

    cout << "Digite o valor de x1: ";
    cin >> x1;

    cout << "Digite o valor de y1: ";
    cin >> y1;

    cout << "Digite o valor de x2: ";
    cin >> x2;
    
    cout << "Digite o valor de y2: ";
    cin >> y2;

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "A distancia entre os pontos: " << d << endl;
    return 0;
}
