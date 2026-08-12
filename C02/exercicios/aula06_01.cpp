#include <iostream>
#include <string>

using namespace std;

int main(){
    string name1;
    string name2;

    getline(cin >> ws, name1);
    getline(cin >> ws, name2);

    if(name1 < name2){
        cout << "Ordem alfabetica " << name1 << ", " << name2 << endl;
    } else{
        cout << "Ordem alfabetica " << name2 << ", " << name1 << endl;
    }

    return 0;
}