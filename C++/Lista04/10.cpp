#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float n;
    float vetor[15];

    cout << "Digite 15 numeros: " << endl;
    for(int i = 0; i < 15; i++){
        cout << "Numero " << (i + 1) << ": ";
        cin >> n;

        if (n < 0) {
            vetor[i] = -1;
        } else {
            vetor[i] = sqrt(n);
        }
    }


    cout << endl << "Raiz Quadrada dos Valores Armazenados" << endl;
    for (int i = 0; i < 15; i++){
        cout << vetor[i] << ", ";
    }

    return 0;
}