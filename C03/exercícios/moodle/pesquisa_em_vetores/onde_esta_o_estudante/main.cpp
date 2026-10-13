#include <iostream>
#include "busca.h"

using namespace std;

int main(){
    int N = 0; // quantidade de alunos
    int matricula[10000]; // vetor
    int pos; // posição que deseja encontrar
    int X; // variável da posição
    
    cin >> N;
    
    for(int i = 0 ; i < N ; i++){
        cin >> matricula[i];
    }
    
    cin >> X;
    
    pos = binaria(matricula, N, X);
    
    if(pos == -1){
        cout << "Nao localizado";
    } else{
        cout << "Corredor " << pos;
    }
    
    return 0;
}