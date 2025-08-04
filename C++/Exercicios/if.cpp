#include<iostream>
#include<math.h>
using namespace std;

/*float maior(float x, float y){
    if(x > y){
        cout << "O maior valor:";
        return x;
    }

    else{
        cout << "O maior valor:";
        return y;
    }
}*/

void idade(int x){
    if(x >= 18){
        cout << "Esta apito para tirar carteira";
    }

    else{
        cout << "Nao esta apito para tirar carteira";
    }
}

int main(){
    int x;

    cout << "Informe sua idade: ";
    cin >> x;
    idade(x);
    /*float resp = 0;
    float x;
    cout << "Informe o valor de x: ";
    cin >> x;

    float y;
    cout << "Informe o valor de y: ";
    cin >> y;

    resp = maior(x,y);
    cout << resp << endl;*/
    return 0;
}  