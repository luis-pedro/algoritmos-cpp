#include <iostream>
#include <string>

using namespace std;

struct jedi
{
    string nome;
    int base;
};


int main(){
    int N = 0; // Número de jedis para cadastrar

    jedi dados[1000];

    string nome; // Nome do Jedi da busca

    int I = 0; // Índice

    cin >> N;

    for(int i = 0 ; i < N ; i++){
        getline(cin >> ws, dados[i].nome);
        cin >> dados[i].base;
    }

    getline(cin >> ws, nome);

    for(int i = 0 ; i < N ; i++){
        if(nome == dados[i].nome){
            I = i;
        } else {
            I = 0;
        }
    }

    if (I == 0){
        cout << "Este cavaleiro nao esta cadastrado";
    } else {
        cout << "Este cavaleiro esta na base " << dados[I].base;
    }

    return 0;
}