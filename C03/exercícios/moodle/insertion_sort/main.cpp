#include <iostream>
#include "ordenacao.h"

using namespace std;

int main(){
    int vetor[100]; //armazena os dados
    int N = 0; // # elementos inseridos
    int i; // contador
    int aux; // variável auxiliar para leitura
    
    // lendo o vetor
    cin >> aux;
    while(aux != 0){
        //cin >> vetor[N];
        vetor[N] = aux;
        
        //cout << "vetor = " << vetor[N] << endl;
        //cout << "posicao = " << N << endl;
        N++;
        
        cin >> aux;
    }
    
    // Ordenando vetor em ordem crescente
    insercaoDireta(vetor, N);
    
    // Mostrando o vetor
    for(i = 0 ; i < N ; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
    
    return 0;
}