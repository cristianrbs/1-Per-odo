#include<iostream>
using namespace std;

//Crie uma struct chamada "Livro" que armazene os seguintes dados: título (string), autor (string) e ano de publicação (int),
//Crie uma função para exibir as informações de um livro.
struct Livro{
    string titulo;
    string autor;
    int ano;
};

void exibir(Livro &l){
    cout << "Livro: " << l.titulo << endl;
    cout << "Autor: " << l.autor << endl;
    cout << "Ano da publicacao: " << l.ano << endl;
}

int main(){
    Livro l;

    l.titulo = "Dom Casmurro";
    l.autor = "Machado de Assis";
    l.ano = 1899;

    exibir(l);

    return  0;
}