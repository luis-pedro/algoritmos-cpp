#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double A = 0;
    double B = 0;
    double C = 0;
    double D = 0; //delta
    cin >> A >> B >> C;

    D = (pow(B,2)-(4*A*C));

    cout << B << endl;

    return 0;
}