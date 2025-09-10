/*Crie a classe Filme com os atributos: titulo, diretor, duracaoMinutos, genero.

Implemente Filme.h e Filme.cpp.

Crie os getters e setters.

Adicione um construtor que inicializa apenas o título e o diretor.

No main.cpp, crie três filmes e preencha os atributos de um deles manualmente.*/

#ifndef Filmes_H
#define Filmes_H

#include<string>
using namespace std;

class Filmes
{
private:
    string titulo;
    string diretor;
    int duracaoMin;
    string genero;
public:
    Filmes();

    //!Getters
    string getTitulo();
    string getDiretor();
    int getDuracaoMin();
    string getGenero();

    //!Setters
    void setTitulo(string titulo);
    void setDiretor(string diretor);
    void setDuracaoMin(int duracoMin);
    void setGenero(string genero);
};

#endif