#include<iostream>
using namespace std;

//Crie uma struct chamada "Aluno" que armazene os seguintes dados: matrícula (int), nome (string) e notas (array de floats),
//Crie uma função para preencher as notas de um aluno e outra função para calcular a média das notas.

struct Aluno{
    int matricula;
    string nome;
    int numNotas;
    float * notas;
};

    void preencher(Aluno &a){
        cout << "Digite a quantidade de notas: " << endl;
        cin >> a.numNotas;

        a.notas = new float [a.numNotas];

        for(int i = 0; i < a.numNotas; i++){
        cout << "Nota " << (i + 1) << ": ";
        cin >> a.notas[i];
    }
}

void calculaMedia(Aluno &a){
    float media = 0;
    float soma = 0;

    for(int i = 0; i < a.numNotas; i++){
        soma += a.notas[i];
    }

    media = soma / a.numNotas;

    cout << "Media das notas: " << media << endl;
}

int main(){
    Aluno a;

    preencher(a);
    calculaMedia(a);

    return 0;
}