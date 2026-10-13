#include <iostream>
#include "busca.h"

using namespace std;

int main(){
    int vetor[100]; // armazena os números
    int i = 0; // variável auxiliar contadora
    int N = 0; // tamanho do vetor
    
    int X; // elemento procurado
    int pos; // posição de X no vetor
    
    cin >> vetor[0];
    N++;
    
    while(vetor[i] != -1){
        i++;
        cin >> vetor[i];
        N++;
    }
    
    cin >> X;
    
    pos = sequencial(vetor, N, X);
    
    if(pos == -1){
        cout << X << " nao encontrado";
    } else{
        cout << X << " encontrado na posicao " << pos;
    }

    return 0;
}