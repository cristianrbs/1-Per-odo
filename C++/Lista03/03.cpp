#include<iostream>
using namespace std;

int main(){
    double  * P;
    double c = 8;
    P = &c;

    cout << "endereco de c: " << &c << endl;
    cout <<"Endereco de P: " <<  &P << endl;

    return 0;
}