#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double nota1, nota2, nota3, notaFinal;

    cout << "Informe a primeira nota: ";
    cin >> nota1;

    cout << "Informe a segunda nota: ";
    cin >> nota2;

    cout << "Informe a terceira nota: ";
    cin >> nota3;

    notaFinal = (nota1 * 2) + (nota2 * 3) + (nota3 * 5); //Parte de cima da Média Ponderada
    notaFinal = notaFinal / (2 + 3 + 5); //Parte de baixo da Média Ponderada

    cout << "Media Final: " << notaFinal << endl;
    return 0;
}
