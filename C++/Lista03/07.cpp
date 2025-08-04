#include<iostream>
using namespace std;

int main(){
    int i = 3;
    int j = 5;
    int * p = &i;
    int * q = &j;

    /*Indique qual é o valor das seguintes expressões:
    a) `p==&i`
    b) `*p - *q`
    c) `**&p`
    d) `3*-*p/(*q) + 7`*/

    cout << "a) " << (p == &i) << endl;
    cout << "b) " << *p - *q << endl;
    cout << "c) " << **&p << endl;
    cout << "d) " << 3 * - *p / (*q) + 7 << endl;

    return 0;
}