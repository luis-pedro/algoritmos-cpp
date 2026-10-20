#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N; // tamanho do vetor
    int *vetor = NULL; // vetor
    float media; // média dos elementos
    
    cin >> N;
    
    vetor = new int[N];
    
    for(int i = 0 ; i < N ; i++){
        cin >> vetor[i];
    }
    
    for(int i = 0 ; i < N ; i++){
        media += vetor[i];
    }
    
    media = media/N;
    
    cout << fixed << setprecision(2) << media;
    
    delete [] vetor;
    
    return 0;
}