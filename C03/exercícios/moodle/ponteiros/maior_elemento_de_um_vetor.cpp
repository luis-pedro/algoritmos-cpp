#include <iostream>

using namespace std;

int main(){
    int N; // tamanho do vetor
    
    cin >> N; // leitura do tamanho do vetor
    
    int *vetor = NULL; // vetor
    int *p = NULL; // ponteiro
    
    vetor = new int[N]; // criação do vetor
    
    p = vetor;
    
    for(int i = 0 ; i < N ; i++){
        cin >> *p;
        p++;
    }
    
    p = vetor;
    int maior = *p; // maior número
    
    for(int i = 0 ; i < N ; i++){
        if(*p > maior){
            maior = *p;
        }
        p++;
    }
    
    cout << maior;
    
    delete [] vetor;
    
    return 0;
}