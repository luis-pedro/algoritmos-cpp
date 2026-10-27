#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    int N = 0; // quantidade de alunos
    string aluno;
    
    double N1,N2,N3,N4; // 4 notas dos alunos
    double media; // media do aluno
    
    cin >> N;
    
    for(int i = 0 ; i < N ; i++){
        getline(cin >> ws, aluno);
        cin >> N1 >> N2 >> N3 >> N4;
        
        media = (N1 + 2*N2 + 3*N3 + 4*N4)/10;
        
        cout << fixed << setprecision(2) << aluno << ": " << media << endl;
    }
    
    return 0;
}