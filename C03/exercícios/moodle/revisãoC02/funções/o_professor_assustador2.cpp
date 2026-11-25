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

int nAbaixo(int notas[], int nAlunos, float media){
    int S = 0; // Variável da soma

    for(int i = 0 ; i < nAlunos ; i++){
        if(notas[i] < media){
            S += 1;
        }
    }

    return S;
}

int nAcima(int notas[], int nAlunos, float media){
    int S = 0; // Variável da soma

    for(int i = 0 ; i < nAlunos ; i++){
        if(notas[i] <= media){
            S += 1;
        }
    }

    return S;
}

int main(){
    int N = 0; // Quantidade de alunos do professor
    int notas[100]; // Vetor das notas
    float M = 0; // Variável da média

    int nAB = 0; // Quantidade de alunos abaixo da média
    int nAC = 0; // Quantidade de alunos acima da média

    cin >> N;

    for(int i = 0; i < N ; i++){
        cin >> notas[i];
    }

    M = media(notas,N);

    nAB = nAbaixo(notas,N,M);
    nAC = nAcima(notas,N,M);

    cout << fixed << setprecision(2) << "Media da turma = " << M << endl;
    cout << "Alunos com nota abaixo da media: " << nAB << endl;
    cout << "Alunos com nota acima da media: " << nAC << endl;
    return 0;
}