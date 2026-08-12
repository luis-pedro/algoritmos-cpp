#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	
	int N1 = 0;
	int N2 = 0;
	int R1 = 0;
	double N3 = 12.31234141;
	
	cout << "Digite dois numeros para serem elevados";
	cout << "N1: ";
	cin >> N1;
	cout << "N2: ";
	cin >> N2;
	
	R1 = pow(N1,N2);
	
	cout << "O resultado e: " << R1 << endl;
	cout << fixed << setprecision(2);
	cout << N3 << endl;

	return 0;
}