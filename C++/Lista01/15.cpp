#include <iostream>
#include <math.h>
using namespace std;


int main(){
    double distribuidor, imposto, custoDistribuidor, custoFabrica, custoImposto, custoTotal;
    
    cout << "Informe o custo de fabrica do carro: ";
    cin >> custoFabrica;

    distribuidor = 0.28;
    imposto = 0.45;
    
    custoDistribuidor = custoFabrica * distribuidor;
    custoDistribuidor = custoDistribuidor + custoFabrica;

    custoImposto = custoFabrica * imposto;
    custoImposto = custoImposto + custoFabrica;

    custoTotal = custoFabrica + custoDistribuidor + custoImposto;
    cout << "O valor a pagar pelo carro R$: " << custoTotal << endl;
    
    return 0;
}
