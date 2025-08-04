#include<iostream>
using namespace std;

/*void valor(int n){
    for (int i = 1; i <= n; i++)
    {
        cout << "Ola mundo" << endl;
    }
}*/

int valor(int n){
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    return n;
}



int main(){

    int n;
    cout << "Informe um numero: ";
    cin >> n;
    valor(n);
    /*int n;
    cout << "Informe a sequencia: ";
    cin >> n;

    valor(n);
    return 0;*/
    return 0;
}
