#include <iostream>
#include <string>

using namespace std;

int main(){
    int T = 0; // número de casos de teste
    string jogadorA; // símbolo do jogador A
    string jogadorB; // símbolo do jogador B
    
    cin >> T;
    
    for(int i = 0 ; i < T ; i++){
        getline(cin >> ws, jogadorA);
        getline(cin >> ws, jogadorB);
        
        if(jogadorA == "pedra" && jogadorB == "papel"){
            cout << "Jogador B" << endl;
        } else if(jogadorA == "pedra" && jogadorB == "tesoura"){
            cout << "Jogador A" << endl;
        } else if(jogadorA == "papel" && jogadorB == "pedra"){
            cout << "Jogador A" << endl;
        } else if(jogadorA == "papel" && jogadorB == "tesoura"){
            cout << "Jogador B" << endl;
        } else if(jogadorA == "tesoura" && jogadorB == "papel"){
            cout << "Jogador A" << endl;
        } else if(jogadorA == "tesoura" && jogadorB == "pedra"){
            cout << "Jogador B" << endl;
        } else {
            cout << "Empate" << endl;
        }

    }
    
    return 0;
}