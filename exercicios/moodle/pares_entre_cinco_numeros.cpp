#include <iostream>

using namespace std;

int main(){
    int N = 0; // Número
    int P = 0; // Variável auxiliar que soma a quantidade de pares

    for(int i = 0 ; i < 5 ; i++){
        cin >> N;
        if((N % 2) == 0){
            P += 1;
        }
    }

    cout << P << " valores pares" << endl;

    return 0;
}