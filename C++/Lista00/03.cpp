#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int anos, meses, dias, totalDias;

    cout << "Informe qtos anos: ";
    cin >> anos;
    
    cout << "Informe qtos meses: ";
    cin >> meses;

    cout << "Informe qtos dias: ";
    cin >> dias;

    
    totalDias = (anos * 365) + (meses * 30) + dias;
    
    cout << "Quantidade de dias de vida: " << totalDias << endl;
    return 0;
}