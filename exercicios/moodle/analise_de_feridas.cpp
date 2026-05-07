#include <iostream>

using namespace std;

int main(){
    int L = 0; // Quantidade de linhas da matriz
    int C = 0; // Quantidade de colunas da matriz
    int D = 0; // Dimensão do pixel

    int contador = 0; // Variável contadora
    int area = 0; // Variável da área

    int M[100][100]; // Matriz

    // Armazenamento e leitura da matriz
    cin >> L >> C >> D;

    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            cin >> M[i][j];
            if(M[i][j] == 1){
                contador += 1;
            }
        }
    }

    // Conta da área

    area = D * D * contador;

    cout << "AREA = " << area << " mm^2";

    return 0;
}