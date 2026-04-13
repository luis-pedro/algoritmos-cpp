#include <iostream>

using namespace std;

int main(){
    int N[100]; //Vetor para armazenar os números
    int V = 0; //Variável do número de verificação
    int i = 0; //Variável auxiliar para o loop
    int A = 0; //Variável auxiliar

    cin >> N[A];
    cout << "Elemento " << N[0] << " armazenado na posicao " << A << endl;

    // Continua lendo os números até que o primeiro número seja 0
    while(N[A] != 0){
        A += 1;
        cin >> N[A];
        cout << "Elemento " << N[A] << " armazenado na posicao " << A << endl;
    }

    // Verifica se o número de verificação está no vetor
    cin >> V;
    cout << "Numero de verificacao: " << V << endl;
    cout << N[A] << endl;
    for(i = 0; i < A; i++){
        if(N[i] == V){
            cout << "Elemento " << V << " encontrado na posicao " << i << endl;
            break;
        } 
    }

    if(i==A){
        cout << "Elemento " << V << " nao encontrado" << endl;
    }

    return 0;
}