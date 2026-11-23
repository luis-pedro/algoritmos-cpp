#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;


double calcularAreaCirculo(double raio){
    double pi = 3.14159;
    double R = 0; // Variável da resposta

    R = pi * pow(raio,2);

    return R;
}

double calcularAreaRetangulo(double base, double altura){
    double R = 0; // Variável da resposta

    R = base * altura;

    return R;
}

double calcularAreaTriangulo(double base, double altura){
    double R = 0; // Variável da resposta

    R = (base * altura) / 2;

    return R;
}

int main(){
    string fg; // Variável para armazenar a figura geomética

    //CIRCULO
    double r = 0; // Variável para armazenar o raio do círculo
    double respC = 0; // Variável para armazenar a resposta do círculo

    //RETÂNGULO E TRIÂNGULO
    double b = 0; // Variável para armazenar a base
    double h = 0; // Variável para armazenar a altura
    double respR = 0; // Variável para armazenar a resposta do retângulo
    double respT = 0; // Variável para armazenar a resposta do triângulo

    getline(cin >> ws, fg);
    while(fg != "fim"){

        if(fg == "circulo"){
            cin >> r;
            respC = calcularAreaCirculo(r);
            cout << fixed << setprecision(2) << "area = " << respC << endl;
        } else if(fg == "retangulo"){
            cin >> b >> h;
            respR = calcularAreaRetangulo(b,h);
            cout << fixed << setprecision(2) << "area = " << respR << endl;
        } else if(fg == "triangulo"){
            cin >> b >> h;
            respT = calcularAreaTriangulo(b,h);
            cout << fixed << setprecision(2) << "area = " << respT << endl;
        }

        getline(cin >> ws, fg);
    }
    
}