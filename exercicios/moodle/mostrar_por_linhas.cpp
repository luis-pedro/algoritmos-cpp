#include <iostream>

using namespace std;

int main(){
    int N = 0; //Linha da matriz
    int M = 0; //Coluna da matriz
    int i = 0; //Variável auxiliar da linha
    int j = 0; //Variável auxiliar da coluna
    int mat[10][10]; //Matriz

    cin >> N >> M;

    for(i = 0 ; i < N ; i++){ //Declarando a linha da matriz
        for(j = 0 ; j < M ; j++){ //Declarando a coluna da matiz
            cin >> mat[i][j];
        }
    }

    for(i = 0 ; i < N ; i++){ //Visualizando a linha da matriz
        for(j = 0 ; j < M ; j++){ //Visualizando a coluna da matiz
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}