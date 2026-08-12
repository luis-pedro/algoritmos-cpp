#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int L = 0; //largura
    int C = 0; //comprimento
    int R1 = 0; //raio 1
    int R2 = 0; //raio 2
    int D = 0; //diâmetro total
    int dm = 0;

    cin >> L >> C >> R1 >> R2;

    R1 = R1 * 2; //diâmetro 1
    R2 = R2 * 2; //diâmetro 2
    if(R1 < R2){
        dm = R2;
    }else{
        dm = R1;
    }

    D = R1 + R2;

    if(((D <= L) && (dm <= C)) || ((D <= C) && (dm <= L)) || ((sqrt(pow(L,2)+pow(C,2)) >= D) && (D-(R1-R2) <= L) && (D-(R1-R2) <= C))){
        cout << "S";
    } else{
        cout << "N";
    }

    return 0;
}