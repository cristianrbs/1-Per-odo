#include<iostream>
using namespace std;

int main(){
    double a,b,inicio, fim;

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
    }
    
    return 0;
}