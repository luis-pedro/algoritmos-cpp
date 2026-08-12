#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double A = 0;
    double B = 0;
    double C = 0;
    double T = 0; //area do triangulo retangulo
    double CI = 0; //area do circulo
    double TR = 0; //area do trapezio
    double Q = 0; //area do quadrado
    double R = 0; //area do retangulo

    cin >> A >> B >> C;

    T = (A * C)/2;
    CI = (3.14159 * pow(C,2));
    TR = ((A+B) * C)/2;
    Q = pow(B,2);
    R = A * B;

    cout << fixed << setprecision(3);
    cout << "area do triangulo retangulo: " << T << endl;

    cout << fixed << setprecision(3);
    cout << "area do circulo: " << CI << endl;

    cout << fixed << setprecision(3);
    cout << "area do trapezio: " << TR << endl;

    cout << fixed << setprecision(3);
    cout << "area do quadrado: " << Q << endl;

    cout << fixed << setprecision(3);
    cout << "area do retangulo: " << R << endl;

    return 0;
}