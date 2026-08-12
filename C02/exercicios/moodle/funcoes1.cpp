#include <iostream>
#include <cmath>

using namespace std;

int calc_a(int x){
    int R = 0; // Variável de resposta
    int p1 = 0; // Variável da primeira parte da conta
    int p2 = 0; // Variável da segunda parte da conta
    int p3 = 0; // Variável da terceira parte da conta

    p1 = pow(x,2);
    p2 = p1 * 2;
    p3 = (3 * x) - 1;

    R = p2 + p3;

    return R;
}

int calc_b(int x){
    int R = 0; // Variável de resposta

    R = pow(x,3);

    return R;
}

int calc_c(int y){
    int R = 0; // Variável de resposta

    R = pow(y,3);

    return R;
}

int main()
{
    int a,b,c,x,y;

    cin >> x >> y;

    a = calc_a(x);
    cout << "a = " << a << endl;

    b = calc_b(x);
    cout << "b = " << b << endl;

    c = calc_c(y);
    cout << "c = " << c << endl;

    return 0;
}