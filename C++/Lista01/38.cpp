#include<iostream>
using namespace std;


int main(){
    int codigo = 0;
    int quantidade = 0;

    cout << "Especificacao              	Codigo                      Preco" << endl;      
    cout << "Cachorro quente                100                         2,20 " << endl;
    cout << "Bauru simples                  101                         3,30 " << endl;
    cout << "Bauru com ovo                  102                         3,50 " << endl;
    cout << "Hamburguer                     103                         5,20 " << endl;
    cout << "Cheeseburguer                  104                         7,30 " << endl;
    cout << "Cheeseburguer                  105                         2,00"  << endl;

    cout << "Qual sera o seu pedido(informe o codigo)? ";
    cin >> codigo;

    cout << "Qaul sera a quantidade? ";
    cin >> quantidade;

    switch (codigo){
        double valor;
        case 100:
        valor = quantidade * 2.20;
        cout << "Seu pedido saira por R$:" << valor << endl;
        break;
        
        case 101:
        valor = quantidade * 3.30;
        cout << "Seu pedido saira por R$:" << valor << endl;
        break;
    
        case 102:
        valor = quantidade * 3.50;
        cout << "Seu pedido saira por R$:" << valor << endl;
        break;

        case 103:
        valor = quantidade * 5.20;
        cout << "Seu pedido saira por R$:" << valor << endl;
        break;

        case 104:
        valor = quantidade * 7.30;
        cout << "Seu pedido saira por R$:" << valor << endl;
        break;

        case 105:
        valor = quantidade * 2.00;
        cout << "Seu pedido saira por R$:" << valor << endl;
        break;
        
        default:
        cout << "Opcao invalida!";
}
}