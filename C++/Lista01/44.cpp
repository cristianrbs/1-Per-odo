#include<iostream>
using namespace std;

double maior(double a, double b, double c){
    double resp;

    if (a > b and a > c)
    {
        resp = a;
    }

    else if (b > a and b > c)
    {
        resp = b;
    }

    else
    {
        resp = c;
    }

    return resp;    
}

double menor(double a, double b, double c){
    double resp;

    if (a < b and a < c)
    {
        resp = a;
    }

    else if (b < a and b < c)
    {
        resp = b;
    }

    else
    {
        resp = c;
    }

    return resp;    
}

double meio(double a, double b, double c){
    double resp;

    if ((a > b and a < c) or (a < b and a > c))
    {
        resp = a;
    }

    else if ((b > a and b < c) or (b < a and b > c))
    {
        resp = b;
    }

    else
    {
        resp = c;
    }
    
    return resp;
}




int main(){
    int i;
    double a, b, c;

    cout << "Informe o valor de i(inteiro positivo): ";
    cin >> i;

    cout << "Informe o valor de a: ";
    cin >> a;

    cout << "Informe o valor de b: ";
    cin >> b;

    cout << "Informe o valor de c: ";
    cin >> c;

    switch (i)
    {
    case 1:
        cout <<"" << menor(a,b,c) << "" << meio(a,b,c) << "" << maior(a,b,c) << endl; 
        break;

        case 2:
        cout <<"" << maior(a,b,c) << "" << meio(a,b,c) << "" << menor(a,b,c) << endl; 
        break;

        case 3:
        cout <<"" << menor(a,b,c) << "" << maior(a,b,c) << "" << meio(a,b,c) << endl; 
        break;
    
    default:
        cout << "Invalido";
    }
}

