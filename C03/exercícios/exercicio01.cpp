#include <iostream>

using namespace std;

int main(){
    int vet[100]; //Vetor com os números
    int N = 0; //Variável da quantidade de números a serem armazenados
    int X = 0; //Variável da poição do número que você deseja encontrar
    int V = 0; //Variável para armazenar o valor da posição

    cout << "Informe a quantidade de numeros a serem armazenados no vetor: ";
    cin >> N;

    for(int i = 0 ; i < N ; i++){
        cout << "Informe o numero: ";
        cin >> vet[i];
    }

    cout << "Informe a posicao do numero que voce deseja encontrar: ";
    cin >> X;

    for(int j = 0 ; j < N ; j++){
        if(j == X){
            V = vet[j];
            break;
        }
    }
    
    if(V == 0){
        cout << "Numero X nao encontrado";
    } else{
        cout << "O numero da posicao e: " << V;
    }

    return 0;
}