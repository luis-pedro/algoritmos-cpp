#include <iostream>

using namespace std;

void calculadora(int a, int b, int &soma, int &sub){
    soma = a + b;
    sub = a - b;
}

int main(){
    int x, y, res1, res2;
    cin >> x >> y;

    calculadora(12, 8, res1, res2);
    cout << res1 << endl << res2 << endl;

    return 0;
}