#include <iostream>
using namespace std;

int somatorioTriangularInferior(int** matriz, int tamanho) {
    int soma = 0;
    cout << "Matriz triangular inferior:\n";
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (j <= i) {
                cout << matriz[i][j] << " ";
                soma += matriz[i][j];
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return soma;
}

void compararSomas(int** m1, int** m2, int tamanho) {
    int soma1 = 0;
    int soma2 = 0;

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (!(i == 0 && j == 1)) {
                soma1 += m1[i][j];
                soma2 += m2[i][j];
            }
        }
    }

    cout << "Soma da primeira matriz: " << soma1 << endl;
    cout << "Soma da segunda matriz: " << soma2 << endl;

    if (soma1 > soma2) {
        cout << "A primeira matriz tem a maior soma.\n";
    } else if (soma2 > soma1) {
        cout << "A segunda matriz tem a maior soma.\n";
    } else {
        cout << "As duas matrizes têm somas iguais.\n";
    }
}

void substituirNumero(int** matriz, int tamanho, int numero) {
    int substituicoesColuna[100] = {0}; 

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (matriz[i][j] == numero) {
                matriz[i][j] = 0;
                substituicoesColuna[j]++;
            }
        }
    }

    cout << "Matriz após substituições:\n";
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    int max = substituicoesColuna[0];
    int colunaMax = 0;
    for (int j = 1; j < tamanho; j++) {
        if (substituicoesColuna[j] > max) {
            max = substituicoesColuna[j];
            colunaMax = j;
        }
    }

    cout << "A coluna com mais substituições é a coluna " << colunaMax << ".\n";
}

void preencherMatriz(int** matriz, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            cout << "Digite o valor da posição [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

int** criarMatriz(int tamanho) {
    int** matriz = new int*[tamanho];
    for (int i = 0; i < tamanho; i++) {
        matriz[i] = new int[tamanho];
    }
    return matriz;
}

int main() {
    int tamanho;

    cout << "Digite o tamanho das matrizes quadradas: ";
    cin >> tamanho;

    int** matriz1 = criarMatriz(tamanho);
    int** matriz2 = criarMatriz(tamanho);

    cout << "\nPreenchendo a primeira matriz:\n";
    preencherMatriz(matriz1, tamanho);

    cout << "\nPreenchendo a segunda matriz:\n";
    preencherMatriz(matriz2, tamanho);

    int soma = somatorioTriangularInferior(matriz1, tamanho);
    cout << "Somatório da triangular inferior: " << soma << "\n";

    compararSomas(matriz1, matriz2, tamanho);

    int numeroAlvo;
    cout << "Digite um número a ser substituído por zero: ";
    cin >> numeroAlvo;
    substituirNumero(matriz2, tamanho, numeroAlvo);

    return 0;
}
