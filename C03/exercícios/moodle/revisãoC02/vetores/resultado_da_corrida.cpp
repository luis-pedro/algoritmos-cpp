
#include <iostream>
using namespace std;

int main() {
    float tempo[100];
    int clas[100];
    int i = 0;
    float aux;
    int auxClas;

    cin >> tempo[i];

    while (tempo[i] != -1) {
        i++;
        cin >> tempo[i];
    }

    // Inicializa a classificação com os índices originais
    for (int k = 0; k < i; k++) {
        clas[k] = k;
    }

    // Ordena os índices de acordo com os tempos
    for (int k = 0; k < i - 1; k++) {
        for (int j = 0; j < i - 1 - k; j++) {
            if (tempo[clas[j]] > tempo[clas[j + 1]]) {
                auxClas = clas[j];
                clas[j] = clas[j + 1];
                clas[j + 1] = auxClas;
            }
        }
    }

    cout << "Classificacao:" << endl;

    for (int k = 0; k < i; k++) {
        cout << clas[k] << endl;
    }

    return 0;
}