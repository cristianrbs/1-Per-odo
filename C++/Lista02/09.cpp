#include<iostream>
using namespace std;

int main(){
    double n;

    cout << "Digite sua nota: ";
    cin >> n;

    while (n < 0 or n >10)
    {
        if (n < 0)
        {
            cout << "Nota Invalida" << endl;
            cout << "Digite sua nota: ";
            cin >> n;
            continue;
        }
        
        else if (n > 10)
        {
            cout << "Nota Invalida" << endl;
            cout << "Digite sua nota: ";
            cin >> n;
            continue;
        }
    }
    
}