#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double N; //Variável da Nota
    double M; //Variável da Média

    int X = 1;

    while(X == 1){

        int A = 0; //Variável Auxiliar
        M = 0;

        while(A < 2){
            cin >> N;

            if(N >= 0 && N <= 10){
                M += N;
                A++;
            } else {
                cout << "nota invalida" << endl;
            }
        }

        M = M / 2;

        cout << fixed << setprecision(2);
        cout << "media = " << M << endl;

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> X;
        } while(X != 1 && X != 2);
    }

    return 0;
}