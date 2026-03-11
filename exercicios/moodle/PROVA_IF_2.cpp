#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int D = 0; //dia
    int M = 0; //mês
    int A = 0; //ano

    float n = 0;
    float g = 0;
    float f = 0;
    float ds = 0;
    float delta = 0;

    cin >> D >> M >> A;

    //g
    if(M <= 2) {
        g = A - 1;
    } else {
        g = A;
    }

    //f
    if(M <= 2) {
        f = M + 13;
    } else {
        f = M + 1;
    }

    //conta do n
    n = int(365.25 * g) + int(30.6 * f) - 621049 + D;

    //parte fracionada
    double fracpart = 0;
    double intpart = 0;

    fracpart = modf(n/7.0, &intpart);

    //delta
    if(n < 36523) {
        delta = 2;
    } else if(delta >= 36523 && delta < 73048) {
        delta = 1;
    } else {
        delta = 0;
    }

    //conta do dia da semana
    ds = round(fracpart * 7) + delta + 1;

	if(ds == 1) {
		cout << "domingo" << endl;
	}
	if(ds == 2) {
		cout << "segunda-feira" << endl;
	}
	if(ds == 3) {
		cout << "terca-feira" << endl;
	}
	if(ds == 4) {
		cout << "quarta-feira" << endl;
	}
	if(ds == 5) {
		cout << "quinta-feira" << endl;
	}
	if(ds == 6) {
		cout << "sexta-feira" << endl;
	}
	if(ds == 7) {
		cout << "sabado" << endl;
	}
    return 0;
}