#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int codigo = 0;
    int quantidade = 0;
    double valor = 0;

    cin >> codigo;
    cin >> quantidade;

    if (codigo == 1 ) {
        valor = quantidade * 4.0;
    }
    if (codigo == 2 ) {
        valor = quantidade * 4.5;
    }
    if (codigo == 3 ) {
        valor = quantidade * 5.0;
    }
    if (codigo == 4 ) {
        valor = quantidade * 2.0;
    }
    if (codigo == 5 ) {
        valor = quantidade * 1.5;
    }

    cout << "Total: R$" << fixed << setprecision(2);
	cout << valor << endl;

    return 0;
}