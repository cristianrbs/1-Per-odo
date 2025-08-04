#include<iostream>
using namespace std;

int main(){
    string nome, senha;

    cout << "Digite o nome: ";
    cin >> nome;

    cout << "Digite a senha: ";
    cin >> senha;

    while (nome == senha)
    {
        if (senha == nome)
        {
            cout << "ERRO!" << endl;
            cout << "Digite a senha novamente: ";
            cin >> senha;
        }
        
        else if (senha != nome)
        {
            cout << "Acesso permitido!" << endl;
            break;
        }
    }
}