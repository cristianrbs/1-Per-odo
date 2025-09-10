/*Crie a classe Carro com os seguintes atributos: marca, modelo, ano, cor.

Implemente os arquivos Carro.h e Carro.cpp.

Faça os métodos getters e setters para cada atributo.

Crie um construtor que receba todos os atributos como parâmetros.

No main.cpp, crie dois carros e preencha os atributos de apenas um deles.*/

#ifndef Crros_H
#define Carrros_H

#include<string>
using namespace std;

class Carros
{
private:
    string marca;
    string modelo;
    int ano;
    string cor;
public:
    Carros();

    //!Getters
    string getMarca();
    string getModelo();
    int getAno();
    string getCor();

    //!Setters
    void setMarca(string marca);
    void setModelo(string modelo);
    void setAno(int ano);
    void setCor(string cor);
};

#endif