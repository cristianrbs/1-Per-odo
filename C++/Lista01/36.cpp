#include<iostream>
#include<math.h>
using namespace std;

void massa(double IMC, double peso, double altura){
    double ganhar, perder, pesoIdeal;

    if (IMC < 16)
    {
        cout << "Magreza grave" << endl;

        pesoIdeal = 24 * pow(altura,2);
        ganhar = pesoIdeal - peso;
        cout << "Ganhar " << ganhar << "Kg para atingir um peso saudavel" << endl;
    }
    
    else if (IMC >= 16 and IMC < 17)
    {
        cout << "Magreza moderada" << endl;

        pesoIdeal = 24 * pow(altura,2);
        ganhar = pesoIdeal - peso;
        cout << "Ganhar " << ganhar << "Kg para atingir um peso saudavel" << endl;
    }

    else if (IMC >= 17 and IMC < 18.5)
    {
        cout << "Magreza leve" << endl;

        pesoIdeal = 24 * pow(altura,2);
        ganhar = pesoIdeal - peso;
        cout << "Ganhar " << ganhar << "Kg para atingir um peso saudavel" << endl;
    }

    else if (IMC >= 18.5 and IMC < 25)
    {
        cout << "Saudavel";
    }
    
    else if (IMC >= 25 and IMC < 30)
    {
        cout << "Sobrepeso" << endl;

        pesoIdeal = 24 * pow(altura,2);
        perder = peso - pesoIdeal;
        cout << "Perder " << perder << "Kg para atingir um peso saudavel";
    }
    

    else if (IMC >= 30 and IMC < 35)
    {
        cout << "Obesidade grau I" << endl;

        pesoIdeal = 24 * pow(altura,2);
        perder = peso - pesoIdeal;
        cout << "Perder " << perder << "Kg para atingir um peso saudavel";
    }
    

    else if (IMC >= 35 and IMC < 40)
    {
        cout << "Obesidade grau II(severa)" << endl;

        pesoIdeal = 24 * pow(altura,2);
        perder = peso - pesoIdeal;
        cout << "Perder " << perder << "Kg para atingir um peso saudavel";
    }
    else
    {
        cout << "Obesidade grau III(morbida)" << endl;

        pesoIdeal = 24 * pow(altura,2);
        perder = peso - pesoIdeal;
        cout << "Perder " << perder << "Kg para atingir um peso saudavel";
    }
}

int main(){
    double IMC, peso, altura;

    cout << "Informe seu peso: ";
    cin >> peso;

    cout << "Informe sua altura: ";
    cin >> altura;

    IMC = peso / pow(altura,2);

    massa(IMC,peso,altura);

    return 0;
}
