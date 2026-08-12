#include <iostream>

using namespace std;

int main(){
    int N = 0;
    int SN = 0; //Soma dos valores de N

    cout << "Digite um numero que seja inteiro e positivo: ";
    cin >> N;

    for(int i = 0; i <= N ;i++){
        cout << "N = " << i << endl;
        SN = SN + i;
    }

    cout << "A soma de todos os numero e: " << SN << endl;

    return 0;
}