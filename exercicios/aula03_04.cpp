#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

main () {
	
	int N = 0;
	double resultado = 0;
	
	cout << "Digite o numero: ";
	cin >> N;
	
	resultado = sqrt(N);
	//cout << "Resultado: " << resultado << endl;
	cout << "Resultado: " << fixed << setprecision(2);
	cout << resultado << endl;
	
	return 0;
}