#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int L = 2; // Quantidade de linhas da matriz
    int C = 2; // Quantidade de colunas da matriz
    
    float M[2][2]; // Matriz M
    float detM = 0; // Determinante da matriz M
    float TM[2][2]; // Matriz Transposta de M

    // Armazenando os valores da matriz
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            cin >> M[i][j];
        }
    }

    // Mostrando os valores da matriz
    cout << "M = [" << M[0][0] << " " << M[0][1] << " ; " << M[1][0] << " " << M[1][1] << "]" << endl;


    detM = (M[0][0] * M[1][1]) - (M[0][1] * M[1][0]);

    cout << fixed << setprecision(4) << "Determinante de M = " << detM << endl;;

    TM[0][0] = M[0][0]; // primeira linha e primeira coluna
    TM[0][1] = M[1][0]; // primeira linha e segunda coluna
    TM[1][0] = M[0][1]; //segunda linha e primeira coluna
    TM[1][1] = M[1][1]; //segunda linha e segunda coluna

    // Mostrando os valores da matriz transposta
    cout << "Transposta de M = [" << TM[0][0] << " " << TM[0][1] << " ; " << TM[1][0] << " " << TM[1][1] << "]" << endl;

    return 0;
}