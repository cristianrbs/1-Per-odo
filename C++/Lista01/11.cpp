#include <iostream>
#include <math.h>
using namespace std;

double expressao(double x, double y){
    double operacao = pow(x,2) + pow(y,2) - 6 * x * y - 1;
    return operacao;
}

int main(){
    double x, y, resp;

    x = 1;
    y = 9;

    resp = expressao(x,y);
    cout << "Valor da expressao: " << resp << endl;
    return 0;
}