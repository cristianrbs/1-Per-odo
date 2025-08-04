#include<iostream>
using namespace std;

void contaLuz(double consumo){
    double custo;

    if (consumo <= 100)
    {
        custo = consumo * 0.2;
        custo = custo + consumo * 0.50;
        cout << "R$:" << custo << endl;
    }
    
    else if (consumo >= 100 and consumo < 200)
    {
        custo = consumo * 0.2;
        custo = custo + consumo * 0.75;
        cout << "R$:" << custo << endl;
    }

    else if (consumo >= 200 and consumo < 250)
    {
        custo = consumo * 0.2;
        custo = custo + consumo * 1.20;
        cout << "R$:" << custo << endl;
    }
    
    else
    {
        custo = consumo * 0.2;
        custo = custo + consumo * 1.50;
        cout << "R$:" << custo << endl;
    }    
}

int main (){
    double consumo;

    cout << "Informe o consumo da sua luz(em KW): ";
    cin >> consumo;
    
    contaLuz(consumo);

    return 0;
}