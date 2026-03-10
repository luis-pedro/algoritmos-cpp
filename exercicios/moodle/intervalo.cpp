#include <iostream>

using namespace std;

 int main() {
    double N = 0;

    cin >> N;

    if ((N >= 0) && (N <= 25)) {
        cout << "Intervalo [0,25]";
    }
    else if ((N > 25) && (N <= 50)) {
        cout << "Intervalo (25,50]";
    }
    else if ((N > 50) && (N <= 75)) {
        cout << "Intervalo (50,75]";
    }
    else if ((N > 75) && (N <= 100)) {
        cout << "Intervalo (75,100]";
    }
    else {
        cout << "Fora de intervalo";
    }

    return 0;
}