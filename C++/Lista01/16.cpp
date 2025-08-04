#include<iostream>
#include<math.h>
using namespace std;

int main(){

	int a = 10; 
	int b = 20;

    if (a < b){
        int aux = 0;
		aux = a;
		a = b;
		b = aux;
        
        return 0;
    }
    

	cout << "a: "<< a << ", b:" << b << endl;
	return 0;
}