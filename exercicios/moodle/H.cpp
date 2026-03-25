#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N = 0; //Número
    cin >> N;

    float A = 0; //Variável Auxiliar Divisora

    float H = 0;

    if(N <= 1000){
        for(int i = 0 ; i < N ; i++){

            A += 1; //Número que irá dividir

            H = H + (1/A);

        }
    }

    cout << fixed << setprecision(4) << H << endl;

    return 0;
}