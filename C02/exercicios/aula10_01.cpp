#include <iostream>

using namespace std;

int main(){
    int L = 3; //Linha
    int C = 3; //Coluna
    int i, j = 0; //Variáveis auxiliares

    int contX = 0;
    int contY = 0;

    int V = 0;

    char mat[3][3];

    cout << "Bem Vindo ao jogo de Xadrez online!" << endl;
    cout << "Jogador 1 = X" << endl;
    cout << "Jogador 2 = Y" << endl;
    cout << "----------------------------" << endl;

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


    for(i = 0 ; i < L ; i++){
        contX = 0;
        contY = 0;
        for(j = 0 ; j < C ; j++){
            if(mat[i][j] == 'X'){
                contX += 1;
            } 
            else {
                contY += 1;
            }
            if(contX == 3){
                V = 1;
            }
            else if(contY == 3) {
                V = 2;
            }
        }
    }
    for(j = 0 ; j < L ; j++){
        contX = 0;
        contY = 0;
        for(i = 0 ; i < C ; i++){
            if(mat[i][j] == 'X'){
                contX += 1;
            } 
            else {
                contY += 1;
            }
            if(contX == 3){
                V = 1;
            }
            else if(contY == 3) {
                V = 2;
            }
        }
    }

    cout << "O jogador " << V << " venceu o jogo" << endl;

    return 0;
}