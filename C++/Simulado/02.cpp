#include<iostream>
using namespace std;

double calcular(double valorTotal, double juros_x, double juros_y, double valor_x, double qtd_x, double IPI_x, double valor_y, double qtd_y, double IPI_y){

    juros_x = valor_x * qtd_x;
    juros_x = juros_x + (juros_x * IPI_x / 100);

    juros_y = valor_y * qtd_y;
    juros_y = juros_y + (juros_y * IPI_y / 100);

    valorTotal = juros_x + juros_y;

    return valorTotal;
}

int main(){
    double valor_x, qtd_x, valor_y, qtd_y, IPI_x, IPI_y, valorTotal, juros_x, juros_y, resp;

    cout << "Informe o valor unitario da peca X: " << endl;
    cin >> valor_x;
    cout << "Informe a quatidade de pecas X: " << endl;
    cin >> qtd_x;
    cout << "Informe o IPI da peca X(%): " << endl;
    cin >>IPI_x;

    cout << "Informe o valor unitario da peca Y: " << endl;
    cin >> valor_y;
    cout << "Informe a quatidade de pecas Y: " << endl;
    cin >> qtd_y;
    cout << "Informe o IPI da peca Y(%): " << endl;
    cin >>IPI_y;

    resp = calcular(valorTotal,juros_x,juros_y,valor_x,qtd_x,IPI_x,valor_y,qtd_y,IPI_y);

    cout << "R$ " << resp << endl; 

    if (resp >= 5000 and resp <= 10000)
    {
        cout << "Lucro!";
        return valorTotal;
    }

    else if (resp > 10000)
    {
        cout << "Muito lucro!";
        return valorTotal;
    }

    else
    {
        cout << "Nao teve lucro!";
    }

    return 0;
}