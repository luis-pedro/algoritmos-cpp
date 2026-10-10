#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N = 0; // Quantidade de alunos
    float notas[100]; // Vetor da nota dos alunos
    int menor, maior; // Varíaveis auxiliares da média
    float nota = 0; // Nota total
    float media = 0; // Média da turma
    
    cin >> N;
    
    for(int i = 0 ; i < N ; i++){
        cin >> notas[i];
        nota += notas[i];
    }
    
    media = nota/N;
    
    cout << fixed << setprecision(2) << "Media da turma: " << media << endl;
    
    for(int j = 0 ; j < N ; j++){
        if(notas[j] >= media){
            maior += 1;
        } else {
            menor += 1;
        }
    }
    
    cout << "Alunos com nota acima da media: " << maior << endl;
    cout << "Alunos com nota abaixo da media: " << menor << endl;
    
    return 0;
}