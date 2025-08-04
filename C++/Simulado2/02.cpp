#include<iostream>
using namespace std;

int fatorial(float n){
    if (n == 0)
    {
        return 1;
    }
    
    else
    {
        return n * fatorial(n - 1);
    }
}


int main(){
    float n = 0, resp;

    while (n <= 0)
    {
        cout << "Digite um numero: ";
        cin >> n;
    }
    
    resp = fatorial(n);
    
    cout << "Fatorial de " << n << " = " << resp << endl;

    return 0;
}