#include<iostream>
using namespace std;

//Crie uma struct chamada "Data" que armazene os seguintes dados: dia (int), mês (int) e ano (int),
//Crie uma função para verificar se uma data é válida.

struct Data{
    int dia;
    int mes;
    int ano;
};

void preencher(Data &d){
    cout << "Digite o dia: " << endl;
    cin >> d.dia;

    cout << "Digite o mes (numero): " << endl;
    cin >> d.mes;

    cout << "Digite o ano: " << endl;
    cin >> d.ano;
}

bool verificar(Data &d){
    if (d.dia <= 0 or d.dia > 31) 
    {
        return false;
    }
    
    else if (d.mes <= 0 or d.mes > 12)
    {
        return false;
    }
    
    else if (d.ano <= 0 or d.ano > 2025)
    {
        return false;
    }
    
    else
    {
        return true;
    }
}

int main(){
    Data d;

    preencher(d);
    verificar(d);

    if (verificar(d) == true)
    {
        cout << "Data valida!";
    }
    
    else
    {
        cout << "Data invalida!";
    }
    
    return 0;
}