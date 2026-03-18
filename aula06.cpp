#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;

    cout << "Digite seu nome: " << endl;
    getline(cin >> ws, name);
    
    cout << "É um prazer lhe conhecer, " << name << endl;

    return 0;
}