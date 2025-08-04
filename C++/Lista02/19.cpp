#include<iostream>
using namespace std;

int main(){
    int n, fatorial = 1;

    cout << "Digite o valor que deseja fatorar: ";
    cin >> n;

    if (n < 0) {
        cout << "Fatorial de numero negativo nao existe." << endl;
        return 1;
    }

    else if (n == 0) {
        cout << "Fatorial de 0 eh: 1" << endl;
        return 0;
    }

    else if (n == 1) {
        cout << "Fatorial de 1 eh: 1" << endl;
        return 0;
    }

    else
    {
        cout <<  "Invalido";
    }
    

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    cout << "Fatorial de " << n << " eh: " << fatorial << endl;
}