#include <iostream>

using namespace std;

int main(){
    int notas[5]; //array para armazenar as notas
    int maior = 0; //variável para armazenar a maior nota

    for(int i = 0 ; i < 5 ; i++){
        cin >> notas[i];
        cout << "Nota " << i+1 << ": " << notas[i] << endl;
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }

    cout << "Maior nota: " << maior << endl;

    return 0;
}