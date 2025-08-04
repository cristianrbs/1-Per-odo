#include<iostream>
using namespace std;


void verificar(char verificaSalario, double salarioAtual){

    if (verificaSalario == 'N')
    {
        cout << "Ok";
    }
    
    else if (verificaSalario % 'N')
    {
        cout << "Informe o valor do seu salario: ";
        cin >> salarioAtual;
    }
    
    else
    {
        cout << "Digite apenas S(para sim) e N(para nao)";
    }
    
}


int main(){
    double novoSalario,salarioAtual;
    char verificaSalario;

    cout << "Voce deseja alterar algum salario?(S/N) ";
    cin >> verificaSalario;

    verificar(verificaSalario,salarioAtual);

    if (salarioAtual >= 1500 and salarioAtual < 2500)
    {
        novoSalario = salarioAtual + (salarioAtual * 0.12);
        cout << "Seu salario atual e R$ " << novoSalario << endl;
    }
    
    else if (salarioAtual >= 2500 and salarioAtual < 3000)
    {
        novoSalario = salarioAtual + (salarioAtual * 0.10);
        cout << "Seu salario atual e R$ " << novoSalario << endl;
    }
    
    else if (salarioAtual >= 3000)
    {
        novoSalario = salarioAtual + (salarioAtual * 0.05);
        cout << "Seu salario atual e R$ " << novoSalario << endl;
    }
    
    else if (salarioAtual <= 1500)
    {
        novoSalario = salarioAtual + (salarioAtual * 0.15);
        cout << "Seu salario atual e R$ " << novoSalario << endl;
    }
    
    else
    {
        cout << "Valor invalido!";
    }
    
    return 0;
} 