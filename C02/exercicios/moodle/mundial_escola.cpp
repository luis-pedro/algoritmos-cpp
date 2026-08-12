#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float notas[1000]; //array para armazenar as notas
    int N = 0; //número de alunos

    float media = 0; //variável para armazenar a média das notas
    int AC = 0; //variável para armazenar a quantidade de alunos acima da média
    int AB = 0; //variável para armazenar a quantidade de alunos abaixo da média

    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> notas[i];

        media += notas[i];

    }

    media /= N; 
    cout << fixed << setprecision(2) << "Media " << media << endl;

    for (int i = 0; i < N; i++) {
        if (notas[i] > media) {
            AC++;
        } else if (notas[i] < media) {
            AB++;
        }
    }

    cout << "Alunos acima da media: " << AC << endl;
    cout << "Alunos abaixo da media: " << AB << endl;

    return 0;
}