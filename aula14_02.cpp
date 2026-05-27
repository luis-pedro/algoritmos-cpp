#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream arqLeitura;
    ofstream arqEscrita;
    int x;

    arqLeitura.open("dados.txt",ifstream::in);

    while(!arqLeitura.eof()){ // Enquanto o arquivo não for finalizado sua leitura
        arqLeitura >> x;
        cout << "x = " << x << endl;
    }
    
    arqLeitura.close(); // Utilizado para fechar o arquivo

    arqEscrita.open("dados.txt",ofstream::out);

    arqEscrita << "Corinthians Campeao!" << endl;

    arqEscrita.close();
    return 0;
}