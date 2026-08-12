#include <iostream>

using namespace std;

int idade = 0;

int main(){
	cout << "Digite sua idade: ";
	cin >> idade;
	
	idade = idade + 10;
	
	cout << "Sua idade alterada e de: " << idade << endl;
	
	return 0;
}