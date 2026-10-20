#include <iostream>

using namespace std;

int main(){
    int N;
    
    cin >> N;
    
    int *vetor = NULL; // vetor
    int *p = NULL; // ponteiro
    
    int par = 0; // variável para números pares positivos
    
    vetor = new int[N]; // criação do vetor
    
    p = vetor;
    
    for(int i = 0 ; i < N; i ++){
        cin >> *p;
        p++;
    }
    
    p = vetor;
    
    for(int i = 0 ; i < N ; i++){
        if((*p % 2 == 0) && (*p > 0)){
            par++;
        }
        p++;
    }
    
    cout << par;
    
    return 0;
}