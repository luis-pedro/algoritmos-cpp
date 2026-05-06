#include <iostream>

using namespace std;

int main(){
    int L = 5; // Número de linhas da matriz
    int C = 3; // Número de colunas da matriz
    int ocr[5][3]; // Matriz OCR

    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            cin >> ocr[i][j];
        }
    }

    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            cout << ocr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}