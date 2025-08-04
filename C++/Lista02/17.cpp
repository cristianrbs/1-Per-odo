#include<iostream>
using namespace std;


int main() {
    int n, a = 1, b = 1, c;

    cout << "Digite o valor de n: ";
    cin >> n;

    if (n <= 0) {
        cout << "O valor de n deve ser maior que 0." << endl;
        return 1;
    }

    cout << "Serie de Fibonacci ate o " << n << "º termo: ";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    
    cout << endl;
    return 0;
}