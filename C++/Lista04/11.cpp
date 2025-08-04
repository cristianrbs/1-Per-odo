#include<iostream>
#include <cmath>
using namespace std;

int main(){
    float n;
    float vetor[8];

    cout << "Digite 8 numeros: " << endl;
    for(int i = 0; i < 8; i++){ 
        cout << "Numero " << (i + 1) << ": ";
        cin >> n;

        if (n <= 0) {
            vetor[i] = -1;
        } else {
            vetor[i] = log10(n);
        }
    }

    cout << endl << "Valores Armazenados" << endl;
    for (int i = 0; i < 8; i++){
        cout << vetor[i] << ", ";
    }

    return 0;
}