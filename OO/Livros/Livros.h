/* Faça a classe Livro, cujos atributos são: nome, autor, numeroPaginas, editora. 
Faça os dois arquivos Livro.h e Livro.cpp conforme vimos na aula. 
Crie os metodos getters e setters, e o construtor. 
Em seguida faça crie dois livros na função main e preencha os atributos de um deles.*/

#ifndef Livros_H
#define Livros_H

#include<string>;
using namespace std;

class Livros
{
private:
    string nome;
    string autor;
    int numPaginas;
    string editora;
public:
    Livros();
    
    //!Getter
    string getNome();
    string getAutor();
    int getNumPaginas();
    string getEditora();

    //!Setters
    void setNome(string nome);
    void setAutor(string nome);
    void setNumPaginas(int numPaginas);
    void setEditora(string editora);
};

#endif
