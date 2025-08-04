#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float saldo = 500.00;
    float juros = 0.01;

   //Mês 1
   saldo = saldo + (saldo * juros);

   //Mês 2
    saldo = saldo + 200.00;
    saldo = saldo + (saldo * juros);

   //Mês 3
    saldo = saldo - 50.00;
    saldo = saldo + (saldo * juros);
    cout << "Havera nessa conta no quarto mes: " << saldo << endl;
    return 0;
}