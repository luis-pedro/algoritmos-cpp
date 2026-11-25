#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> estoque, venda;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int op;
        cin >> op;
        if (op == 1) {
            int cod;
            cin >> cod;
            estoque.push_back(cod);
        } else if (op == 2) {
            if (!estoque.empty()) {
                venda.push_front(estoque.front());
                estoque.pop_front();
            }
        }
    }

    cout << "Estoque: ";
    for (int v : estoque) cout << v << " ";
    cout << endl;

    cout << "Venda: ";
    for (int v : venda) cout << v << " ";
    cout << endl;

    return 0;
}