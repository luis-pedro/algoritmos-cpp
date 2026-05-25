#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct jedi
{
    string nome;
    int pontos;
};


int main(){
    int N = 0; // Quantidade de jedis a serem cadastrados
    
    string jediNM; // Jedi com o maior nome de acordo com a pontuação
    int jediPM = 0; // Jedi com a maior pontuação

    float media = 0; // Média da pontuação
    int PM = 0; // Pontuação máxima

    jedi numero[100];

    cin >> N;

    for(int i = 0 ; i < N ; i++){
        getline(cin >> ws, numero[i].nome);
        cin >> numero[i].pontos;

        PM += numero[i].pontos;

        if(numero[i].pontos > jediPM){
            jediPM = numero[i].pontos;
            jediNM = numero[i].nome;
        }
    }

    media = PM / N;

    cout << "Padawan com mais pontos: " << jediNM << endl;
    cout << "Pontos: " << jediPM << endl;
    cout << fixed << setprecision(2) << "Media da turma " << media;

    return 0;
}