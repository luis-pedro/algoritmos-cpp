#include <iostream>

using namespace std;

struct No {
    int valor;
    No* prox;
};

// insere v no final da fila
void enfileirar(No*& inicio, No*& fim, int v) {
    No* novo = new No;
    novo->valor = v;
    novo->prox = nullptr;       // o novo será o último
    if (inicio == nullptr) {    // fila vazia
        inicio = novo;
    } else {
        fim->prox = novo;       // o antigo último aponta para o novo
    }
    fim = novo;                 // o novo vira o fim
}

// remove do início e devolve o valor
int desenfileirar(No*& inicio, No*& fim) {
    No* aux = inicio;
    int v = aux->valor;
    inicio = inicio->prox;      // o segundo vira o primeiro
    if (inicio == nullptr) fim = nullptr;  // esvaziou
    delete aux;
    return v;
}

int main() {
    No* inicio = nullptr;
    No* fim = nullptr;

    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        enfileirar(inicio, fim, x);
    }

    while (inicio != nullptr) {
        cout << desenfileirar(inicio, fim) << " ";
    }
    cout << endl;

    return 0;
}