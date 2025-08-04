#include<iostream>
using namespace std;

void estacao(int mes){

    if (mes == 9 or mes == 10 or mes == 11)
    {
        cout << "Primavera!";
    }

    else if (mes == 12 or mes == 1 or mes ==2)
    {
        cout << "Verao!";
    }
    
    else if (mes == 3 or mes == 4 or mes == 5)
    {
        cout << "Outono!";
    }

    else
    {
        cout << "Inverno!";
    }  
}

int main(){
    int mes;

    cout << "----------------------------------" << endl;
	cout <<	"		 Estacoes do ano           " << endl;
	cout << "----------------------------------" << endl;
    cout << "Informe o mes (numero): ";
    cin >> mes;

    estacao(mes);

    return 0;
}