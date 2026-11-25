#include <iostream>
#include <list>

using namespace std;

bool encontrar(list<int> lista, int x) {
    for (int v : lista) {        // percorre cada elemento da lista
        if (v == x) return true; // achou
    }
    return false;                // percorreu tudo e não achou
}

int main() {
    list<int> lista;
    int n;

    // lê até aparecer 0 (o 0 não entra na lista)
    while (cin >> n && n != 0) {
        lista.push_back(n);
    }

    int x;
    cin >> x;

    if (encontrar(lista, x)) cout << "Encontrado" << endl;
    else cout << "Nao encontrado" << endl;

    return 0;
}