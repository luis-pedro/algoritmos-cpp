#include <iostream>

using namespace std;

int nasc = 0;
int idade = 19;

int main() {
	cout << "Digite seu ano de nascimento: ";
	cin >> nasc;
	
	idade = 2026 - nasc;
	
	cout << "Idade = " << idade << " anos" << endl;
	
	return 0;
}