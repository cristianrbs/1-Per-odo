#include<iostream>
using namespace std;

void codigo(){
    cout << "Que carro voce possui?" << endl;
    cout << "S - para sedan" << endl;
    cout << "C - para conversivel" << endl;
    cout << "P - para popular" << endl;
}

double calcular(double precoAntigo, double precoNovo, char cg){

    switch (cg)
    {
    case 'S':
        if (precoAntigo < 150000)
        {
            precoNovo = precoAntigo + (precoAntigo * 0.11);
            return precoNovo;
        }

        else
        {
            precoNovo = precoAntigo + (precoAntigo * 0.07);
            return precoNovo;
        }
        break;

    case 'C':
        if (precoAntigo < 100000)
        {
            precoNovo = precoAntigo + (precoAntigo * 0.09);
            return precoNovo;
        }

        else
        {
            precoNovo = precoAntigo;
            return precoNovo;
        }        
        break;

        case 'P':
            precoNovo = precoAntigo + (precoAntigo * 0.04);      
            return precoNovo;
            break;
    
    default:
    precoNovo = precoAntigo + (precoAntigo * 0.05);
    return precoNovo;
    }
}

int main(){
    double precoAntigo, precoNovo, resp;
    char cg;

    codigo();
    cout << "Informe o codigo do carro: " << endl;
    cin >> cg;
    cout << "Informe o preco antigo do carro: " << endl;
    cin >> precoAntigo;
    resp = calcular(precoAntigo,precoNovo, cg);

    cout << "O novo preco do carro sera de R$: " << resp << endl;

    return 0;
}