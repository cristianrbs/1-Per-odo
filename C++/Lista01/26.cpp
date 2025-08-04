#include <iostream>
using namespace std;

int tempoDeJogo(int inicio, int fim){       
    if(fim > inicio) {
        return fim - inicio;
    }
    
    else{
        int tantoQueFalta = 24 - inicio;
        return tantoQueFalta + fim;
    }    
}

int main(){
    float i, f;

    cout << "Informe o horario que o jogo comecou:";
    cin >> i;
    
    cout << "Informe o horario que o jogo acabou:";
    cin >> f;
    
    cout << "O jogo durou: " << tempoDeJogo(i, f);
    return 0;
}