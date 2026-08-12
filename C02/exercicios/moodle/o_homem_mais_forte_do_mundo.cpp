#include <iostream>

using namespace std;

struct dados
{
    string nome;
    int n1;
    int n2;
    int n3;
    int n4; 
};

int strongest(dados atleta){
    return atleta.n1 + atleta.n2 + atleta.n3 + atleta.n4;
}

int main(){
    dados competidor[1000]; // Struct

    int N = 0;
    int indice = 0;// Quantidade de atletas inscritos

    int ganhador[1000]; // Vetor da pontuação dos atletas
    int vencedor = 0; // Variável para armazenar o vencedor

    cin >> N;

    for(int i = 0 ; i < N ; i++){
        getline(cin >> ws, competidor[i].nome);
        cin >> competidor[i].n1;
        cin >> competidor[i].n2;
        cin >> competidor[i].n3;
        cin >> competidor[i].n4;
        
    }

    for(int i = 0; i < N ; i++){
        ganhador[i] = strongest(competidor[i]);
    }

    for(int i = 0; i < N ; i++){
        if(vencedor < ganhador[i]){
            vencedor = ganhador[i];
            indice = i;
        }
    }

    cout << "Vencedor: " << competidor[indice].nome << endl;
    

    return 0;
}