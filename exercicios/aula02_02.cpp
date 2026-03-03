#include <iostream>

using namespace std;

int N1 = 0;
int N2 = 0;
int N3 = 0;
int N4 = 0;
int N5 = 0;
float media = 0;

int main (){
	
	cout << "Digite o primeiro numero: ";
	cin >> N1;
	cout << "Digite o segundo numero: ";
	cin >> N2;
	cout << "Digite o terceiro numero: ";
	cin >> N3;
	cout << "Digite o quarto numero: ";
	cin >> N4;
	cout << "Digite o quinto numero: ";
	cin >> N5;
	
	media = (N1 + N2 + N3 + N4 + N5)/5.0;
	
	cout << media << endl;
	
	return 0;
}