#include <iostream>
#include <iomanip>

using namespace std;

struct dados
{
    int matricula;
    float nota1;
    float nota2;
    float media;
};

int main(){
    dados aluno;

    cin >> aluno.matricula;
    cin >> aluno.nota1;
    cin >> aluno.nota2;

    cout << "Matricula do aluno: " << aluno.matricula << endl;
    cout << fixed << setprecision(2) << "Nota da primeira prova: " << aluno.nota1 << endl;
    cout << fixed << setprecision(2) << "Nota da segunda prova: " << aluno.nota2 << endl;

    aluno.media = ((aluno.nota1 * 2) + (aluno.nota2 * 3)) / 5;

    cout << fixed << setprecision(2) << "Media: " << aluno.media << endl;

    return 0;
}