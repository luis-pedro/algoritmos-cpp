#include <iostream>

using namespace std;

int main() {
    int L = 2; //Linha
    int C = 2; //Coluna
    int i, j = 0; //Variáveis auxiliares

    int mat[2][2]; //Matriz

    for(i = 0 ; i < L ; i++){
        for(j = 0 ; j < C ; j++){
            cin >> mat[i][j];
        }
    }

    for(i = 0 ; i < L ; i++){
        for(j = 0 ; j < C ; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}