#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    string nomeArquivo;
    cin >> nomeArquivo;
    
    ifstream arqLeitura;
    float temperaturas[100];
    int x = 0;
    
    float media = 0;
    
    arqLeitura.open(nomeArquivo,ifstream::in);
    
    while(!arqLeitura.eof()){
        arqLeitura >> temperaturas[x];
        x++;
    }
    
    for(int y = 0 ; y < x ; y++){
        media += temperaturas[y];
    }
    
    media = media / x;
    
    cout << fixed << setprecision(1) << "Temperatura media: " << media << " graus";
    
    arqLeitura.close();
    return 0;
}