#include <iostream>
#include <iomanip>

using namespace std;

struct dados
{
    int matricula;
    float nota1;
    float nota2;
};

int main(){
    dados aluno;

    cin >> aluno.matricula;
    cin >> aluno.nota1;
    cin >> aluno.nota2;

    cout << "Matricula do aluno: " << aluno.matricula << endl;
    cout << fixed << setprecision(2) << "Nota da primeira prova: " << aluno.nota1 << endl;
    cout << fixed << setprecision(2) << "Nota da segunda prova: " << aluno.nota2 << endl;

    return 0;
}