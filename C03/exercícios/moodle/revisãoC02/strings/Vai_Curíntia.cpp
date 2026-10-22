#include <iostream>
#include <string>

using namespace std;

int main(){
    string nome;
    int idd;
    int N;
    bool ver = false;
    
    cin >> N;
    
    for(int i = 0 ; i < N ; i++){
        getline(cin >> ws, nome);
        cin >> idd;
        
        if(idd >= 18){
            ver = true;
            cout << nome << " " << idd << endl;
        }
    }
    
    if(ver == false){
        cout << "Nenhum jogador com 18 anos ou mais" << endl;
    }
    
    return 0;
}