#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    int X[100]; //Vetor X
    int Y[100]; //Vetor Y
    float Z[100]; //Vetor Z
    char Op[100]; //Operação

    int N = 0;

    int A = 0; //Variável auxiliar A
    int B = 0; //Variável auxiliar B

    cin >> N;
    // vetor X
    for(int i = 0; i < N; i++){
        cin >> X[i];
    }

    // vetor Y
    for(int i = 0; i < N; i++){
        cin >> Y[i];
    }

    // vetor Op
    for(int i = 0; i < N; i++){
        cin >> Op[i];
    }

    // processamento
    for(int i = 0; i < N; i++){
        if(Op[i] == '+'){
            Z[i] = X[i] + Y[i];
        }
        else if(Op[i] == '-'){
            Z[i] = X[i] - Y[i];
        }
        else if(Op[i] == '*'){
            Z[i] = X[i] * Y[i];
        }
        else if(Op[i] == '/'){
            Z[i] = (double) X[i] / Y[i];
        }

        // saída
        cout << X[i] << " " << Op[i] << " " << Y[i] << " = ";

        if(Op[i] == '/'){
            cout << fixed << setprecision(2) << Z[i] << endl;
        } else {
            cout << (int)Z[i] << endl;
        }
    }
    return 0;
}