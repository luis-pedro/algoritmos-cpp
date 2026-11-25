#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void converte(float F, float &C, float &K){
    C = (5 * (F - 32)) / 9;

    K = C + 273;
}

int main(){
    float Fah = 0; // Valor em Fahrenheit
    float Cel = 0; // Valor em Celsius
    float Kel = 0; // Valor em Kelvin

    cin >> Fah;

    converte(Fah, Cel, Kel);

    cout << fixed << setprecision(2) << "Celsius: " << Cel << endl;
    cout << fixed << setprecision(2) << "Kelvin: " << Kel << endl;

    return 0;
}