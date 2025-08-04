#include<iostream>
using namespace std;

//Array Estatico
/*int main(){
    int valores[5];
    float valores[18];
    bool valores[7];
    char valores[5];
}*/


//exemplo 1
/*int main(){
    float notas[4];

    cout << "Digite as notas: " << endl;

    for(int i = 0; i < 4; i++){
        cout << "Nota " << (i + 1) << ": ";
        cin >> notas[i];
    }

    return 0;
}*/


//exercicio 1
/*int main(){
    double valores[4];

    valores[0] = 1.5;
    valores[1] = 2.5;   
    valores[2] = 3.5;
    valores[3] = 4.5;

    cout << "Valores do array" << endl;
    for(int i = 0; i < 4; i++){
        cout << "Valor " << (i + 1) << ": " << valores[i] << endl;
    }

    return 0;
}*/


//Array Dinamico

//exemplo 1
/*int main(){
    int * p;
    int tamanho;

    cout << "Digite o tamanho do array: ";
    cin >> tamanho;

    p = new int [tamanho];
    cout << "Array de tamanho " << tamanho << " criado." << endl;

    return 0;
}*/

//exercicio 1
/*int main(){
    int * notas;
    int tamanho;

    cout << "Digite o tamanho do array: ";
    cin >> tamanho;

    notas = new int [tamanho];

    for(int i = 0; i < tamanho; i++){
        cout << "Nota " << (i + 1) << ": ";
        cin >> notas[i];
    }

    return 0;
}*/

//exercicio 2
void preencher(float * notas, int tamanho){
    for(int i = 0; i < tamanho; i++){
        cout << "Nota " << (i + 1) << ": ";
        cin >> notas[i];
    }
}

void exibir(float * notas, int tamanho){
    cout << "Notas: ";
    for(int i = 0; i < tamanho; i++){
        cout << notas[i] << ", ";
    }
}


int main(){
    float * notas;
    int tamanho;

    cout << "Digite o tamanho do array: ";
    cin >> tamanho;

    notas = new float [tamanho];

    preencher(notas, tamanho);
    exibir(notas, tamanho);

    return 0;
}