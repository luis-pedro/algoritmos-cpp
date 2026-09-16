#include <iostream>

using namespace std;

int main(){
    int N; // tamanho do vetor
    int *vetor = NULL; // ponteiro para o vetor

    // lendo o tamanho desejado
    cin >> N;

    // alocando memória para o vetor
    vetor = new int[N];

    // lendo o vetor
    for(int i = 0 ; i < N ; i++){
        cin >> vetor[i];
    }

    // mostrando o vetor
    for(int i = 0 ; i < N ; i++){
        cout << vetor[i] << endl;
    }

    // liberando a memória alocada
    delete [] vetor;

    return 0;
}