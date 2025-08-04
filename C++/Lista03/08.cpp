#include<iostream>
using namespace std;

int main(){
    int i = 5;
	int *p;
	p = &i;
	cout << p << "\t" 
        << (*p+2) << "\t" 
        << **&p <<"\t"
        << (3**p) <<"\t"
        << (**&p + 4);

	return 0;
}