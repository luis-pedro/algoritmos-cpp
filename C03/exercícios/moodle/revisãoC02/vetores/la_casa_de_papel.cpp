#include <iostream>

using namespace std;

int main(){
    int N = 0; // Quantidade de votos
    int votos[100]; // Vetor dos votos
    int voto;
    
    cin >> N;
    
    for(int i = 0 ; i < N ; i++){
        cin >> votos[i];
        
        voto += votos[i];
    }
    
    if(voto > 0){
        cout << "A maioria gostou" << endl;
    } else if(voto < 0){
        cout << "A maioria nao gostou" << endl;
    } else{
        cout << "Deu empate" << endl;
    }
    
    return 0;
}