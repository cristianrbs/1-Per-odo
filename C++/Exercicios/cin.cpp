#include<iostream>
#include<math.h>
using namespace std;


float Soma(float x, float y){
    float funcao = 0;
    funcao = x + y;
    return funcao;
}

int main(){
    float resp = 0;
    float x;
    cout << "Informe o valor de x: ";
    cin >> x;

    float y;
    cout << "Informe o valor de y: ";
    cin >> y;

    resp = Soma(x,y);
    cout << "O valor da soma de x e y:" << resp << endl;
    return 0;
}
