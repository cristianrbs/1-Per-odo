#include<iostream>
using namespace std;

//Crie uma struct chamada "Pessoa" que armazene os seguintes dados: nome (string), idade (int) e altura (float), 
//Crie uma função para preencher os dados de uma pessoa e outra função para exibir esses dados.

struct Pessoa{
    string nome;
    int idade;
    float altura;
};

void preencher(Pessoa &p){
    cout << "Digite o nome: " << endl;
    cin >> p.nome;

    cout << "Dgite a idade: " << endl;
    cin >> p.idade;

    cout << "Digite a altura" << endl;
    cin >> p.altura;
}

void exibir(Pessoa &p){
    cout << "Nome: " << p.nome << endl;
    cout << "Idade: " << p.idade << endl;
    cout << "Altura: " << p.altura << endl;
}

int main(){
    Pessoa p;

    preencher(p);
    exibir(p);

    return 0;
}