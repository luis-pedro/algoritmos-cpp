#include <iostream>
#include <list>

using namespace std;

int contar(list<int> lista) {
    int cont = 0;
    for (int v : lista) {   // cada nó visitado conta 1
        cont++;
    }
    return cont;
}

int main() {
    list<int> lista;
    int n;

    while (cin >> n && n != 0) {
        lista.push_back(n);
    }

    cout << contar(lista) << endl;
    return 0;
}