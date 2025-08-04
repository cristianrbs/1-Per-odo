#include<iostream>
using namespace std;

int main(){
    double poluicao;

    cout << "Informe o nivel da poluicao: ";
    cin >> poluicao;

    if (poluicao >= 0.05 and poluicao < 0.3)
    {
        cout << "Ambiente Seguro e Saudável";
    }

    else if (poluicao >= 0.3 and poluicao < 0.4) 
    {
        cout << "primeiro grupo." << endl;
        cout << "suspendam imediatamente suas atividades";
    }
    

    else if (poluicao >= 0.4 and poluicao < 0.5)
    {
        cout << "Primeiro e Segundo Grupo" << endl;
        cout << "interrompem suas operações";
    }

    else
    {
        cout << "Todos os Grupos" << endl;
        cout << "Parem suas atividades";
    } 

    return 0;
}