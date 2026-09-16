#include <iostream>

using namespace std;

int main(){
    int N; // tamanho do vetor
    int *vetor = NULL; // vetor
    int *p = NULL; // ponteiro
    
    cin >> N;
    
    vetor = new int[N];
    
    p = vetor;
    
    for(int i = 0 ; i < N ; i++){
        cin >> *p;
        p++;
    }
    
    for(int i = 0 ; i < N ; i++){
        cout << vetor[i] << " ";
    }
    
    delete [] vetor;
    
    return 0;
}