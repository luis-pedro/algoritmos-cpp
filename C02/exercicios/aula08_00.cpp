#include <iostream>

using namespace std;

int main(){
    int num = 0;
    int soma = 0;

    cin >> num;
    while(num != -1){
        soma += num;
        cin >> num;
    }

    cout << "Soma = " << soma << endl;

    return 0;
}