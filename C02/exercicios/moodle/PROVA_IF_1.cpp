#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float p = 0; //peso
    float h = 0; //altura
    cin >> p >> h;

    float imc = 0;
    imc = p/pow(h,2);

    if(imc < 18.5){
        cout << "Baixo peso" << endl;
    } else if((imc >= 18.5) && (imc < 25)){
        cout << "Normal";
    } else if((imc >= 25) && (imc < 30)){
        cout << "Sobrepeso";
    } else if(imc >=30){
        cout << "Obeso";
    }
    return 0;
}