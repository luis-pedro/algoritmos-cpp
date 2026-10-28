#include <iostream>
#include "hashing.h"

using namespace std;

int main(){
    int m; // tamanho da tabela
    dado T[100];
    int k; // chave
    int rem; // valor da chave que queremos remover
    int aux;
    
    cin >> m;
    
    for(int i = 0 ; i < m ; i++){
        T[i].k = -1;
        T[i].status = 0;
    }
    
    cin >> k;
    
    while(k != 0){
        hash_insert(T,m,k);
        cin >> k;
    }
    
    cin >> rem;
    aux = hash_remove(T,m,rem);
    
    for(int i = 0 ; i < m ; i++){
        cout << T[i].k << " ";
    }
    
    return 0;
}