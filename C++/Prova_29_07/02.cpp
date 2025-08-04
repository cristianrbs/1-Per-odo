#include <iostream>
using namespace std;

int contarNegativosColunasPares(int** matriz, int tamanho) {
    int cont = 0;
    for (int j = 0; j < tamanho; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < tamanho; i++) {
                if (matriz[i][j] < 0) {
                    cont++;
                }
            }
        }
    }
    return cont;
}


int somarDiagonalSecundaria(int** matriz, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += matriz[i][tamanho - 1 - i];
    }
    return soma;
}


int produtorioDiagonalPrincipal(int** matriz, int tamanho) {
    int produto = 1;
    for (int i = 0; i < tamanho; i++) {
        produto *= matriz[i][i];
    }
    return produto;
}


bool compararSomaEProduto(int** m1, int** m2, int tamanho) {
    int somaSec = somarDiagonalSecundaria(m1, tamanho);
    int prodDiag = produtorioDiagonalPrincipal(m2, tamanho);

    if (somaSec > prodDiag) {
        return false;
    } else {
        return true;
    }
}


void sobrescreverLinha2ComColuna2(int** matriz, int tamanho) {
    for (int j = 0; j < tamanho; j++) {
        matriz[1][j] = matriz[j][1];
    }
}


void imprimirIndicesDoValor(int** matriz, int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (matriz[i][j] == valor) {
                cout << "Valor encontrado em: [" << i << "][" << j << "]" << endl;
            }
        }
    }
}


int main() {
    int tamanho = 3;


    int** matriz1 = new int*[tamanho];
    for (int i = 0; i < tamanho; i++) {
        matriz1[i] = new int[tamanho];
    }


    matriz1[0][0] = -1; matriz1[0][1] = 2;  matriz1[0][2] = -3;
    matriz1[1][0] = 4;  matriz1[1][1] = -5; matriz1[1][2] = 6;
    matriz1[2][0] = 7;  matriz1[2][1] = 8;  matriz1[2][2] = -9;


    int** matriz2 = new int*[tamanho];
    for (int i = 0; i < tamanho; i++) {
        matriz2[i] = new int[tamanho];
    }


    matriz2[0][0] = 1; matriz2[0][1] = 2; matriz2[0][2] = 3;
    matriz2[1][0] = 4; matriz2[1][1] = 5; matriz2[1][2] = 6;
    matriz2[2][0] = 7; matriz2[2][1] = 8; matriz2[2][2] = 9;


    int negativos = contarNegativosColunasPares(matriz1, tamanho);
    cout << "Negativos nas colunas pares: " << negativos << endl;


    int somaSec = somarDiagonalSecundaria(matriz1, tamanho);
    cout << "Soma da diagonal secundaria: " << somaSec << endl;

    int produtoDiag = produtorioDiagonalPrincipal(matriz2, tamanho);
    cout << "Produto da diagonal principal: " << produtoDiag << endl;


    bool resultado = compararSomaEProduto(matriz1, matriz2, tamanho);
    cout << "Resultado da comparacao (true = OK): " << resultado << endl;

    sobrescreverLinha2ComColuna2(matriz1, tamanho);
    cout << "Matriz1 apos sobrescrever linha 2 com coluna 2:" << endl;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }


    cout << "Procurando valor 8 na matriz1:" << endl;
    imprimirIndicesDoValor(matriz1, tamanho, 8);

    return 0;
}
