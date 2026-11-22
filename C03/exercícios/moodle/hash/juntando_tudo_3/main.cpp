#include <iostream>
#include "hashing.h"

using namespace std;

int main(){
    int op; // operação
    int m; // tamanho da tabela
    dado T[1000];
    int k; // chave
    
    // operações
    
    int add; // inserir elementos
    int pesq; // pesquisar elementos
    int rem; // remover elementos
    
    cin >> m;
    
    // criando uma tabela vazia
    for(int i = 0 ; i < m ; i++){
    T[i].k = -1;
        T[i].status = 0;
    }
    
    cin >> op;
    
    while(op != 5){
        if(op == 1){ // inserir elementos na tabela
            cin >> k;
            
            add = hash_insert3(T,m,k);
            
            cin >> op;
        } else if(op == 2){
            cin >> k;
            
            pesq = hash_search3(T,m,k);
            cout << pesq << endl;
            
            cin >> op;
            
        } else if(op == 3){
            cin >> k;
            
            rem = hash_remove3(T,m,k);
            
            cin >> op;
        } else if(op == 4){ // listar a tabela
            // monstrando a tabela
            for(int i = 0 ; i < m ; i++){
                cout << T[i].k << " ";
            }
            cout << endl;
            cin >> op;
        }
    }
    
    return 0;
}