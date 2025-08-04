#include<iostream>
using namespace std;

int main(){
    float   Q[20];
    float   maior;
    int posicao = 0; 

    cout << "Digite os numeros" << endl;
    for(int i = 0; i < 20; i++){
            cout << "Numero " << (i + 1) << ": ";
            cin >> Q[i];
            
            if(Q[i] > maior){
                maior = Q[i];
            }
        }
        for(int i = 0; i < 20; i++){
            if(Q[i] == maior){
                posicao = i;
                break;
            }
        }
    cout << "O maior numero: " << maior << endl;
    cout << "A posicao do maior numero: " << posicao + 1 << endl;
    return 0;
}