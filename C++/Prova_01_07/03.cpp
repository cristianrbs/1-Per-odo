#include<iostream>
#include<math.h>
using namespace std;

void exibir(float * vetor1, float * vetor2, int tam2){
    int resp, maior = 0,menor = 0;
    cout << "Valores Armazenados" << endl;
    for (int i = 0; i < tam2; i++)
    {
        resp = (vetor1[i] * vetor1[i]);
        vetor2[i] = resp;
        cout << vetor2[i] << ", ";
    }

    for (int i = 0; i < tam2; i++)
    {
        if (vetor2[i] > maior)
        {
            maior == vetor2[i];
        }
        
        else if (maior > menor * 2)
        {
            cout << maior;
        }
    }
    
}


int main(){
    float * vetor1;
    float * vetor2;
    int tam1, tam2;

    cout << "Digite o tamanho do vetor 1: ";
    cin >> tam1;

    cout << "Digite o tamanho do vetor 2: ";
    cin >> tam2;

    vetor1 = new float [tam1];
    vetor2 = new float [tam2];

    if (tam1 < tam2 and tam1 > tam2)
    {
        tam1 = tam2;
    }

    cout << "Digite os numeros"<< endl;
    for(int i = 0; i < tam2; i++){
        cout << "Valor " << (i + 1) << ": ";
        cin >> vetor1[i];
    }

    exibir(vetor1,vetor2,tam2);

    return 0;
}