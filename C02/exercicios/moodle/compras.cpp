#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct dados{ // Struct para armazenar os dados dos produtos
    string produto; // Nome do produto
    float preco; // Preço do produto
};

int main(){
    ifstream arqLeitura; // Leitura do arquivo
    dados produtos[100]; // Vetor para armazenar a struct dos produtos
    int i = 0; // Índice do vetor
    
    string nomeProduto; // Nome do produto comprado
    int quantidade; // Quantidade do produto comprado
    float precoTotal; // Preco total do produto pago
    
    string arquivo; // Nome do arquivo que vai ser lido
    getline(cin >> ws, arquivo);
    
    arqLeitura.open(arquivo,ifstream::in);
    
    while(!arqLeitura.eof()){
        arqLeitura >> produtos[i].produto;
        arqLeitura >> produtos[i].preco;
        
        i++;
    }
    
    getline(cin >> ws, nomeProduto);
    cin >> quantidade;
    
    for(int j = 0 ; j <= i ; j++){
        if(nomeProduto == produtos[j].produto){
            precoTotal = produtos[j].preco * quantidade;
        }
    }
    
    cout << fixed << setprecision(2) << "R$ " << precoTotal;
    
    arqLeitura.close();
    return 0;
}