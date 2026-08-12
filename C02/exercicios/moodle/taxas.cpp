#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float S = 0; //Salário
    float I = 0; //Imposto
    cin >> S;

    if((S >= 0) && (S <= 2000.00)) {
        cout << "Isento";
    } else if((S >= 2000.01) && (S <= 3000.00)) {
        I = (S - 2000) * 0.08;
        cout << fixed << setprecision(2);
        cout << "R$ " << I << endl;
    } else if((S >= 3000.01) && (S <= 4500)) {
        I = ((1000 * 0.08) + ((S - 3000) * 0.18));
        cout << fixed << setprecision(2);
        cout << "R$ " << I << endl;
    } else if(S > 4500.00) {
        I = ((1000 * 0.08) + ((1500) * 0.18) + ((S - 4500) * 0.28));
        cout << fixed << setprecision(2);
        cout << "R$ " << I << endl;
    }

    return 0;
}