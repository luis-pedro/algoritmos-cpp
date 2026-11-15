#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct padawan{
  string nome;  
  int pontos;
};

int main(){
    int N;
    padawan jedi[1000];
    int melhor = 0;
    double media;
    int pos;
    
    cin >> N;
    
    for(int i = 0 ; i < N ; i++){
        getline(cin >> ws, jedi[i].nome);
        cin >> jedi[i].pontos;
        
        media += jedi[i].pontos;
        
        if(melhor < jedi[i].pontos){
            melhor = jedi[i].pontos;
            pos = i;
        }
    }
    
    media = media / N;
    
    cout << "Padawan com mais pontos: " << jedi[pos].nome << endl;
    cout << "Pontos: " << jedi[pos].pontos << endl;
    cout << fixed << setprecision(2) << "Media da turma: " << media << " pontos" << endl;
    
    return 0;
}