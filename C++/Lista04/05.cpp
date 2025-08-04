#include<iostream>
using namespace std;

int main(){
    int vetor[10];
    int verifica = 0;
    int contador = 0;

    cout << "Digite 10 numeros inteiros" << endl;
    for(int i = 0; i < 10; i++){
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    cout << "Digite o numero a ser verificado: ";
    cin >> verifica;

    for(int i = 0; i < 10; i++){
        if(vetor[i] == verifica){
            contador++;
        }
    }

    cout << "O numero " << verifica << " aparece " << contador << " vezes no vetor." << endl;   

    return 0;
}