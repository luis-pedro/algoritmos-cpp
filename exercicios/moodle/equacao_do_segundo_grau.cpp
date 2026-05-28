#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float calc_delta(float a, float b, float c){
    float D = 0; // Variável do delta

    D = (pow(b,2) - (4 * a * c));

    return D;

}

int calc_raizes(float a, float b, float c, float D,float &x1, float &x2){

    if(D < 0){
        return 1;
    }

    x1 = ((- b) - sqrt(D)) / ( 2 * a );

    x2 = ((- b) + sqrt(D)) / ( 2 * a );

    return 0;
}

int main(){
    float a,b,c,delta,r1,r2;
    int resultado;

    cin >> a >> b >> c;

    if(a != 0){
        delta = calc_delta(a,b,c);

    } else{
        cout << "Impossivel calcular";
    }

    resultado = calc_raizes(a,b,c,delta,r1,r2);

    if(resultado == 1){
        cout << "Impossivel calcular" << endl;
    } else{
        cout << fixed << setprecision(5) << "x1 = " << r1 << endl;
        cout << fixed << setprecision(5) << "x2 = " << r2 << endl;
    }

    return 0;
}