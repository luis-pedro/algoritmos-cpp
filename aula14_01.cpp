#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream arqLeitura;
    int x;
    int y;

    arqLeitura.open("dados.txt",ifstream::in);
    arqLeitura >> x >> y;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}