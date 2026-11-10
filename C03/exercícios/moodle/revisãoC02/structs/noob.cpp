#include <iostream>
#include <iomanip>

using namespace std;

struct dados{
    int matricula;  
    double nota1;
    double nota2;
};

int main(){
    dados aluno;
    
    cin >> aluno.matricula;
    cin >> aluno.nota1;
    cin >> aluno.nota2;
    
    double media = ((aluno.nota1 * 2) + (aluno.nota2 * 3)) / 5;
    
    cout << fixed << setprecision(2) << "Matricula do aluno: " << aluno.matricula << endl;
    cout << fixed << setprecision(2) << "Nota da primeira prova: " << aluno.nota1 << endl;
    cout << fixed << setprecision(2) << "Nota da segunda prova: " << aluno.nota2 << endl;
    cout << fixed << setprecision(2) << "Media: " << media << endl;
    
    return 0;
}