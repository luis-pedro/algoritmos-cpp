#include <iostream>

using namespace std;

int main(){
    int N = 0; //Quantidade de votos
    int V[100]; //Array que armazena os votos

    int N1 = 0; //Pessoas que gostaram
    int N2 = 0; //Pessoas que não gostaram

    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> V[i];
        if(V[i] == 1){
            N1 += 1;
        } else if(V[i] == -1){
            N2 += 1;
        }
    }

    if(N1 > N2){
        cout << "A maioria gostou" << endl;
    } else if(N2 > N1){
        cout << "A maioria não gostou" << endl;
    } else if(N1 == N2){
        cout << "Deu empate" << endl;
    }

    return 0;
}