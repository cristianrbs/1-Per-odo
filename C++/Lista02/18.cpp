#include<iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c;

    cout << "Serie de Fibonacci: ";
    
    while (a <= 500) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    
    cout << endl;
    return 0;
}