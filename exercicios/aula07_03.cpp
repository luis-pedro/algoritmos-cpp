#include <iostream>

using namespace std;

int main(){
    int N = 0;
    cout << "Digite a quantidade de pessoas: ";
    cin >> N;

    int idd = 0; // Idade das pessoas
    int Sidd = 0; // Soma das idades
    int Midd = 0; // Média das idades

    for(int i = 0 ; i < N ; i++){
        cout << "Digite a idade da pessoa " << i + 1 << " : ";
        cin >> idd;

        Sidd = Sidd + idd;
    }

    Midd = Sidd / N;
    cout << "Media das idades: " << Midd << endl;

    return 0;
}