#include<iostream>
using namespace std;

int main(){
    double n, maior, valor;

    cout << "Informe a quantidade de numeros: ";
    cin >> n;

    maior = valor;


    for (double i = 0; i < n; i++)
    {
        cout << "Informe os valores: ";
        cin >> valor;

        if (valor > maior)
        {
            maior = valor;
        }
    }
    cout << "Maior valor: " << maior << endl;
    
    return 0;
}

