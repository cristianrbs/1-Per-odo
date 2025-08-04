#include<iostream>
using namespace std;

void preencher(float * n, int tamanho){
    float verifica;

    for(int i = 0; i < tamanho; i++){
        cout << "numero " << (i + 1) << ": ";
        cin >> n[i];
    }

    cout << "Digite um novo numero: " << endl;
    cin >> verifica;

    bool existe = false;
    for (int i = 0; i < tamanho; i++)
    {
        if (n[i] == verifica)
        {
            existe = true;
            cout << "Esse numero aparece na(s) posição(s): " << i << endl;
        }
    }
}

int main(){
    float * n;
    int tamanho;

    cout << "Digite o tamanho do array: ";
    cin >> tamanho;

    n = new float [tamanho];

    preencher(n, tamanho);

    return 0;
}
