#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

main() {
	double angulo = 0;
	double pi = 3.14159;
	double radianos = 0;
	
	cout << "Digite o valor do angulo: ";
	cin >> angulo;
	
	radianos = (angulo * pi) / 180;
	
	cout << "O valor em radianos e: " << radianos << endl;
	cout << fixed << setprecision(3);
	cout << radianos << endl;
	
	return 0;
}