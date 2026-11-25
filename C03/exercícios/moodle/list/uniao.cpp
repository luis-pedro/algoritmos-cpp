#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> l1, l2, l3;
    int n;

    while (cin >> n && n != 0) l1.push_back(n);
    while (cin >> n && n != 0) l2.push_back(n);

    auto a = l1.begin();
    auto b = l2.begin();

    // junta enquanto as duas têm elementos
    while (a != l1.end() && b != l2.end()) {
        if (*a < *b) {
            l3.push_back(*a);
            ++a;
        } else if (*b < *a) {
            l3.push_back(*b);
            ++b;
        } else {                 // iguais: insere uma vez e avança os dois
            l3.push_back(*a);
            ++a;
            ++b;
        }
    }
    // sobras (só uma das listas ainda tem elementos)
    while (a != l1.end()) { l3.push_back(*a); ++a; }
    while (b != l2.end()) { l3.push_back(*b); ++b; }

    for (int v : l3) cout << v << " ";
    cout << endl;

    return 0;
}