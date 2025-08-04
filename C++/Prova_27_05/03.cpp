#include<iostream>
using namespace std;

void vefirica(char codigo, double valorTotal, double valor, double qtd, double custo){
    switch (codigo)
    {
    case 'A':
        cout << "Informe o custo por peca: ";
        cin >> custo; 
        valorTotal = valor * (qtd * custo);
        cout << valorTotal;
        break;

    case 'B':
        cout << "Informe o custo por peca: ";
        cin >> custo; 
        valorTotal = valor * qtd;
        cout << valorTotal;
        break;

    case 'C':
        cout << "Informe o custo por peca: ";
        cin >> custo; 
        valorTotal = valor * qtd;
        cout << valorTotal;
        break;
    
    default:
        cout << "ABACAXI!";
        break;
    }
}

int main(){
    double valor, qtd,valorTotal,custo;
    char codigo;

    cout << "Informe o codigo da peca: ";
    cin >> codigo;

    cout << "Informe o valor da pecaa: ";
    cin >> valor;

    cout << "Informe a quantidade da peca: ";
    cin >> qtd;

    vefirica(codigo,valorTotal,valor,qtd,custo);

    return 0;
}