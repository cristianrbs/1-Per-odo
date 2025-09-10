/*Crie a classe Carro com os seguintes atributos: marca, modelo, ano, cor.

Implemente os arquivos Carro.h e Carro.cpp.

Faça os métodos getters e setters para cada atributo.

Crie um construtor que receba todos os atributos como parâmetros.

No main.cpp, crie dois carros e preencha os atributos de apenas um deles.*/

#include "Carros.h"
using namespace std;

Carros::Carros(){
    marca = "";
    modelo = "";
    ano = 0;
    cor = "";
}

//!Getters
string Carros::getMarca(){
    return marca;
}
string Carros::getModelo(){
    return modelo;
}
int Carros::getAno(){
    return ano;
}
string Carros::getCor(){
    return cor;
}

//!Setters
void Carros::setMarca(string marca){
    this->marca = marca;
}
void Carros::setModelo(string modelo){
    this->modelo = modelo;
}
void Carros::setAno(int ano){
    this->ano = ano;
}
void Carros::setCor(string cor){
    this->cor = cor;
}

int main(){
    Carros C1;

    C1.setMarca("Camaro");
    C1.setModelo("Qualquer um");
    C1.setAno(2006);
    C1.setCor("Amarelo");

    return 0;
}