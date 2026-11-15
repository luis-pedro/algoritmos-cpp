#include <iostream>
#include <string>

using namespace std;

struct cavaleiro{
    string nome;
    int base;
};

int main(){
    int N;
    cavaleiro jedi[1000];
    string busca;
    bool pos = false;
    int pst;
    
     cin >> N;
    
    for(int i = 0 ; i < N ; i++){
        getline(cin >> ws, jedi[i].nome);
        cin >> jedi[i].base;
    }
    
    getline(cin >> ws, busca);
    
    for(int i = 0 ; i < N ; i++){
        if(busca == jedi[i].nome){
            pos = true;
            pst = i;
            break;
        } else{
            pos = false;
        }
    }
    
    if(pos){
        cout << "Este cavaleiro esta na base " << jedi[pst].base << endl;
    } else{
        cout << "Este cavaleiro nao esta cadastrado" << endl;
    }
    
    return 0;
}