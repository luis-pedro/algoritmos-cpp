#include <iostream>

using namespace std;

int main(){
    int vet[100]; // Vetor
    int i = 0; // Variável incrementadora auxiliar
    int X = 0; // Elemento de busca
    bool busca = false;
    int pos = 0; // Variável da posição
    
    cin >> vet[0];
    
    while(vet[i] != 0){
        i++;
        cin >> vet[i];
    }
    
    cin >> X;
    
    for(int j = 0 ; j < i ; j++){
        if(vet[j] == X){
            busca = true;
            pos = j;
            break;
        } else {
            busca = false;
        }
    }
    
    if(busca == true){
        cout << "Elemento " << X << " encontrado na posicao " << pos << endl;
    } else {
        cout << "Elemento " << X << " nao foi encontrado" << endl;
    }
    
    return 0;
}