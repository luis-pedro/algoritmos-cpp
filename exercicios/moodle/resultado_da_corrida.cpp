#include <iostream>

using namespace std;

int main(){
    float N[100]; //Vetor para armazenar o tempo dos corredores

    int V[100]; //Vetor para armazenar a classificação dos corredores

    

    int i = 0; //Variável auxiliar para o loop
    float A = 0;
    int j = 0;
    cin >> N[i];

    while(N[i] != -1){
        i++;
        cin >> N[i];
    }
    A = 1000;
    cout << "Classificacao:" << endl;   
    for(int k = 0; k < i ; k++){
        for(j = 0; j < i; j++){
            if(N[k] < A){
                A = N[k];
            }
        }
        
    }
    for(int k = 0; k < i; k++){
        cout << V[k] << endl;
    }
    return 0;
}