#include <iostream>
#include <string>

using namespace std;

struct aluno{
    string nome;
    int matricula;
    string curso;
};

int pesquisaCurso(aluno alunos[], string conferir, int quant){

    int qAlunos = 0;
    
    for(int j = 0 ; j < quant ; j++){
        if(conferir == "GEC"){
            qAlunos += 1;
        } else if(conferir == "GES"){
            qAlunos += 1;
        } else if(conferir == "GEE"){
            qAlunos += 1;
        } else if(conferir == "GET"){
            qAlunos += 1;
        } else if(conferir == "GEA"){
            qAlunos += 1;
        } else if(conferir == "GEP"){
            qAlunos += 1;
        } else if(conferir == "GEB"){
            qAlunos += 1;
        }
    }

    return qAlunos;

}

int main(){
    aluno alunos[100];

    int i = 0; // Variável auxiliar do for
    int N = 0; // Quantidade de alunos que você quer cadastrar

    string conf; // Variável para conferir qual o curso do aluno

    int quantidadeA = 0; // Variável para armazenar a quantidade de alunos

    cin >> N;

    for(i = 0 ; i < N ; i++){
        cout << "Informe o nome do aluno: ";
        getline(cin >> ws, alunos[i].nome);
        cout << "Informe a matricula do aluno: ";
        cin >> alunos[i].matricula;
        cout << "Informe o curso desse aluno: ";
        getline(cin >> ws, alunos[i].curso);
    }

    cout << "================================" << endl;

    //for(i = 0 ; i < N ; i++){
        //cout << alunos[i].nome << endl;
        //cout << alunos[i].matricula << endl;
        //cout << alunos[i].curso << endl;

        //cout << "=================================" << endl;
    //}

    cout << "Informe qual o curso que voce deseja conferir: ";
    getline(cin >> ws, conf);

    quantidadeA = pesquisaCurso(alunos, conf, N);

    cout << "O curso selecionado tem a quantidade de " << quantidadeA << " alunos" << endl;

    return 0;
}