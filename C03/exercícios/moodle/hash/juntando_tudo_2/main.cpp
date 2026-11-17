#include <iostream>
#include "hashing.h"

using namespace std;

int main(){
    int op; // opção que a pessoa deseja
    int m; // tamanho da tabela
    int c1, c2; // constantes para a soldagem quadrática
    int k; // chave
    dado T[100];
    
    // operações
    
    int add; // adicionar elementos
    int psq; // pesquisar elementos
    int rem; // remover elementos
    
    cin >> m >> c1 >> c2;
    
    cin >> op;
    
    // criando uma tabela vazia
    for(int i = 0 ; i < m ; i++){
    T[i].k = -1;
        T[i].status = 0;
    }
    
    while(op != 5){ // para não sair do programa
        if(op == 1){ // inserir
            cin >> k;
                
            add = hash_insert2(T,m,k, c1, c2); 
            
            cin >> op;
        } else if(op == 2){ // pesquisar
            cin >> k;
        
            psq = hash_search2(T,m,k,c1,c2);
            
            cout << psq << endl;
            
            cin >> op;
        } else if(op == 3){ // remover
            cin >> k;
            
            rem = hash_remove2(T,m,k,c1,c2);
            
            cin >> op;
        } else if(op == 4){ // listar tabela
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