#include <iostream>
#include <iomanip>

using namespace std;

main () {
	
	double P3 = 0; //Prova 03
	double P4 = 0; //Prova 04
	double Ex = 0; //Exercício
	double Pj = 0; //Projeto
	double NP2 = 0;
	
	cout << "Digite o valor da Prova 3: ";
	cin >> P3;
	cout << "Digite o valor da Prova 4: ";
	cin >> P4;
	cout << "Digite o valor do Exerxício: ";
	cin >> Ex;
	
	NP2 = (P3 + P4) / 2 * 0.8 + (Ex) * 0.2;
	
	cout << "O valor da sua NP2 e: " << fixed << setprecision(1);
	cout << NP2 << endl;
	return 0;
}