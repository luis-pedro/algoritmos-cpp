#include <iostream>

using namespace std;

int impar_neg(int v[], int tam){
    int i = 0;
    int resp = 0;

    for(i = 0 ; i < tam ; i++){
        if(v[i] % 2 != 0 && v[i] < 0){
            resp += 1;
        }   
    }

    return resp;
}

int main(){
    int vet[10]; // Vetor com 10 posições
    int i = 0; // Variável auxiliar
    //int R = 0; // Resultado

    for(i = 0 ; i < 10 ; i++){
        cin >> vet[i];
    }

    int R = impar_neg(vet, 10);

    cout << R << endl;

    return 0;
}