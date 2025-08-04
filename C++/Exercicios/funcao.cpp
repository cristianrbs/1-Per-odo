#include<iostream>
#include<math.h>
using namespace std;

/*int dobroDoNumero(int x){
    int dobro = 0;
    dobro = 2 * x;
    return dobro;
}

int cuboDoNumero(int x){
    int cubo = 0;
    cubo = pow(x,3);
    return cubo;
}

int expressao(int x){
    int funcao = 0;
    funcao = pow(x,3) + pow(x,2) - 2 * x + 1;
    return funcao;    
}

int expressao2(int x){
    int funcao2 = 0;
    funcao2 = 3 * pow(x,3) - 8 * pow(x,2) - 9 * x + 7;
    return funcao2;    
}

int expressao3(int x){
    int funcao3 = 0;
    funcao3 = -9 * pow(x,3) + 3 * pow(x,2) + 4 * x + 9;
    return funcao3;    
}
*/
int g(int x, int y){
    int funcao4 = 0;
    funcao4 = x + y;
    return funcao4;
}

int f(int x, int y){
    int funcaoG = g(x,y);
    int funcao5 = pow(x,3) + 3 * pow(x,2) - funcaoG;
    return funcao5;
}

int main(){
    int resp = 0;
/*  resp = dobroDoNumero(3);
    cout << "Resultado do dobro da expressao: " << resp << endl;
    resp = dobroDoNumero(12);
    cout << "Resultado do dobro da expressao: " << resp << endl;

    resp = cuboDoNumero(3);
    cout << "Resultado da expressao ao cubo: " << resp << endl;
    resp = cuboDoNumero(12);
    cout << "Resultado da expressao ao cubo: " << resp << endl;

    resp = expressao(2);
    cout << "Resultado da expressao: " << resp << endl;

    resp = expressao2(2);
    cout << "Resultado da expressao 2: " << resp << endl;

    resp = expressao3(2);
    cout << "Resultado da expressao 3: " << resp << endl;
*/
    resp = g(1,2);
    cout << "O resultado da expressao G(x,y): " << resp << endl;
    resp = f(3,0);
    cout << "O resultado da expressao F(x,y): " << resp << endl;
    return 0;
}

    
