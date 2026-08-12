#include <iostream>
#include <string>

using namespace std;

struct produto
{
    int codigo;
    string descricao;
    float preco;

};

void cadastro(produto *dados,int codigo){
    for(int i = 0 ; i < 2 ; i++){
        if(dados[i].codigo == codigo){
            dados[i].codigo = 0;
            dados[i].descricao = "PRODUTO DELETADO";
            dados[i].preco = 0.0;
        }
    }
}

int main(){
    produto dados[10]; // Criação do vetor do struct

    int conf = 0; // Variável para conferir o código do produto

    int i = 0; // Variável auxiliar do for

    for(i = 0 ; i < 2 ; i++){
        cout << "Informe o codigo do produto: ";
        cin >> dados[i].codigo;
        cout << "Informe a descricao do produto: ";
        getline(cin >> ws, dados[i].descricao);
        cout << "Informe o preco do produto: ";
        cin >> dados[i].preco;
    }

    cout << "Informe qual produto voce deseja deletar: ";
    cin >> conf;

    cadastro(dados,conf);

    cout << "--------------------------" << endl;
    cout << "PRODUTOS" << endl;
    cout << "--------------------------" << endl;

    for(i = 0 ; i < 2 ; i++){
        cout << dados[i].codigo << endl;
        cout << dados[i].descricao << endl;
        cout << dados[i].preco << endl;
        cout << "---------" << endl;
    }

    return 0;
}