#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double C = 0; //capital inicial
    double i = 0; //taxa de juros
    int t = 0; //tempo em meses
    double M = 0;
    double L = 0;

    cin >> C >> i >> t;

    i = i/100;

    M = (C * pow((i + 1), t));

    L = M - C;

    cout << fixed << setprecision(2);
    cout << "LUCRO = " << L << endl;

    return 0;
}