#include<iostream>
using namespace std;

int main(){

    //Explique o que significa o operador * (asterisco) em cada um dos seguintes casos:

    int x;
    int * p; //declaração de ponteiro

    cout << *p; //Mostrando o valor do ponteiro

    *p =  x* 5; //Multiplicando o valor de x por 5 e atribuindo ao ponteiro

    cout<<*(p+1); //Mostrando o valor do ponteiro incrementado em 1

    return 0;
}