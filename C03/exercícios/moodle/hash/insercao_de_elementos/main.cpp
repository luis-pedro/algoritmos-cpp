#include <iostream>
#include "hashing.h"

using namespace std;

int main(){
    dado T[100]; // tabela hash
    int m ; // tamanho da tabela
    int aux, k;
    int j = 0; // variável contadora auxiliar do while
    
    // lendo o tamanho da tabela
    cin >> m;
    
    // criando uma tabela vazia
    for(int i = 0 ; i < m ; i++){
        T[i].k = -1;
        T[i].status = 0;
    }
    
    cin >> k;
    
    // armazenando valores na tabela
    while(k != 0){
        aux = hash_insert(T, m, k);
        cin >> k;
    }
    
    // monstrando a tabela
    for(int i = 0 ; i < m ; i++){
        cout << T[i].k << " ";
    }
    
    return 0;
}