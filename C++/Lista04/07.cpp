#include<iostream>
using namespace std;

int main(){
    int vetor[100];
    int aux = 1;

    cout << "Os 100 primeiros numeros impares" << endl;
    for (int i = 0; i < 100; i++)
    {
        vetor[i] = aux;
        aux = aux + 2;
        cout << vetor[i] << ", ";
    }
    return 0;
}