#include <iostream>

using namespace std;

main(){

    int idade = 0;

    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade < 13) {
        cout << "Infantil";
    } else if (idade >= 14 && idade <= 17) {
        cout << "Juvenil";
    } else {
        cout << "Adulto";
    }

    return 0;
}