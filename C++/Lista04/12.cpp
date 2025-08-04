#include<iostream>
using namespace std;

int main(){
    string nome[50];
    float altura[50];
    char sexo[50];

    float maiorAltura = 0;
    float menorAltura = 1000;

    float mediaAltura = 0;

    float somaAlturaMulheres = 0;
    int qtdMulheres = 0;

    float somaAlturaTurma = 0;


    for (int i = 0; i < 50; i++)
    {
        cout << "Digite o nome do aluno " << (i + 1) << ": ";
        cin >> nome[i];
        cout << "Digite a altura do aluno " << (i + 1) << ": ";
        cin >> altura[i];
        cout << "Digite o sexo do aluno " << (i + 1) << " (M/F): ";
        cin >> sexo[i];
    }
    
    for (int i = 0; i < 50; i++)
    {
        if (altura[i] > maiorAltura)
        {
            maiorAltura = altura[i];
        }
        if (altura[i] < menorAltura)
        {
            menorAltura = altura[i];
        }
    }

    cout << "Maior altura: " << maiorAltura << endl;
    cout << "Menor altura: " << menorAltura << endl;

//chatGPT   
for (int i = 0; i < 50; i++)
{
    if (sexo[i] == 'F' || sexo[i] == 'f')
    {
        somaAlturaMulheres += altura[i];
        qtdMulheres++;
    }
}

float mediaMulheres = (qtdMulheres > 0) ? (somaAlturaMulheres / qtdMulheres) : 0;
cout << "Média de altura das mulheres: " << mediaMulheres << endl;

cout << "Mulheres com altura acima da média das mulheres:" << endl;
for (int i = 0; i < 50; i++) {
    if ((sexo[i] == 'F' || sexo[i] == 'f') && altura[i] > mediaMulheres) {
        cout << nome[i] << " - Altura: " << altura[i] << endl;
    }
}

//chatGPT
for (int i = 0; i < 50; i++) {
    somaAlturaTurma += altura[i];
}
mediaAltura = somaAlturaTurma / 50;
cout << "Média de altura da turma: " << mediaAltura << endl;


    cout << "Alunos com altura abaixo da média da turma:" << endl;
    for (int i = 0; i < 50; i++)
    {
        if (altura[i] < mediaAltura)
        {
            cout << nome[i] << " - Altura: " << altura[i] << endl;
        }
    }

    return 0;
}