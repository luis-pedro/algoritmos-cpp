#include <iostream>

using namespace std;

struct No{
    int valor;
    No* prox;
};

// coloca v no topo da pilha
void empilhar(No*& topo, int v) {
    No* novo = new No;
    novo->valor = v;
    novo->prox = topo;   // novo aponta para o antigo topo
    topo = novo;         // novo vira o topo
}

// remove o topo e devolve o valor
int desempilhar(No*& topo) {
    No* aux = topo;      // guarda o nó que vai sair
    int v = aux->valor;
    topo = topo->prox;   // o topo passa a ser o de baixo
    delete aux;          // libera a memória
    return v;
}

int main() {
    No* topo = nullptr;  // pilha vazia

    // lê 4 inteiros e empilha
    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        empilhar(topo, x);
    }

    // desempilha mostrando
    while (topo != nullptr) {
        cout << desempilhar(topo) << " ";
    }
    cout << endl;

    return 0;
}