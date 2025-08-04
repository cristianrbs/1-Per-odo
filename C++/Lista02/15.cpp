#include<iostream>
using namespace std;

int main(){
    double base, expoente, resultado = 1.0;

    cout << "Digite a base: ";
    cin >> base;

    cout << "Digite o expoente: ";
    cin >> expoente;

    if (expoente < 0) {
        cout << "Expoente negativo nao e permitido." << endl;
        return 1;
    }

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    cout << "O resultado de " << base << " elevado a " << expoente << " e: " << resultado << endl;

    return 0;
}