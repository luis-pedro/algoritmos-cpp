#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void media(int x, int y, float &m){
    m = sqrt(x * y);
}

int main(){
    int X = 0; // Primeiro valor
    int Y = 0; // Segundo valor
    float resultado;

    cin >> X >> Y;

    media(X,Y,resultado);

    cout << fixed << setprecision(2) << "Media: " << resultado;

    return 0;
}