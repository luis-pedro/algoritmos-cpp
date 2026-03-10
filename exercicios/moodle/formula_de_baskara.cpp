#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double A = 0;
    double B = 0;
    double C = 0;
    double D = 0; //delta
    double R1 = 0;
    double R2 = 0;
    cin >> A >> B >> C;

    D = (pow(B,2)-4*A*C);

    if((A == 0) || (D < 0)) {
        cout << "Impossivel calcular";
    } else {
        R1 = ((-B+sqrt(D))/(2*A));
        R2 = ((-B-sqrt(D))/(2*A));

        cout << fixed << setprecision(5);
        cout << "R1 = " << R1 << endl;

        cout << fixed << setprecision(5);
        cout << "R2 = " << R2 << endl;
    }

    return 0;
}