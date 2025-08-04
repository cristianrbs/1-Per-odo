#include<iostream>
using namespace std;

void preencher(string * nome, double * salario, int * codigo){
    cout << "Digite os nomes" << endl;
    for(int i = 0; i < 5; i++){
        cout << "nome " << (i + 1) << ": ";
        cin >> nome[i];
    }

    cout << "Digite os salarios" << endl;
    for(int i = 0; i < 5; i++){
        cout << "salario " << (i + 1) << ": ";
        cin >> salario[i];
    }

    cout << "Digite os codigos" << endl;
    for(int i = 0; i < 5; i++){
        cout << "numero " << (i + 1) << ": ";
        cin >> codigo[i];
    }
}

void calculaSalario(double * salario){
    double maior;
    double menor;
    
    for(int i = 0; i < 5; i++){
        if (i == 0)
        {
            menor = salario[0];
        }
        
        if(salario[i] > maior){
                maior = salario[i];
            }

        if (salario[i] < menor)
        {
            menor = salario[i];
        }
        
    }
    cout << "O maior salario e: " << maior << endl;
    cout << "O menor salario e: " << menor << endl;
}

void calculaMedia(double * salario){
    float soma1 = 0;
    float soma2 = 0;
    float soma3 = 0;
    float soma4 = 0;
    float soma5 = 0;

    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    int c5 = 0;

    for (int i = 0; i < 6; i++)
    {
        if (salario[i] == 1)
        {
            soma1 += salario[i];
            c1++;
        }
        
        else if (salario[i] == 2)
        {
            soma2 += salario[i];
            c2++;
        }
        
        else if (salario[i] == 3)
        {
            soma3 += salario[i];
            c3++;
        }
        
        else if (salario[i] == 4)
        {
            soma4 += salario[i];
            c4++;
        }
        
        else if (salario[i] == 5)
        {
            soma5 += salario[i];
            c5++;
        }
        
    }

    float media1 = soma1 / c1;
    float media2 = soma2 / c2;
    float media3 = soma3 / c3;
    float media4 = soma4 / c4;
    float media5 = soma5 / c5;

    cout << "Media salarial do setor 1: " << media1 << endl;
    cout << "Media salarial do setor 2: " << media2 << endl;
    cout << "Media salarial do setor 3: " << media3 << endl;
    cout << "Media salarial do setor 4: " << media4 << endl;
    cout << "Media salarial do setor 5: " << media5 << endl;
}

void mediaBaixa(double * salario){

}

int main(){
    string  nome[5];
    double salario[5];
    int codigo[5];

    preencher(nome,salario,codigo);
    calculaSalario(salario);
    calculaMedia(salario);

    return 0;
}