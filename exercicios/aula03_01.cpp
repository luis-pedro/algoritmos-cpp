#include <iostream>

using namespace std;

int main() {
	int N1 = 0;
	int N2 = 0;
	double R = 0;
	
	cout << "Digite dois numeros: ";
	cin >> N1;
	cin >> N2;
	
	R = N1 + N2;
	cout << "A soma dos dois numeros e: " << R << endl;
	R = N1 - N2;
	cout << "A subtracao dos dois numeros e: " << R << endl;
	R = N1 * N2;
	cout << "A multiplicacao dos dois numeros e: " << R << endl;
	R = N1 / N2;
	cout << "A divisao dos dois numeros e: " << R << endl;
	R = N1 % N2;
	cout << "O resto dos numeros e: " << R << endl;
	return 0;
}