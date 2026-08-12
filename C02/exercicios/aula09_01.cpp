#include <iostream>

using namespace std;

int main(){
    int notas[5]; //array para armazenar as notas
    int som = 0; //variável para armazenar a soma das notas

    for(int i = 0 ; i < 5 ; i++){
        cin >> notas[i];
        cout << "Nota " << i+1 << ": " << notas[i] << endl;
        som += notas[i];
    }

    float R = (som / 5.0);  
    cout << "Media: " << R << endl;

    return 0;
}