#include <iostream>

using namespace std;

int main(){
    int N = 0;
    cout << "Digite a quantidade de pessoas: ";
    cin >> N;

    int idd = 0; // Idade das pessoas
    int R = 0; // Idade da pessoa mais velha

    for(int i = 0 ; i < N ; i++){
        cout << "Digite a idade da pessoa " << i + 1 << " : ";
        cin >> idd;

        if(R < idd){
            R = idd;
        }
    }

    cout << "A pessoa mais velha tem: " << R << " anos" << endl;

    return 0;
}