#include <iostream>

using namespace std;

int soma(int n1, int n2){
    int respS = n1 + n2;

    return respS;
}

int subtracao(int n3, int n4){
    int respSub = n3 - n4;

    return respSub;
}

int multiplicacao(int n5, int n6){
    float respMultp = n5 * n6;

    return respMultp;
}

int divisao(int n7 , int n8){
    float respDivisi = n7 / n8;

    return respDivisi;
}

int main(){
    int a = 0; //Número 01
    int b = 0; //Número 02

    int Rsm = 0; //Resultado da soma
    int Rsub = 0; //Resultado da subtração
    float Rmult = 0; //Resultado da multiplicação
    float Rdiv = 0; //Resultado da divisão

    cin >> a >> b;

    Rsm = soma(a,b);
    Rsub = subtracao(a,b);
    Rmult = multiplicacao(a,b);
    Rdiv = divisao(a,b);

    cout << "A soma dos valores e: " << Rsm << endl;
    cout << "A subtracao dos valores e: " << Rsub << endl;
    cout << "A multiplicacao dos valores e: " << Rmult << endl;
    cout << "A divisao dos valores e: " << Rdiv << endl;

    return 0;
}