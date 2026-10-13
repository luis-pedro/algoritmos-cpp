#include <iostream>
#include "busca.h"

using namespace std;

int main(){
    int vetor[20]; // vetor
    int i = 0; // variável auxiliar contadora
    int N = 0; // tamanho do vetor
    int X = 0; // posição
    
    int pos; // posição de X no vetor
    
    cin >> vetor[0];
    N++;
    
    while(vetor[i] != -1){
        i++;
        cin >> vetor[i];
        N++;
    }
    
    cin >> X;
    
    pos = binaria(vetor, N, X);
    
    if(pos == -1){
        cout << "Nao possui acesso";
    } else{
        cout << "Possui acesso";
    }
    
    return 0;
}