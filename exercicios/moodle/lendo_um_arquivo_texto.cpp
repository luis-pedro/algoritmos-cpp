#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream arqLeitura;
    string frase1;
    string frase2;
    
    arqLeitura.open("arquivo.txt",ifstream::in);
    
    getline(arqLeitura >> ws, frase1);
    getline(arqLeitura >> ws, frase2);
    
    cout << frase1 << endl;
    cout << frase2;
    
    arqLeitura.close();
    return 0;
}