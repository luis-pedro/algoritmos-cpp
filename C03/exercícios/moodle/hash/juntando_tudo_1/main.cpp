#include <iostream>
#include "hashing.h"

using namespace std;

int main(){
    int k, m; // chave e tamanho
    int op; // opção desejada
    int aux; // variável auxiliar
    dado T[1000]; // tabela
    int pos; // posição da pesquisa 
    int rem; // número que se deseja remover da tabela 
    int removeu; // auxiliar de remoção
    
    cin >> m;
    
    // criando uma tabela vazia
    for(int i = 0 ; i < m ; i++){
        T[i].k = -1;
        T[i].status = 0;
    }
    
    cin >> op;
    
    while(op != 5){
        if(op == 1){
            cin >> k;
            aux = hash_insert(T,m,k);
            cin >> op;
        } else if(op == 2){
            cin >> k;
            pos = hash_search(T,m,k);
            cout << pos << endl;
            cin >> op;
        } else if(op == 3){
            cin >> rem;
            removeu = hash_remove(T,m,rem);
            cin >> op;
        } else if(op == 4){
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