#include <iostream>

using namespace std;

int main(){
    int N = 0; // Linha da matriz
    int M = 0; // Coluna da matriz
    int i = 0; // Variável auxiar para declarar a linha da matriz
    int j = 0; // Variável auxiar para declarar a coluna da matriz

    int mat1[10][10]; // Matriz 01
    int mat2[10][10]; // Matriz 02
    int matR[10][10]; // Matriz resultado da soma delas

    cin >> N >> M;

    // Matriz 01
    for(i = 0 ; i < N ; i++){ //Declarando a linha da matriz
        for(j = 0 ; j < M ; j++){ //Declarando a coluna da matiz
            cin >> mat1[i][j];
        }
    }

    // Matriz 02
    for(i = 0 ; i < N ; i++){ //Declarando a linha da matriz
        for(j = 0 ; j < M ; j++){ //Declarando a coluna da matiz
            cin >> mat2[i][j];
        }
    }

    // Matriz Resultante
    for(i = 0 ; i < N ; i++){ //Somando a linha da matriz
        for(j = 0 ; j < M ; j++){ //Somando a coluna da matiz
            matR[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for(i = 0 ; i < N ; i++){ //Visualizando a linha da matriz
        for(j = 0 ; j < M ; j++){ //Visualizando a coluna da matiz
            cout << matR[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}