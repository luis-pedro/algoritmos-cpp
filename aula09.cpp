#include <iostream>

using namespace std;

int main(){
    int idade[5];
    idade[0] = 1;
    idade[1] = 23;
    idade[2] = 13;
    idade[3] = 22;
    idade[4] = 93;

    //armazenando a variável
    for (int i = 0 ; i < 5 ; i++){
        cin >> idade[i];
    }

    //mostrando o resultado na tela
    for (int i = 0 ; i < 5 ; i++){
        cout << idade[i] << endl;
    }

    return 0;
}