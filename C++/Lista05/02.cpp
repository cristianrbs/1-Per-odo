#include<iostream>
using namespace std;

//Crie uma struct chamada "Retângulo" que armazene os seguintes dados: largura (float) e altura (float),
//Crie uma função para calcular a área do retângulo e outra função para calcular o perímetro.

struct Retangulo{
    float largura;
    float altura;
};

void preencher(Retangulo &r){
    cout << "Digite a largura: " << endl;
    cin >> r.largura;

    cout << "Digite a altura: " << endl;
    cin >> r.altura;
}

void calculaArea(Retangulo &r){
    float area = 0;

    area = r.largura * r.altura;

    cout << "Area: " << area << endl;
}

void calculaPerimetro(Retangulo &r){
    float perimetro = 0;

    perimetro = (r.altura + r.altura ) + (r.largura + r.largura);

    cout << "Perimetro: " << perimetro << endl;
}

int main (){
    Retangulo r;

    preencher(r);
    calculaArea(r);
    calculaPerimetro(r);

    return 0;
}