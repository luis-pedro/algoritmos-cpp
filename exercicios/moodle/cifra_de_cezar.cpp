#include <iostream>
#include <string>

using namespace std;

int main(){
    int N = 3; // Número de linhas
    int M = 5; // Número de colunas
    string vet[3][5];

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            string(cin >> vet[i][j],ws);
        }
    }

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            cout << vet[i][j] << " ";
        }
    }

    return 0;
}