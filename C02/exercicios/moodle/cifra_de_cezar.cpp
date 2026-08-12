#include <iostream>

using namespace std;

int main(){
    int N = 0; // Número de linhas
    int M = 0; // Número de colunas
    char cifra[100][100]; // Matriz Cifra de Cezar

    cin >> N >> M;

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            cin >> cifra[i][j];
        }
    }

    for(int j = 0 ; j < M ; j++){
        for(int i = 0 ; i < N ; i++){
            cout << cifra[i][j];
        }
    }

    return 0;
}