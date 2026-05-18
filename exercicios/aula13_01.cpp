#include <iostream>
#include <string>

using namespace std;

struct dados
{
    string nome;
    int idade;
};

void codificar(string N, int I, string &resposta, int &tamanho){
    tamanho = N.length();

    if(I >= 18){
        resposta = "maior de idade";
    } else{
        resposta = "menor de idade";
    }
}

int main(){
    dados pessoa1;

    string resp;

    int T = 0;

    cout << "Informe seu nome: ";
    getline(cin >> ws, pessoa1.nome);
    cout << "Informe sua idade: ";
    cin >> pessoa1.idade;

    codificar(pessoa1.nome, pessoa1.idade, resp, T);

    cout << "Voce e: " << resp << endl;
    cout << "Tamanho do seu nome: " << T;

    return 0;
}