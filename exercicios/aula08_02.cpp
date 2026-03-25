#include <iostream>

using namespace std;

int main(){
    int idd = 0; //Valor das idades
    int A = 0; //Auxiliar das idades

    cin >> idd;
    
    while(idd > 0){
        if(idd < 7){
            A += 1;
        }

        cin >> idd;
    }

    cout << A << " idades menores que 7 anos" << endl;
}