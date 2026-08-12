#include <iostream>

using namespace std;

int main(){
    int L = 3; // Número de linhas da matriz
    int C = 3; // Número de colunas da matriz
    int QR[3][3]; // Matriz do QR code

    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            cin >> QR[i][j];
        }
    }

    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            cout << QR[i][j] << " ";
        }
        cout << endl;
    }

    if(QR[0][0] == 1 && QR[0][1] == 1 && QR[0][2] == 1){
        cout << "MASCULINO";
    } else if(QR[0][0] == 1 && QR[0][1] == 0 && QR[0][2] == 0){
        cout << "FEMININO";
    }

    return 0;
}