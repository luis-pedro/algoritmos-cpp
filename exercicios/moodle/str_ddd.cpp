#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    getline(cin >> ws, name);

    if(name == "Brasilia"){
        cout << "61" << endl;
    } else if(name == "Salvador"){
        cout << "71" << endl;
    } else if(name == "Sao Paulo"){
        cout << "11" << endl;
    } else if(name == "Rio de Janeiro"){
        cout << "21" << endl;
    } else if(name == "Juiz de Fora"){
        cout << "32" << endl;
    } else if(name == "Campinas"){
        cout << "19" << endl;
    } else if(name == "Vitoria"){
        cout << "27" << endl;
    } else if(name == "Belo Horizonte"){
        cout << "31" << endl;
    } else if(name == "Santa Rita do Sapucai"){
        cout << "35" << endl;
    } else{
        cout << "DDD nao cadastrado" << endl;
    }

    return 0;
}