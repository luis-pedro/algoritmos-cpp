#include <iostream>
#include "hashing.h"

using namespace std;

int main(){
    int k, m, c1, c2, aux;
    
    cin >> k; // lendo a chave da tabela
    cin >> m; // lendo o tamanho da tabela
    cin >> c1 >> c2;
    
    for(int i = 0; i < m ; i++){
        aux = hash2(k,i,m,c1,c2);   
    
        cout << aux << " ";
    }
    
    return 0;
}