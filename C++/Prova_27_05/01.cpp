#include<iostream>
using namespace std;

int verifica(int a, int b, int c){

    if (a % 2 == 0 and c % 2 == 0)
    {
        cout << "O primeiro e o ultimo valor sao pares!" << endl;
    }
    
    else if (c == b or c > a)
    {
        cout << "QUINTAL" << endl;
    }
    
    else
    {
        return 25;
    }
}


int main(){
    int a,b,c,resp;

    cout << "Informe o primeiro numero(inteito): " << endl;
    cin >> a;
    cout << "Informe o segundo numero(inteito): " << endl;
    cin >> b;
    cout << "Informe o terceiro numero(inteito): " << endl;
    cin >> c;

    resp = verifica(a,b,c);

    if (resp == 25)
    {
        cout << "Prova Legal";
    }
    
    else
    {
        cout << "Feito";
    }

    return 0;
}