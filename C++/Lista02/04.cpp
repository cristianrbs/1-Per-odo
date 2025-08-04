#include<iostream>
using namespace std;

// soma dos tres maiores
int main() {
    double n, valor, maior1, maior2, maior3;

    cout << "Informe a quantidade de numeros: ";
    cin >> n;

    for (double i = 0; i < n; i++) {
        cout << "Informe o numero:" ;
        cin >> valor;

        if (valor > maior1) {
            maior3 = maior2;
            maior2 = maior1;
            maior1 = valor;
        } else if (valor > maior2) {
            maior3 = maior2;
            maior2 = valor;
        } else if (valor > maior3) {
            maior3 = valor;
        }
    }

    double somaTresMaiores = maior1 + maior2 + maior3;

    cout << "Soma dos tres maiores numeros: " << somaTresMaiores << endl;

    return 0;
}