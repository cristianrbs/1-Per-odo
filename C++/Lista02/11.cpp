#include <iostream>
using namespace std;

int main(){
    double idade, salario;
    char estadoCivil;

    cout << "Digite a idade: ";
    cin >> idade;

    while (idade < 0 or idade > 150)
    {
        cout << "Digite a idade: ";
        cin >> idade;
    }

    cout << "Digite o salario: ";
    cin >> salario;

    while (salario < 0)
    {
        cout << "Digite o salario: ";
        cin >> salario;
    }
    

    cout << "Digite o Estado Civil: ";
    cin >> estadoCivil;

    while (estadoCivil != 's' and estadoCivil != 'c' and estadoCivil != 'v' and estadoCivil != 'd')
    {
        cout << "Digite o Estado Civil: ";
        cin >> estadoCivil;
    }
    
}