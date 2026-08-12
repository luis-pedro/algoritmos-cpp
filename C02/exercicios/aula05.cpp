#include <iostream>

using namespace std;

int main() {
    int ddd = 0;
    cin >> ddd;

    switch (ddd)
    {
    case 11:
        cout << "São Paulo" << endl;
        break;
    case 35:
        cout << "Santa Rita do Sapucai" << endl;
        break;
    default:
        cout << "DDD não cadastrado" << endl;
        break;
    }

    return 0;
}