#include <iostream>

using namespace std;

int main(){
    int N = 0; // Número
    int C = 0; // Variável contadora

    for(int i = 0 ; i < 6 ; i++){
        cin >> N;

        if(N > 0){
            C = C + 1;
        }
    }

    cout << C << " valores positivos";

    return 0;
}