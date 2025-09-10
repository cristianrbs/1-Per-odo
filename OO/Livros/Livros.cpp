/*Faça a classe Livro, cujos atributos são: nome, autor, numeroPaginas, editora. 
Faça os dois arquivos Livro.h e Livro.cpp conforme vimos na aula. 
Crie os metodos getters e setters, e o construtor. 
Em seguida faça crie dois livros na função main e preencha os atributos de um deles.*/

#include"Livros.h";
using namespace std;

Livros::Livros(){
    nome = "";
    autor = "";
    numPaginas = 0;
    editora = "";
}

//!Getters
string Livros::getNome(){
    return nome;
}
string Livros::getAutor(){
    return autor;
}
int Livros::getNumPaginas(){
    return numPaginas;
}
string Livros::getEditora(){
    return editora;
}

//!Setters
void Livros::setNome(string nome){
    this->nome = nome;
}
void Livros::setAutor(string autor){
    this->autor = autor;
}
void Livros::setNumPaginas(int numPaginas){
    this->numPaginas = numPaginas;
}
void Livros::setEditora(string editora){
    this->editora = editora;
}

int main(){
    Livros L1;

    L1.setNome("Diário de um banana");
    L1.setAutor("Sla");
    L1.setNumPaginas(250);
    L1.setEditora("Tenho nem ideia");

    return 0;
}


