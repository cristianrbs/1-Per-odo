#include<iostream>
using namespace std;

int main(){
    int vetor[7];

    cout << "Digite 7 numeros inteiros" << endl;
    for(int i = 0; i < 7; i++){ 
        cout << "Numero " << (i + 1) << ": ";
        cin >> vetor[i];
    }

    //imprimir os numeros em ordem crescente
    for(int i = 0; i < 7; i++){
        for(int j = i + 1; j < 7; j++){
            if(vetor[i] > vetor[j]){
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    cout << "Numeros em ordem crescente: ";
    for(int i = 0; i < 7; i++){ 
        cout << vetor[i] << " ";
    }

    return 0;
}