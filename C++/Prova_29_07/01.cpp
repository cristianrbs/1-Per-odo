#include<iostream>
using namespace std;

struct Cliente{
    string nome;
    int idade;
};

struct Plataforma{
    string nome;
    string site;
};

struct Jogo1{
    string nome;
    string genero;
    float preco;
};

struct Jogo2{
    string nome;
    string genero;
    float preco;
};

struct Compra{
    int codigo;
    Cliente cliente;
    Plataforma plataforma;
    Jogo1 * jogos1;
    Jogo2 * jogos2;
    int qtd;
};

void imprimirCompra(Compra &c){
    cout << "Codigo na compra: " << c.codigo << endl;
    cout << "Cliente: " << c.cliente.nome << endl;
    cout << "Idade: " << c.cliente.idade << endl;
    cout << "Plataforma: " << c.plataforma.nome << endl;
    cout << "Site: " << c.plataforma.site << endl;
    cout << "Jogos comprados:" << endl;
    for (int i = 0; i < c.qtd; i++)
    {
        cout << c.jogos1[i].nome << ", " << endl;
        cout << c.jogos2[i].nome << ", " << endl;
    }
}

float calcularSoma(Compra &c){
    imprimirCompra(c);
    float soma = 0;
    for (int i = 0; i < c.qtd; i++)
    {
        soma += c.jogos1[i].preco;
    }
    return soma;
}

//g
void calculaGasto(Compra &c){
    calcularSoma(c);
    for (int i = 0; i < c.qtd; i++)
    {
        if (c.jogos1[i].preco > c.jogos2[i].preco)
        {
            cout << c.cliente.nome;
        }
        else
        {
            cout << c.cliente.nome;
        }
    }
}

//h
void verificaJogo(Compra &c, Jogo1 &j){
    bool encontrado = false;
    for (int i = 0; i < c.qtd; i++)
    {
        if (c.jogos1[i].nome == j.nome)
        {
            encontrado = true;
        }
        else
        {
            encontrado = false;
        }
    }
}

int main(){
    Cliente cl;
    Plataforma p;
    Jogo1 j;
    Jogo2 j;
    Compra c;
    int codigo;
    
    c.cliente.nome = "Cristian";
    c.cliente.idade = 18;
    c.plataforma.nome = "PC";

    c.cliente.nome = "Rubens";
    c.cliente.idade = 18;
    c.plataforma.nome = "Console";
    
    cout << "Quantos jogos deseja comprar: " << endl;
    cin >> c.qtd;
    c.jogos1 = new Jogo1 [c.qtd];
    c.jogos2 = new Jogo2 [c.qtd];

    for (int i = 0; i < c.qtd; i++)
    {
        cout << "Nome do Jogo: " << i + 1 << ": ";
        cin >> c.jogos1[i].nome;
        cout << "Qual o genero: " << i + 1 << ": ";
        cin >> c.jogos2[i].genero;
    }

    for (int i = 0; i < c.qtd; i++)
    {
        cout << "Nome do Jogo: " << i + 1 << ": ";
        cin >> c.jogos1[i].nome;
        cout << "Qual o genero: " << i + 1 << ": ";
        cin >> c.jogos2[i].genero;
    }

    calculaGasto(c);
    verificaJogo(c,j);

    return 0;
}


