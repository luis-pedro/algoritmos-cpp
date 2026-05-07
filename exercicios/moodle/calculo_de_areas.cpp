#include <iostream>
#include <string>

using namespace std;

string menu(string R){
    while(R != "fim"){
        cout << "Funcionando!" << endl;
    }
    getline(cin >> ws, R);
}

//double calcularAreaCirculo(double raio){

//}

int main(){
    string r; //variável para calcular a resposta do menu
    string fg; //variável para armazenar a figura geomética

    getline(cin >> ws, r);
    fg = menu(r);
}