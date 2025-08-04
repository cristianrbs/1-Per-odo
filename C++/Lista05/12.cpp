#include<iostream>
using namespace std;

//Crie uma struct chamada "Carro" que armazene a marca (string), modelo (string) e ano (int). Adicione um método para exibir as informações do carro. 
//Adicionar um método significa colocar a função dentro da struct

struct Carro{
    string marca;
    string modelo;
    int ano;
};

void exibir(Carro &c){
    cout << "Carro: " << c.marca << endl;
    cout << "Modelo: " << c.modelo << endl;
    cout << "Ano: " << c.ano << endl;
}

int main(){
    Carro c;

    c.marca = "Toyota";
    c.modelo = "Corolla Altis";
    c.ano = 2022;

    exibir(c);

    return 0;
}