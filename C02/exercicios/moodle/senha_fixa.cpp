#include <iostream>

using namespace std;

int main(){
    int S = 0; //Variável da senha

    cin >> S;
    while(S != 2002){
        cout << "Senha Invalida" << endl;

        cin >> S; 
    }

    cout << "Acesso Permitido" << endl;

    return 0;
}