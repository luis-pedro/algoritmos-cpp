#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    cout << "Digite seu nome: ";
    getline(cin >> ws, name);

    int idd = 0;
    cout << "Digite sua idade: ";
    cin >> idd;

    cout << "Digite sua senha: ";
    string senha;
    getline(cin >> ws, senha);

    cout << "Confirme sua senha: ";
    string csenha;
    getline(cin >> ws, csenha);

    if(idd < 0 || idd > 200){
        cout << "Idade invalida, tente novamente." << endl;
    } else if(senha == csenha){
        cout << "Verificacao bem sucedida!" << endl;
    } else{
        cout << "As senhas nao batem, tente novamente." << endl;
    }

    return 0;
}