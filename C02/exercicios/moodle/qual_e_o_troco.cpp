#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double D = 0; //total de dinheiro
    double C = 0; //preco da compra
    double T = 0;

    cin >> D >> C;

    T = D - C;

    cout << fixed << setprecision(2);
    cout << "TROCO = " << T << endl;

    return 0;
}