#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int anos, meses, dias, totalDias;
    
    cout << "Informe o total de dias que voce tem: ";
    cin >> totalDias;


    anos = totalDias / 365;         
    totalDias = totalDias % 365;    
    meses = totalDias / 30;          
    dias = totalDias % 30;           

    cout << "\nVoce possui " << anos << " anos, " << meses << " meses e " << dias << " dias." << endl;
    return 0;
}
