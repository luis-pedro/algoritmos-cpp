#include <iostream>
#include <cstdlib>

using namespace std;

//Exercício resolvido por:
//Luis Pedro do Carmo Costa
//Davi Amorim Santos

int main(){
    int X = 0; 
    float dist = 0, comb = 0, cons = 0; 
    int color = 0;
    int idioma = 0;

    while(X != 4){
        cout << "\n--------------------------------------------" << endl;
        if (idioma == 0) {
            cout << "MENU PRINCIPAL" << endl;
            cout << "1 - Trocar a cor da letra" << endl;
            cout << "2 - Alterar o idioma" << endl;
            cout << "3 - Calcular o consumo medio" << endl;
            cout << "4 - Sair" << endl;
            cout << "Opcao: ";
        } else {
            cout << "MAIN MENU" << endl;
            cout << "1 - Change font color" << endl;
            cout << "2 - Change language" << endl;
            cout << "3 - Calculate average consumption" << endl;
            cout << "4 - Exit" << endl;
            cout << "Option: ";
        }
        cin >> X;

        switch(X){
            case 1:
                if (idioma == 0) {
                    cout << "Escolha a cor: (1-Verde, 2-Azul, 3-Vermelho): ";
                } else {
                    cout << "Choose color: (1-Green, 2-Blue, 3-Red): ";
                }
                cin >> color;

                if(color == 1) system("color 02");
                else if(color == 2) system("color 01");
                else if(color == 3) system("color 04");
                else {
                    if (idioma == 0) cout << "Cor invalida!" << endl;
                    else cout << "Invalid color!" << endl;
                }
                break;

            case 2:
                if (idioma == 0) {
                    idioma = 1;
                    cout << "Language changed to English!" << endl;
                } else {
                    idioma = 0;
                    cout << "Idioma alterado para Portugues!" << endl;
                }
                break;

            case 3:
                if (idioma == 0) {
                    cout << "--- CALCULO DE CONSUMO ---" << endl;
                    cout << "Digite a distancia (km): ";
                    cin >> dist;
                    cout << "Digite os litros gastos: ";
                    cin >> comb;
                } else {
                    cout << "--- CONSUMPTION CALCULATION ---" << endl;
                    cout << "Enter distance (km): ";
                    cin >> dist;
                    cout << "Enter liters spent: ";
                    cin >> comb;
                }

                if(comb > 0){
                    cons = dist / comb;
                    if (idioma == 0) cout << "Consumo: " << cons << " km/L" << endl;
                    else cout << "Consumption: " << cons << " km/L" << endl;
                } else {
                    if (idioma == 0) cout << "ERRO: O combustivel deve ser maior que 0!" << endl;
                    else cout << "ERROR: Fuel must be greater than 0!" << endl;
                }
                break;

            case 4:
                if (idioma == 0) cout << "Saindo..." << endl;
                else cout << "Exiting..." << endl;
                break;

            default:
                if (idioma == 0) cout << "Opcao Invalida!" << endl;
                else cout << "Invalid Option!" << endl;
                break;
        }
    }
    return 0;
}