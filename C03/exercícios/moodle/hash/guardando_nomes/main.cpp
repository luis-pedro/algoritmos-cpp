#include <iostream>
#include "hashing.h"

using namespace std;

int main(){
    int m; // tamanho da tabela
    int k; // chave
    dado T[1000];
    int op; // operação
    string info; // informação
    
    // operações
    int add; // inserir elementos
    int pesq; // pesquisar elementos
    int rem; // deletar elementos
    
    cin >> m;   
    
    // criando uma tabela vazia
    for(int i = 0 ; i < m ; i++){
        T[i].info = "vazio";  
        T[i].k = -1;
        T[i].status = 0;
    }
    
    cin >> op;
    
    while(op != 5){
        if(op == 1){
            getline(cin >> ws, info);
            
            k = gerador_de_chave(info);
            
            add = hash_insert3(T,m,info);
            
            cin >> op;
        } else if(op == 2){
            getline(cin >> ws,info);
            
            pesq = hash_search3(T,m,info);
            
            if(pesq == -1){
                cout << info << " nao encontrado" << endl;
            } else {
                cout << info << " encontrado na posicao " << pesq << endl;
            }
            
            cin >> op;
        } else if(op == 3){
            getline(cin >> ws, info);
            
            rem = hash_remove3(T,m,info);
            
            cin >> op;
        } else if(op == 4){
            // monstrando a tabela
            for(int i = 0 ; i < m ; i++){
                cout << T[i].info << endl;
            }
            //cout << endl;
            cin >> op;
        }
    }
    
    return 0;
}