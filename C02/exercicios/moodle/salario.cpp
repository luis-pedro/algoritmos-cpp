#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N = 0; //numero
    int H = 0; //quantidade de horas
    double V = 0; //valor que o funcionario recebe
    double S = 0;

    cin >> N >> H >> V;

    S = H * V;
    S = S * 1.00;

    cout << "NUMBER = " << N << endl;

    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << S << endl;

    return 0;
}