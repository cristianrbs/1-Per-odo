/*Crie a classe Filme com os atributos: titulo, diretor, duracaoMinutos, genero.

Implemente Filme.h e Filme.cpp.

Crie os getters e setters.

Adicione um construtor que inicializa apenas o título e o diretor.

No main.cpp, crie três filmes e preencha os atributos de um deles manualmente.*/


#include "Filmes.h"
using namespace std;

Filmes::Filmes(){
    titulo = "";
    diretor = "";
    duracaoMin = 0;
    genero = "";
}

//!Geters
string Filmes::getTitulo(){
    return titulo;
}
string Filmes::getDiretor(){
    return diretor;
}
int Filmes::getDuracaoMin(){
    return duracaoMin;
}
string Filmes::getGenero(){
    return genero;
}

//!Setters
void Filmes::setTitulo(string titulo){
    this->titulo = titulo;
}
void Filmes::setDiretor(string diretor){
    this->diretor = diretor;
}
void Filmes::setDuracaoMin(int duracaoMin){
    this->duracaoMin = duracaoMin;
}
void Filmes::setGenero(string genero){
    this->genero = genero;
}

int main(){
    Filmes F1;

    F1.setTitulo("Gato de Botas 2: O Último Pedido");
    F1.setDiretor("Joel Crawford");
    F1.setDuracaoMin(102);
    F1.setGenero("Aventura");

    return 0;
}