    #include<iostream>
    #include<cmath>
    using namespace std;

    double verificaValor(double valor1, double valor2, double valor3, double valor4, double valor5, int valor6, int soma){
        soma = (valor1 + valor2 + valor3 + valor4 + valor5 + valor6);
        
        if (valor1 == valor2 and valor2 == valor3)
        {
            return 15;
        }

        else if (valor4 == valor5 and valor5 == valor6)
        {
            return 15;
        }

        else if (soma % valor6 == 0)
        {
            cout << "É multiplo do ultimo valor digitado";
        }

        else
        {
            cout << "Nao e multiplo";
        }
        return soma;
    }

    int main(){
        double valor1, resp, valor2, valor3, valor4, valor5, valor6,soma;
        
        cout << "Informe o primeiro valor: " << endl;
        cin >> valor1;

        cout << "Informe o segundo valor: " << endl;
        cin >> valor2;

        cout << "Informe o terceiro valor: " << endl;
        cin >> valor3;

        cout << "Informe o quarto valor: " << endl;
        cin >> valor4;

        cout << "Informe o quinto valor: " << endl;
        cin >> valor5;

        cout << "Informe o sexto valor: " << endl;
        cin >> valor6;

        resp = verificaValor(valor1, valor2,valor3,valor4,valor5,valor6,soma);
        
        if (resp == 15)
        {
            cout << "Otimo";
        }
        
        else
        {
            cout << "Excelente";
        }
        
        return 0;
    }