#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    int N = 0; // Número de alunos da professora
    cin >> N;

    string nome; // Nome dos alunos

    // Nota dos alunos
    int N1 = 0;
    int N2 = 0;
    int N3 = 0;
    int N4 = 0;

    float M = 0; // Média do aluno

    for(int i = 0 ; i < N ; i++){
        getline(cin >> ws, nome); // Armazenamento do nome do aluno
        
        // Armazenamento das notas dos alunos
        cin >> N1;
        cin >> N2;
        cin >> N3;
        cin >> N4;

        // Cálculo da Média
        M = (N1 + (2 * N2) + (3 * N3) + (4 * N4))/10.0;

        // Saída
        cout << nome << endl;
        cout << fixed << setprecision(2);
        cout << M << endl;

    }

    return 0;
}