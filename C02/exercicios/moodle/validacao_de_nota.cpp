#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float N = 0; //Variável Nota
    float M = 0; //Variável Média

    int A = 0; //Variável Auxiliar

    cin >> N;
    while(A < 2){
        if((N >= 0) && (N <= 10)){
            A += 1;
            M = M + N;
        } else {
            cout << "nota invalida" << endl;
        }

        cin >> N;
    }

    M = M/2;
    cout << fixed << setprecision(2) << "media = " << M << endl;

    return 0;
}