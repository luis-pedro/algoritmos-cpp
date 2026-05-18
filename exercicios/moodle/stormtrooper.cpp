#include <iostream>
#include <iomanip>

using namespace std;

struct dados{
    float IM; // Índice de Maldade
    float FA; // Força de Abate
    float GA; // Grau de Aptidão
    int ID; // ID do Clone
};

int main(){
    dados clone[100];
    int i = 0; // Variável que contabiliza posições
    float a = 0; // Variável auxiliar para descobrir qual GA é maior
    int b = 0;

    cin >> clone[i].ID;

    while(clone[i].ID != 0){
        cin >> clone[i].IM >> clone[i].FA;

        clone[i].GA = (clone[i].IM + clone[i].FA) / 2;

        if(a < clone[i].GA){
            a = clone[i].GA;
            b = i;
        }

        i++;

        cin >> clone[i].ID;
    }

    cout << fixed << setprecision(2) << "Stormtrooper escolhido: " << clone[b].ID << endl;
    cout << fixed << setprecision(2) << "GA = " << clone[b].GA << endl;

    return 0;
}