#include <iostream>
#include <iomanip>

using namespace std;

float ideal(float h, char sexo){
    float peso = 0;

    if(sexo == 'M'){
        peso = 72.7 * h - 58;
    } else if(sexo == 'F'){
        peso = 62.1 * h - 44.7;
    }

    return peso;
}

int main(){
    float a = 0; // Altura da pessoa
    char s; // Sexo da pessoa

    float I = 0; // Peso ideal

    cin >> a;
    cin >> s;

    I = ideal(a,s);

    cout << fixed << setprecision(2);
    cout << "Peso ideal = " << I << " kg";

    return 0;
}