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

/*#include <iostream>
using namespace std;

struct Professor {
    string nomeP;
    int idade;
    string areaAtuacao;
};

struct Aluno {
    string nomeA;
    int idade;
    string curso;
};

struct Turma {
    string nomeT;
    Professor professor;
    Aluno *aluno;
    int tamA;
};

void verificaAluno(Turma &t, string vAluno) {
    cout << "\nNome da Turma: " << t.nomeT << endl;
    cout << "Nome do Professor: " << t.professor.nomeP << endl;

    bool encontrado = false;
    cout << "Alunos da turma:\n";
    for (int i = 0; i < t.tamA; i++) {
        cout << t.aluno[i].nomeA << endl;
        if (t.aluno[i].nomeA == vAluno) {
            encontrado = true;
        }
    }

    if (encontrado)
        cout << "Esse aluno está matriculado nessa turma!\n";
    else
        cout << "Esse aluno NÃO está matriculado nessa turma!\n";
}

int verificaCurso(Turma &t, string vCurso) {
    int contador = 0;
    for (int i = 0; i < t.tamA; i++) {
        if (t.aluno[i].curso == vCurso) {
            contador++;
        }
    }
    return contador;
}

int main() {
    Turma t;
    string vAluno;
    string vCurso;

    cout << "Digite a quantidade de alunos: ";
    cin >> t.tamA;

    t.aluno = new Aluno[t.tamA];

    cout << "Digite os dados dos alunos:\n";
    for (int i = 0; i < t.tamA; i++) {
        cout << "Aluno " << i + 1 << " - Nome: ";
        cin >> t.aluno[i].nomeA;
        cout << "Aluno " << i + 1 << " - Curso: ";
        cin >> t.aluno[i].curso;
    }

    t.nomeT = "Ciencia da Computacao";
    t.professor.nomeP = "Gustavo";
    t.professor.idade = 40;
    t.professor.areaAtuacao = "Programacao";

    cout << "\nDigite o nome do aluno a ser verificado: ";
    cin >> vAluno;
    verificaAluno(t, vAluno);

    cout << "\nDigite o curso a ser verificado: ";
    cin >> vCurso;
    int total = verificaCurso(t, vCurso);
    cout << "Total de alunos no curso '" << vCurso << "': " << total << endl;
    
    return 0;
}*/

