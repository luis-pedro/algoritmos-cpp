#include <iostream>

using namespace std;

void calculadora(int a, int b, int &soma, int &sub, float &mult, float &div){
    soma = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
}

int main(){
    int x, y, res1, res2;
    float res3, res4;
    cin >> x >> y;

    calculadora(x, y, res1, res2, res3, res4);
    cout << res1 << endl << res2 << endl << res3 << endl << res4;

    return 0;
}