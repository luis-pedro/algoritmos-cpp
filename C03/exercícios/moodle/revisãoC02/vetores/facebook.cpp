#include <iostream>

using namespace std;

int main(){
    int N = 0; // quantidade de usuários
    int vet[100]; // vetor da quantidade de contatos

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> vet[i];
    }

    int M = vet[0]; // maior número de contatos
    int m = vet[0]; // menor número de contatos

    for(int i = 0; i < N; i++){

        if(vet[i] > M){
            M = vet[i];
        }

        if(vet[i] < m){
            m = vet[i];
        }
    }

    cout << "Maior numero de contatos: " << M << endl;
    cout << "Menor numero de contatos: " << m << endl;

    return 0;
}