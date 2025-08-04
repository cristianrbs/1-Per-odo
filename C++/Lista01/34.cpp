#include<iostream>
using namespace std;

double maior(double a, double b, double c){
    double notas;

    if ((a > b) && (a > c))
    {
        notas = ((a * 4) + (b * 3) + (c * 3)) / 10;
        cout << "Media ponderada: " << notas << endl;
        
        if (notas >= 50)
        {
            cout << "APROVADO!";
        }

        else
        {
            cout << "REPROVADO!";
        }
        
        
    }

    else if ((b > a) && (b > c))
    {
        notas = ((a * 3) + (b * 4) + (c * 3)) / 10;
        cout << "Media ponderada: " << notas << endl;

        if (notas >= 50)
        {
            cout << "APROVADO!";
        }

        else
        {
            cout << "REPROVADO!";
        }
    }

    else
    {
        notas = ((a * 3) + (b * 3) + (c * 4)) / 10;
        cout << "Media ponderada: " << notas << endl;

        if (notas >= 50)
        {
            cout << "APROVADO!";
        }

        else
        {
            cout << "REPROVADO!";
        }
    }

    return notas;
}


int main(){
    double a, b, c,matricula;

    cout << "---------  Prezado aluno -------------"  << endl;
    cout << "Informe seu codigo/matricula: "          << endl;
    cin >> matricula;
    cout << "Informe a nota 1: "                      << endl;
    cin >> a;   
    cout << "Informe a nota 2: "                      << endl;
    cin >> b;
    cout << "Informe a nota 3: "                      << endl;
    cin >> c;
    cout << "---------------------------------------" << endl;

    maior(a,b,c);

    return 0;
}