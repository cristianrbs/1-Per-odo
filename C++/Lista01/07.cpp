#include <iostream>
#include <math.h>
using namespace std;

float media(float a, float b, float c){
    float operacao = (a + b + c) / 3;
    return operacao;
}

int main(){
    float a, b, c, resp;

    a = 2;
    b = 6;
    c = 8.5;

    resp = media(a,b,c);
    cout << "A media dos numeros: " << resp << endl;
    return 0;
}