#include<iostream>
using namespace std;

int main(){
    double valor1, valor2, qtd1, qtd2, IPI, total;

    cout << "Informe a porcentagem do IPI: ";
    cin >> IPI;

    cout << "Informe o valor 1: ";
    cin >> valor1;

    cout << "Informe o valor 2: ";
    cin >> valor2;

    cout << "Informe a quantidade de pecas 1: ";
    cin >> qtd1;

    cout << "Informe a quantidade de pecas 2: ";
    cin >> qtd2;

    total = (valor1 * qtd1 + valor2 * qtd2) * (IPI / 100 + 1);

    cout << "valor total a ser pago R$: " << total << endl;

    return 0;
}