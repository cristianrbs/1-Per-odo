#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int main(){
    double a,b,inicio, fim,soma;

    cout << "Digite o primeiro numero: ";
    cin >> a;

    cout << "Digite o segundo numero: ";
    cin >> b;

    if (a < b)
    {
        inicio = a;
        fim = b;
    }

    else
    {
        inicio = b;
        fim = a;
    }
    
    

    for (double i = inicio + 1; i < fim; i++)
    {
        cout << i << endl;
        soma = soma +i;
    }

    cout << "Soma dos numeros: " << soma << endl;
    
    return 0;
}