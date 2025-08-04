#include<iostream>
using namespace std;

int main(){
    int n, contador1 = 0, contador2 = 0;
    int resto;

    while (n != 0)
    {
        resto = n / 11;
        cout << "Digite os numeros: ";
        cin >> n;

        if (n % 3 == 0 and n % 11 == 0)
        {
            contador1++;
        }

        else if ( n % 5 == 0 and resto % 5 == 0)
        {
            contador2++;
        }
        
    }

    cout << contador1 << " numeros sao resto multiplo de 3." << endl;
    cout << contador2 << " numeros sao multiplos de 5." << endl;
    
    return 0;
}