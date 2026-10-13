#include <iostream>
#include "busca.h"
#include <string>

using namespace std;

int main(){
    int N = 0; // quantidade de alunos
    aluno classe[100]; // struct + vetor dos alunos
    string nome; // nome do aluno a ser encontrado
    int pos; // posição do aluno
    
    cin >> N;
    
    for(int i = 0 ; i < N ; i++){
        getline(cin >> ws, classe[i].nome);
        getline(cin >> ws, classe[i].curso);
        cin >> classe[i].matricula;
    }
    
    getline(cin >> ws, nome);
    
    pos = sequencial(classe, N, nome);
    
    if(pos == -1){
        cout << "Aluno nao encontrado";
    } else {
        cout << classe[pos].nome << endl;
        cout << classe[pos].curso << endl;
        cout << classe[pos].matricula << endl;
    }
    
    return 0;
}