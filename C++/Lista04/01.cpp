#include<iostream>
using namespace std;

int main(){
    int valores[5];

    cout << "Digite 5 numeros do teclado(inteiros): " << endl;
    for(int i = 0; i < 5; i++){
        cout << "Numero " << (i + 1) << ": ";
        cin >> valores[i];
    }

    //valor invetido
    for(int i = 4; i >= 0; i--){
        cout << valores[i] << ", ";
    }

    return 0;
}