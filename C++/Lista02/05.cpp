#include<iostream>
using namespace std;

//imprimir numeros impares de 1 a 50
int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 != 0) {
            cout << i << " , ";
        }
    }
    cout << endl;
    return 0;
}