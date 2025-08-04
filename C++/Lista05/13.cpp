#include<iostream>
using namespace std;

//Crie uma struct chamada "Agenda" que armazene um array de structs "Contato". Cada contato deve ter um nome (string) e um número de telefone (string). 
//Adicione métodos para adicionar novos contatos, excluir contatos existentes e exibir todos os contatos da agenda.

struct Contato{
    string nome;
    int telefone;
};

struct Agenda{
    Contato * contato;
    int numcontatos;
};

void preencher(Agenda &a){
    cout << "Digite quantos contatos pretende adicionar: " << endl;
    cin >> a.numcontatos;

    a.contato = new Contato [a.numcontatos];

    for(int i = 0; i < a.numcontatos; i++){
        cout << "Nome do contato " << (i + 1) << ": ";
    }
}

void exibirContatos(Agenda &a){
    
}

int main(){
    Agenda a;
    int escolha;

    do
    {
        cout << "O que deseja fazer?" << endl;
        cout << "1 - Adicionar contatos" << endl;
        cout << "2 - excluir   contatos" << endl;
        cout << "3 - Exibir contatos" << endl;
        cin >> escolha;
    } while (escolha != 1 and escolha != 2 and escolha != 3);

    if (escolha == 1)
    {
        preencher(a);
    }
    
    return 0;
}