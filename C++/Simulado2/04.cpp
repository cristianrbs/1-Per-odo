#include<iostream>
using namespace std;

int calcula(int n1, int n2){

    int resultado = 1;

    for(int i = 0; i < n2; i++){
        resultado *= n1;

        if (n2 > 9)
    {
        return 0;
    }
    }

    return resultado;
    
}

int main(){

    int n1, n2, resp, vezes;
    int * vetor;

    cout << "Digite quantas vezes deseja executar a multiplicacao: " << endl;
    cin >> vezes;
    
    vetor = new int[vezes];

    for(int i = 0; i < vezes; i++){
        cout << "Digite o primeiro numero: " << endl;
        cin >> n1;
        cout << "Digite o segundo numero: " << endl;
        cin >> n2;

        resp = calcula(n1, n2);

        vetor[i] = resp;
    }

    cout << "Resultados" << endl;
    for(int i = 0; i < vezes; i++){
        cout << vetor[i] << endl;
    }

    return 0;
}
