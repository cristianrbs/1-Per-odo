#include<iostream>
using namespace std;

int main(){
    int n = 0, contador1 = 0, contador2 = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite os numeros: ";
        cin >> n;

        if (n % 2 == 0) 
        {
            contador1++;
        }

        else if (n % 2 != 0) 
        {
            contador2++;
        }

        else 
        {
            cout << "Numero invalido" << endl;
            i--;
        }
    } 
    cout << "Quantidade de numeros pares: " << contador1 << endl;
    cout << "Quantidade de numeros impares: " << contador2 << endl; 
    
    return 0;
}