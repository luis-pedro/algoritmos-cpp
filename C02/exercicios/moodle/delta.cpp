#include <iostream>
#include <cmath>

using namespace std;

float calc_delta(float a, float b, float c){
    float D = 0; // Variável do delta

    D = (pow(b,2) - (4 * a * c));

    return D;
}

int main(){
    int a,b,c,delta;

    cin >> a >> b >> c;

    delta = calc_delta(a,b,c);

    cout << "delta = " << delta << endl;

    return 0;
}