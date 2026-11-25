#include <iostream>
#include <iomanip>

using namespace std;

float media(int notas[], int nAlunos){
    float R = 0; // Variável do resultado
    float soma = 0; // Soma de todas as notas do vetor

    for(int i = 0; i < nAlunos ; i++){
        soma += notas[i];
    }

    R = soma / nAlunos;

    return R;
}

int main(){
    int N = 0; // Quantidade de alunos do professor
    int notas[100]; // Vetor das notas
    float M = 0; // Variável da média

    cin >> N;

    for(int i = 0; i < N ; i++){
        cin >> notas[i];
    }

    M = media(notas,N);

    cout << fixed << setprecision(2) << "Media da turma = " << M << endl;

    return 0;
}