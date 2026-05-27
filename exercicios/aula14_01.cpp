#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream arquivo;
    ifstream leitura;

    string musica; // Variável que armazena a música no arquivo
    string musicas[100]; // Músicas

    int i = 0; // Variável para armazenar o índice
    int faixa = 0; // Faixa que o usuário quer que toque


    arquivo.open("musicas.txt",ofstream::out);

    cout << "Informe o nome da musica: ";
    getline(cin >> ws, musica);

    while(musica != "fim"){
        arquivo << musica << endl;

        cout << "Informe o nome da musica: ";
        getline(cin >> ws, musica);
    }

    arquivo.close();

    leitura.open("musicas.txt",ifstream::in);

    while(getline(leitura, musicas[i])){
        //leitura >> musicas[i];
        i++;
    }

    cout << "Qual a faixa que voce gostaria de ouvir: ";
    cin >> faixa;

    cout << "Reproduzindo faixa numero " << faixa << " - musica " << musicas[faixa] << endl;

    leitura.close();

    return 0;
}