#include <iostream>

using namespace std;

int main(){
    int N = 0; // Quantidade de valores a serem lidos
    cin >> N;

    int V = 0; // Verificação se o número é par ou ímpar

    for(int i = 0 ; i < N ; i++){
        cin >> V;

        if(V == 0){
            cout << "NULL" << endl;
        } else{
            if((V % 2) == 0){
            cout << "EVEN ";
            } else {
            cout << "ODD ";
            }
            if(V > 0){
                cout << "POSITIVE" << endl;
            } else if(V < 0) {
                cout << "NEGATIVE" << endl;
        }
        }
    }

    return 0;
}