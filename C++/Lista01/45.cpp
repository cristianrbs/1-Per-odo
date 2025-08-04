#include<iostream>
using namespace std;

void cedulas(float total){
    int c100, c50, c10, c5, c1;

    c100 = total / 100;
    total = total - 100 * c100;

    c50 = total / 50;
    total = total - 50 * c50;

    c10 = total / 10;
    total = total - 10 * c10;

    c5 = total / 5;
    total = total - 5 * c5;

    c1 = total;

    cout << "- Cédulas de R$100: " << c100 << endl;
    cout << "- Cédulas de R$50: "  << c50 << endl;
    cout << "- Cédulas de R$10: "  << c10 << endl;
    cout << "- Cédulas de R$5: "  << c5 << endl;
    cout << "- Cédulas de R$1: "  << c1 << endl;
}

int main(){
    float total;

    cout << "informe o valor em R$: ";
    cin >> total;
    cout << "Valor informado: R$"  << total << endl;
    
    cedulas(total);
    
    return 0;
}