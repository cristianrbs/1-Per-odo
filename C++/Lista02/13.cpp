#include<iostream>
using namespace std;

double calcular(double a, double b, double taxaA, double taxaB) {
    double anos = 0;
    while (a < b) {
        a += a * (taxaA / 100);
        b += b * (taxaB / 100);
        anos++;
    }
    return anos;
}


int main(){
    double a, b, taxaA, taxaB, anos;

    cout << "Digite a populacao do pais A: ";
    cin >> a;

    cout << "Digite a populacao do pais B: ";
    cin >> b;

    cout << "Digite a taxa de crescimento anual do pais A (em %): ";
    cin >> taxaA;

    cout << "Digite a taxa de crescimento anual do pais B (em %): ";
    cin >> taxaB;

    anos = calcular(a, b, taxaA, taxaB);

    cout << "O numero de anos necessarios para que a populacao do pais A ultrapasse a do pais B: " << anos << endl;
    return 0;
}