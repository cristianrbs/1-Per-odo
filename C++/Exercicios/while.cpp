#include<iostream>
using namespace std;

void valor(int n){
    int i = 1;

    while (i <= n)
    {
        cout << i << endl;
        i ++;
    }
}

int main(){
        int n = 0;

        cout << "Informe a sequencia: ";
        cin >> n;

        valor(n);

        return 0;
    }