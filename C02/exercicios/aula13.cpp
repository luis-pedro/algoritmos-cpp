#include <iostream>

using namespace std;

struct aluno
{
    string nome;
    string email;
    string curso;
    int telefone;
    int matricula;       
};

int main(){
    aluno aluno1;

    cin >> aluno1.nome >> aluno1.email >> aluno1.curso;
    cin >> aluno1.telefone >> aluno1.matricula;

    return 0;
}