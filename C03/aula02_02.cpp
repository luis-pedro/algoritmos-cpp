#include <iostream>

using namespace std;

int main(){
    int vetor[3];
    int *p = NULL;

    vetor[0] = 2; vetor[1] = 5; vetor[2] = 8;

    // cout << vetor << endl; -> vetor é um ponteiro, por isso, o cout retorna um endereço

    p = vetor;
    
    for(int i = 0 ; i < 3 ; i++){
        cin >> *p;
        p++;
    }

    /*
    p = vetor;

    for(int i = 0 ; i < 3 ; i++){
        cout << *p << endl;
        p++;
    }
    */

    p = vetor + 2;
    cout << *p << endl;

    return 0;
}