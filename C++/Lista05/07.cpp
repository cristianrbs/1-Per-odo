#include<iostream>
using namespace std;

//Crie uma struct chamada "TimeFutebol" que armazene os seguintes dados: nome (string), cidade (string) e quantidade de títulos (int),
//Crie uma função para exibir as informações de um time de futebol.

struct TimeFutebol{
    string nome;
    string cidade;
    int qtd;
};

void exibir(TimeFutebol &t){
    cout << "Time: " << t.nome << endl;
    cout << "Cidade: " << t.cidade << endl;
    cout << "Quantidade de Titulos: " << t.qtd << endl;
}

int main(){
    TimeFutebol t;

    t.nome = "Flamengo";
    t.cidade = "Rio de Janeiro";
    t.qtd = 100;

    exibir(t);

    return 0;
}