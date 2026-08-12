#include <iostream>
#include <string>

using namespace std;

int main(){
    int N = 0; // Número de atletas a serem cadastrados
    cin >> N;

    int A = 0; // Variável Auxiliar
    
    //declaração das variáveis
    string nome;
    int idd = 0;

    for(int i = 0 ; i < N ; i++){
        //armazenando o nome do jogador
        getline(cin >> ws, nome);
        //armazenando a idade do jogador
        cin >> idd;

        if (idd >= 18){
            cout << nome << " " << idd << endl;
            A = 1;
        }
    }

    if(A == 0) {
        cout << "Nenhum jogador com 18 anos ou mais";
    }

    return 0;
}