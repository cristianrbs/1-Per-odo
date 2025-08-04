#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double A, B, C, R, S, d;

    cout << "Informe o valor de A: ";
    cin >> A;

    cout << "Informe o valor de B: ";
    cin >> B;

    cout << "Informe o valor de C: ";
    cin >> C;

    R = pow(A + B, 2);
    S = pow(B + C, 2);

    d = (R + S)/2;

    cout << "Valor da expressao: " << d << endl;
    return 0;
}