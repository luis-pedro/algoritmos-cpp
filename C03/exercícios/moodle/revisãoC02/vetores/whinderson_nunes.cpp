#include <iostream>

using namespace std;

int main(){
    int N = 0; // Quantidade de vídeos a serem analizados
    int vet[100]; // Vetor
    int maior, menor; // Variáveis auxiliares de menor e maior
    
    cin >> N;
    
    for(int i = 0 ; i < N ; i++){
        cin >> vet[i];
        
        if(vet[i] >= 10000000){
            maior += 1;
        } else {
            menor += 1;
        }
    }
    
    cout << maior << " video(s) com mais de 10M views" << endl;
    cout << menor << " video(s) com menos de 10M views" << endl;
    
    return 0;
}