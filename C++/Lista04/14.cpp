#include<iostream>
using namespace std;


void preencher(int * vetor, int tamanho){
    
    cout << "Digite os valores do vetor" << endl;
    for(int i = 0; i < tamanho; i++){
        cout << "numero " << (i + 1) << ": ";
        cin >> vetor[i];

        if (vetor[i] % 2 == 0)
    {
        cout << "Numero invalido" << endl;
        i--;
    }
    }
}

/*int main(){
    int * vetor;
    int tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    vetor = new int[tamanho];

    preencher(vetor, tamanho);

    return 0;
}

#include<iostream>



using namespace std;



bool par(int v) {

if (v % 2 == 0) {

return true;

} else {

return false;

}

}



bool pesquisa(int * v, int indice, int n) {

for (int i = 0; i < indice; i++) {

if (v[i] == n) {

return true;

}

}

return false;

}



void preencheVetor(int * v, int tam) {

int numero;

bool condicao = true;

for (int i = 0; i < tam; i++) {

do {

cout << "V[" << i << "]: ";

cin >> numero;

if (par(numero)) {

condicao = true;

} else {

condicao = pesquisa(v, i, numero);

}

}while(condicao == true);

v[i] = numero;

}

}




int main() {

int *vetor;

int tamanho;

cout << "Informe tamanho do vetor: ";

cin >> tamanho;

vetor = new int[tamanho];

preencheVetor(vetor, tamanho);

return 0;

}*/