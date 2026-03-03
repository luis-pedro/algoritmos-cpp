#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

main() {
	double angulo = 0;
	double pi = 3.14159;
	double radianos = 0;
	double graus = 0;
	double seno = 0;
	double cosseno = 0;
	
	cout << "Digite o valor do angulo: ";
	cin >> angulo;
	
	radianos = (angulo * pi) / 180;
	
	seno = sin(radianos);
	cosseno = cos(radianos);
	
	cout << fixed << setprecision(4);
	
	cout << "O valor do seno e: " << seno << endl;
	cout << "O valor do cosseno e: " << cosseno << endl;
	
	return 0;
}