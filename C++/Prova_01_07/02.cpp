#include<iostream>
using namespace std;

int prodimPE(int n){
    int qtd;

    if (n == 0)
    {
        return 1;
    }
    
    else
    {
        return n / prodimPE(n - 1);
    }
}

int main(){
    int n, qtd, resp;
    int produto = 1;

    cout << "Digite a quantidade de numeros: ";
    cin >> qtd;

    if (qtd < 0)
    {
        cout << "Quantidade invalida";
        return 1;
    }
    
    for (int i = 0; i < qtd; i++)
    {
        cout << "Digite o(s) numeros(s): ";
        cin >> n;

        resp = prodimPE(n);

        if (resp % 2 == 0)
        {
            /* code */
        }
        
    }

    

    
}