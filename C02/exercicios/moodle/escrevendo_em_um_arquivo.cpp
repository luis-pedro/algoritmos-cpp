#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    string nomeArquivo;
    getline(cin >> ws, nomeArquivo);
    
    ofstream arqEscrita;
    ifstream arqLeitura;
    
    float numero[100];
    int x = 0;
    
    arqEscrita.open(nomeArquivo,ofstream::out);
    
    cin >> numero[x];
    
    do{
        arqEscrita << numero[x] << endl;
        
        x++;
        
        cin >> numero[x];
    }
    while(numero[x] != 0);
    
    arqEscrita.close();
    
    arqLeitura.open(nomeArquivo,ifstream::in);
    x = 0;
    
    while(!arqLeitura.eof()){
    arqLeitura >> numero[x];

    if(!arqLeitura.eof()){
        cout << fixed << setprecision(2) << numero[x] << " ";
    }

    x++;
    }
    
    arqLeitura.close();
    return 0;
}