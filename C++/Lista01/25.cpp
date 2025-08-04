#include <iostream>
using namespace std;

bool verificaSeFormaTriangulo(){
    float ang1, ang2, ang3;
    cout << "Informe o angulo 1:";
    cin >> ang1;
    cout << "Informe o angulo 2:";
    cin >> ang2;
    cout << "Informe o angulo 3:";
    cin >> ang3;
    float soma = ang1 + ang2 + ang3;

    if(soma == 180){
        return true;
    }else{
        return false;
    }
}

int main(){
    bool resposta = verificaSeFormaTriangulo();

		if(resposta == true){
			cout << "Os angulos forma triângulo" << endl;
		}else{
			cout << "Os angulos não formam um triângulo" << endl;	
		}

    return 0;
}