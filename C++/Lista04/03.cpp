#include<iostream>
using namespace std;

int main(){
    float vetor[20];
    float verifica;

    cout << "Digite os numeros" << endl;
    for(int i = 0; i < 20; i++){
            cout << "Numero " << (i + 1) << ": ";
            cin >> vetor[i];
    }

    cout << "Digite o numero a ser verificado: ";
    cin >> verifica;

    bool existe = false;
    for(int i = 0; i < 20; i++){
        if(vetor[i] == verifica){
            existe = true;
            break;
        }
    }

    if (existe) {
        float novoVetor[20]; 
        int j = 0;
        for (int i = 0; i < 20; i++) {
            if (vetor[i] != verifica) {
                novoVetor[j] = vetor[i];
                j++;
            }
        }

        cout << "Novo vetor sem o numero " << verifica << ":" << endl;
        for (int i = 0; i < j; i++) {
            cout << novoVetor[i] << " ";
        }
        cout << endl;
    } 
        else {
            cout << "O numero " << verifica << " NAO existe no vetor." << endl;
    }


    return 0;
}