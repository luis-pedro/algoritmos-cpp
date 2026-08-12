#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double R = 0;
    double pi = 3.14159;
    double valor_da_area = 0;
    cin >> R;

    valor_da_area = pi * pow(R,2);

    cout << fixed << setprecision(3);
    cout << "AREA = " << valor_da_area << endl;

    return 0;
}