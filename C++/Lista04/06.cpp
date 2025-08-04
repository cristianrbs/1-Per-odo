#include<iostream>
using namespace std;

int main(){
    int vetor[50];

    for(int i = 0; i < 50; i++){
        vetor[i] = i + 1;
    }

    cout << "Numeros: ";
    for(int i = 0; i < 50; i++){
        cout << vetor[i] << ", ";
    }
}