#include<iostream>
using namespace std;

int main(){
    double n, soma, media, valor;

    cout << "Informe a quantidade de numeros: ";
    cin >> n;

    for (double i = 0; i < n; i++)
    {
        cout << "Informe os numeros : ";
        cin >> valor;
        
        soma = soma + valor;
    }

    media = soma / n;

    cout << "Soma dos numeros: " << soma << endl;
    cout << "Media dos numeros: " << media << endl;

    return 0;
}