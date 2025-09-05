#include<iostream>
using namespace std;

/*a) Crie uma estrutura  chamada Sargento com os seguintes dados: nome, idade.
b) Crie uma estrutura  chamada Soldado com os seguintes dados: nome, idade.
c) Crie uma estrutura  chamada Tropa com os seguintes dados: nome da tropa, um Sargento, um vetor 
dinâmico de Soldado’s.
d) Crie uma função que receba como parâmetro uma Tropa e um Soldado. Imprima todos os dados da 
Tropa. Verifique e imprima se o Soldado passado como parâmetro faz parte dessa Tropa.
e) Crie uma função que receba como parâmetro uma Tropa e um número inteiro. Retorne quantos sol
dados possuem idade igual ao número inteiro passado como parâmetro.
f)
No main, chame as funções. Inicialize as estruturas da maneira que for necessário para serem pas
sadas como parâmetros.*/

struct Sargento {
    string nome;
    int idade;
};

struct Soldado {
    string nome;
    int idade;
};

struct Tropa {
    string nome;
    Sargento sargento;
    Soldado* soldados;
    int numSoldados;
};

void exibir(Tropa& t, Soldado& s) {
    cout << "Nome da Tropa: " << t.nome << endl;
    cout << "Sargento: " << t.sargento.nome << ", Idade: " << t.sargento.idade << endl;
    cout << "Soldados:\n";
    bool encontrado = false;

    for (int i = 0; i < t.numSoldados; i++) {
        cout << "- " << t.soldados[i].nome << ", Idade: " << t.soldados[i].idade << endl;
        if (t.soldados[i].nome == s.nome && t.soldados[i].idade == s.idade) {
            encontrado = true;
        }
    }

    if (encontrado)
        cout << "Esse soldado faz parte da Tropa!\n";
    else
        cout << "Esse soldado NÃO faz parte da Tropa!\n";
}

int verifica(Tropa& t, int idade) {
    int contador = 0;
    for (int i = 0; i < t.numSoldados; i++) {
        if (t.soldados[i].idade == idade)
            contador++;
    }
    return contador;
}

int main() {
    Tropa t;
    Soldado s;
    int idadeBusca;

    t.nome = "Tropa do Carrossel";
    t.sargento = {"Saymon Gaymer", 40};

    cout << "Quantos soldados deseja cadastrar? ";
    cin >> t.numSoldados;
    t.soldados = new Soldado[t.numSoldados];

    for (int i = 0; i < t.numSoldados; i++) {
        cout << "Nome do soldado " << i + 1 << ": ";
        cin >> t.soldados[i].nome;
        cout << "Idade do soldado " << i + 1 << ": ";
        cin >> t.soldados[i].idade;
    }

    cout << "\nDigite nome do soldado a verificar: ";
    cin >> s.nome;
    cout << "Digite idade do soldado a verificar: ";
    cin >> s.idade;

    exibir(t, s);

    cout << "\nDigite uma idade para contar soldados: ";
    cin >> idadeBusca;
    int resultado = verifica(t, idadeBusca);
    cout << "Quantidade de soldados com idade " << idadeBusca << ": " << resultado << endl;
    return 0;
}
