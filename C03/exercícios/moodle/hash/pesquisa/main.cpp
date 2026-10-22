 #include <iostream>
 #include "hashing.h"
 
 using namespace std;
 
 int main(){
    int m; // tamanho da tabela
    int aux; // variável auxiliar
    int k; // chave
    int chave; // chave que se deseja encontrar
    dado T[100];
    
    cin >> m;
    
    //criando uma tabela vazia
    for(int i = 0 ; i < m ; i++){
        T[i].k = -1;
        T[i].status = 0;
    }
    
    cin >> k;
    
    while(k != 0){
        hash_insert(T, m ,k);
        cin >> k;
    }
    
    cin >> chave;
    aux = hash_search(T,m,chave);
    
    if(aux != -1){
        cout << "Chave " << chave << " encontrada na posicao " << aux << endl;
    } else {
        cout << "Chave " << chave << " nao encontrada" << endl;
    }
    
    return 0;
 }