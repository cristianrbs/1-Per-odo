#include<iostream>
#include <cmath>
using namespace std;

double aritmetica(double a, double b, double c){
    double notas;
    notas = (a + b + c) / 3;
    return notas;
}

double ponderada(double a, double b, double c){
    double notas;
    notas = ((a * 3) + (b * 3) + (c * 4)) / 10;
    return notas;
}

double harmonica(double a, double b, double c){
    double notas;
    notas = (1.0 / a + 1.0 / b + 1.0 / c) / 3;
    return 3;
}

int main(){
    double a, b, c,resp;
    int media;

    cout << "Informe as notas do aluno " << endl;
    cout << "Nota 1: ";
    cin >> a;

    cout << "Nota 2: ";
    cin >> b;

    cout << "Nota 3: ";
    cin  >> c;

    cout << "Informe o tipo de media que voce deseja calcular" << endl;
    cout << "1 - Aritmetica" << endl;
    cout << "2 - Ponderada"  << endl;
    cout << "3 - Harmonica"  << endl;
    cin >> media;

    switch (media){
    case 1:
        resp = aritmetica(a,b,c);
        cout << "Resultado da media aritmeica: " << resp << endl;
        break;

    case 2:
        resp = ponderada(a,b,c);
        cout << "Resultado da media ponderada: " << resp << endl;
        break;

    case 3:
        resp = harmonica(a,b,c);
        cout << "Resultado da media harmonica: " << resp << endl;
        break;    
    
    default:
        cout << "Opcao invalida!";
    }
}