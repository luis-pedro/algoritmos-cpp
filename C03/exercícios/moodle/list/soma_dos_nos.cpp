#include <iostream>
#include <list>

using namespace std;

int soma(list<int> lista) {
    int total = 0;
    for (int v : lista) {   // visita cada nó
        total += v;
    }
    return total;
}

int main() {
    list<int> lista;
    int n;

    while (cin >> n && n != 0) {
        lista.push_back(n);
    }

    cout << soma(lista) << endl;
    return 0;
}