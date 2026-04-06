#include <iostream>

using namespace std;

int main(){
    int N = 0; //Número de amigos do Facebook
    cin >> N;

    int CTT[1000]; //Contagem de contatos de cada amigo

    int maior = 0; //Variável para armazenar o maior número de contatos
    int menor = 0; //Variável para armazenar o menor número de contatos

    if(N > 0 && N < 1000){
        for (int i = 0 ; i < N ; i++){
            cin >> CTT[i];
            if(CTT[i] > maior){
                maior = CTT[i];
            }
            if(CTT[i] < menor){
                menor = CTT[i];
            }
        }
    }

    cout << "Maior número de contatos: " << maior << endl;
    cout << "Menor número de contatos: " << menor << endl;
    
    return 0;
}