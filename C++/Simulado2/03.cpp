#include<iostream>
using namespace std;

void vetores(float * vetor1, float * vetor2, int tam1, int tam2){
    int soma = 0;
    for(int i = 0; i < tam2; i++){
        cout << "Vetor 2" << (i + 1) << ": ";
        cin >> vetor2[i];
        }

        for(int i = 0; i < tam1; i++){
        cout << "Vetor 1" << (i + 1) << ": ";
        cin >> vetor1[i];
    }

    for (int i = 0; i < tam1; i++)
    {
        vetor2[i] = vetor1[i];
    }
    
    for (int i = tam1; i < tam2; i++)
    {
        vetor2[i] = 5;
    }

    for (int i = 0; i < tam1; i++)
    {
        soma += vetor1[i];
    }
}


int main(){
    int tam1, tam2;
    float * vetor1, * vetor2;

    cout << "Digite o tamanho do vetor: ";
    cin >> tam1;

    cout << "Digite o tamanho do segundo vetor: ";
    cin >> tam2;

    if (tam1 > tam2)
    {
        vetor1 = new float[tam1];
    }

    else if (tam1 < tam2)
    {
        vetor1 = new float[tam2];
    }
    
    else
    {
        cout << "Os vetores devem ter tamanhos diferentes." << endl;
        return 1;
    }
    
    vetores(vetor1, vetor2, tam1, tam2);
}