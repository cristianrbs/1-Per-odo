#include<iostream>
using namespace std;

int main(){
    double n;

    for (double i = 0; i <= 10; i++)
    {
        cout << "Digite sua nota: ";
        cin >> n;

        if (n < 0)
        {
            cout << "Numero negativo!" << endl;
            break;
        }      
    }
    
    return 0;
}
