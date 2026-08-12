#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N = 0; // Valor inteiro
    cin >> N;

    int R = 0; // Resposta

    if((N < 2000) && (N > 5)){
        for(int i = 0 ; i <= N ; i++){
            if(((i % 2) == 0) && i > 0){
                R = pow(i,2);
                cout << i << "^" << "2 = " << R << endl;
            }
        }
    }
    return 0;
}