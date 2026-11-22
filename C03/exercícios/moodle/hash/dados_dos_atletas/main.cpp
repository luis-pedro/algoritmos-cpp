#include <iostream>
#include "hashing.h"
#include <iomanip>

using namespace std;

int main(){
    int m; // tamanho da tabela
    int k; // chave
    int op; // operação
    info atleta; // struct das informações
    dado T[1000]; // struct
    
    // operações
    int add; // adicionar elementos
    int psq; // pesquisar elementos
    int rem; // remover elementos
    
    cin >> m;
    
    // criando uma tabela vazia
    for(int i = 0 ; i < m ; i++){
        T[i].atleta.nome = "vazio";
        T[i].atleta.idade = 0;
        T[i].atleta.peso = 0;
        T[i].atleta.altura = 0;
        T[i].k = -1;
        T[i].status = 0;
    }
    
    cin >> op;
    
    while(op != 5){
        if(op == 1){
            getline(cin >> ws, atleta.nome);
            cin >> atleta.idade;
            cin >> atleta.peso;
            cin >> atleta.altura;
            
            add = hash_insert2(T,m,atleta);
            
            cin >> op;
        } else if(op == 2){
            getline(cin >> ws, atleta.nome);
            
            psq = hash_search2(T,m,atleta);
            
            if(psq == -1){
                cout << atleta.nome  << " nao encontrado" << endl << endl;
            } else {
                cout << "Nome: " << T[psq].atleta.nome << endl;
                cout << "Idade: " << T[psq].atleta.idade << endl;
                cout << fixed << setprecision(1) << "Peso: " << T[psq].atleta.peso << endl;
                cout << fixed << setprecision(2) << "Altura: " << T[psq].atleta.altura << endl;
                cout << endl;
            }
            
            cin >> op;
        } else if(op == 3){
            getline(cin >> ws, atleta.nome);
            
            rem = hash_remove2(T,m,atleta);
            
            cin >> op;
        } else if(op == 4){ 
            // monstrando a tabela
            for(int i = 0 ; i < m ; i++){
                if(T[i].status != 0){
                    cout << "Nome: " << T[i].atleta.nome << endl;
                    cout << "Idade: " << T[i].atleta.idade << endl;
                    cout << fixed << setprecision(1) << "Peso: " << T[i].atleta.peso << endl;
                    cout << fixed << setprecision(2) << "Altura: " << T[i].atleta.altura << endl;   
                
                    cout << endl;
                }
            }
            cin >> op;
        }
    }
    
    return 0;
}