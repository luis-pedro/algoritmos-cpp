#include <iostream>

using namespace std;

int main(){
    int N = 0; //Nota

    cin >> N;

    while(N > 0){
        if(N > 60){
            cout << "passou!" << endl;
        } else{
            cout << "nao passou" << endl;
        }

        cin >> N;
    }

    cout << "saiu do programa" << endl;

    return 0;
}