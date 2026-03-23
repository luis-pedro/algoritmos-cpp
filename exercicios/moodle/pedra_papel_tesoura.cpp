#include <iostream>
#include <string>

using namespace std;

int main(){
    int T = 0; // Número de testes
    cin >> T;

    string SA; // Símbolo do jogador A
    string SB; // Símbolo do jogador B

    for(int i = 0 ; i < T ; i++){
        getline(cin >> ws, SA); // Armazenamento do símbolo do jogador A
        getline(cin >> ws, SB); // Armazenamento do símbolo do jogador B

        if((SA == "pedra") && (SB == "tesoura")){
            cout << "Jogador A" << endl;
        } else if((SB == "pedra") && (SA == "tesoura")){
            cout << "Jogador B" << endl;
        } else if((SA == "tesoura") && (SB == "papel")){
            cout << "Jogador A" << endl;
        } else if((SB == "tesoura") && (SA == "papel")){
            cout << "Jogador B" << endl;
        } else if((SA == "papel" && SB == "pedra")){
            cout << "Jogador A" << endl;
        } else if((SB == "papel" && SA == "pedra")){
            cout << "Jogador B" << endl;
        } else {
            cout << "Empate" << endl;
        }
    }
    
    return 0;
}