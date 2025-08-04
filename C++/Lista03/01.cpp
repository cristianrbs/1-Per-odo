#include<iostream>
using namespace std;

int main(){
    int var;
    int * ptr;
    var = 10;
    ptr = &var;

    cout << "Valor de var: " << var << endl;
    cout << "Endereco de var: " << &var << endl; 
    cout << "valor de ptr: " << ptr << endl;
    cout << "valor apontado para ptr: " << * ptr << endl;
    cout << "endereco de ptr: " << &ptr << endl;

    return 0;
}