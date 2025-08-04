#include<iostream>
using namespace std;

void preencher(float ** matriz, int linhas, int colunas){
    for (int l = 0; l < linhas; l++)
    {
        for (int c = 0; c < colunas; c++)
        {
            cout << "Digite o valor da posicao [" << l << "][" << c << "]: ";
            cin >> matriz[l][c];
        }
    }
}

float soma(float ** matriz, int linhas, int colunas){
    float soma = 0;
    cout << "Soma dos elementos da matriz: ";
    for (int l = 0; l < linhas; l++)
    {
        for (int c = 0; c < colunas; c++)
        {
            soma += matriz[l][c];
        }
    }
    return soma;
}

int main(){
        float ** matriz;
    int linhas, colunas;

    cout << "Digite o numero de linhas";
    cin >> linhas;

    cout << "Digite o numero de colunas";
    cin >> colunas;

    matriz = new float*[linhas];

    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = new float[colunas];
    }

    preencher(matriz, linhas, colunas);
    soma(matriz, linhas, colunas);
    
    return 0;
}

