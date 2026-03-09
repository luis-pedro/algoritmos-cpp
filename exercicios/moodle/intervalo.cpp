#include <iostream>

using namespace std;

main() {
    double N = 0;

    cin >> N;

    if ((N >= 0) && (N <= 25)) {
        cout << "Intervalo [0,25]";
    }
    else {
        cout << "Fora de intervalo";
    }

    return 0;
}