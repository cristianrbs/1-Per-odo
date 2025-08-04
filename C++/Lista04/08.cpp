#include<iostream>
using namespace std;

int main(){
    int vetor[10];
    int resp;

    cout << "Digite 10 numeros" << endl;
    for(int i = 0; i < 10; i++){
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    cout << "Valores Armazenados" << endl;
    for (int i = 0; i < 10; i++)
    {
        resp = vetor[i] / 2;
        cout << resp << ", ";
    }
    
    return 0;
}