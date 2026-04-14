#include <iostream>

using namespace std;

int main(){
    int N = 0; //Número da tabuada

    cin >> N;
    for(int i = 0 ; i <= 10 ; i++){
        cout << N << " x " << i << " = " << N * i << endl;
    }

    return 0;
}