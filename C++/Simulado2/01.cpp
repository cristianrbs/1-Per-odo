#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int main(){
    int n = 1, contador = 0;

    while (n != 0)
    {
        cout << "Digite os numeros: ";
        cin >> n;

        if (n % 2 == 0 and n > 0) 
        {
            contador++;
        }
    }
        cout << contador <<  " Numeros sao pares e positivos." << endl;

    return 0;
}
