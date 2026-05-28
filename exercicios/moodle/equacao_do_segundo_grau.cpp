#include <iostream>
#include <cmath>

using namespace std;

float calc_delta(float a, float b, float c){
    float D = 0; // Variável do delta

    D = (pow(b,2) - (4 * a * c));

    return D;

    
}

int calc_raizes(float a, float b, float c, float &x1, float &x2){

}

int main(){
    int a,b,c,delta,raizes,r1,r2;

    cin >> a >> b >> c;

    if(a != 0){
        delta = calc_delta(a,b,c);

    } else{
        cout << "Impossivel calcular";
    }

    return 0;
}