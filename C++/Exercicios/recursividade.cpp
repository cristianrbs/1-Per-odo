#include<iostream>
using namespace std;

// Fatorial
/*int fatorial(int n){
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
    int n, resp;

    cout << "Digite um numero: ";
    cin >> n;

    resp = fatorial(n);

    cout << "Fatorial de " << n << " = " << resp << endl;

    return 0;
}*/


// Fibonacci
/*int fibonacci(int n){
    if (n == 0)
    {
        return 0;
    }
    
    else if (n == 1)
    {
        return 1;
    }
    
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    int n, resp;

    cout << "Digite um numero: ";
    cin >> n;

    resp = fibonacci(n);

    cout << "Fibonacci de " << n << " = " << resp << endl;

    return 0;
}*/


// Soma
int soma(int n){
    if (n == 0)
    {
        return 0;
    }
    
    else
    {
        return n + soma(n - 1);
    }
}

int main(){
    int n, resp;

    cout << "Digite um numero: ";
    cin >> n;

    resp = soma(n);

    cout << "Soma de 1 ate " << n << " = " << resp << endl;

    return 0;
}