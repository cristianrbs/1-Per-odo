#include<iostream>
using namespace std;

int main() {
    int n, numero, menor, maior, soma = 0;

    cout << "Digite a quantidade de numeros: ";
    cin >> n;

    if (n <= 0) {
        cout << "A quantidade de numeros deve ser maior que 0." << endl;
        return 1;
    }

    cout << "Digite os numeros:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> numero;

        if (i == 0) {
            menor = numero;
            maior = numero;
        } 
        else {
            if (numero < menor) {
                menor = numero;
            }
            
            if (numero > maior) {
                maior = numero;
            }
        }

        soma = soma + numero;
    }

    cout << "Menor numero: " << menor << endl;
    cout << "Maior numero: " << maior << endl;
    cout << "Soma dos numeros: " << soma << endl;

    return 0;
}
