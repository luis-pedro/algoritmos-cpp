#include <iostream>
#include <string>

using namespace std;

int main() {

    int ocr[5][3]; // matriz do ocr

    while (true) {

        string codigo = ""; // código do número digitado na matriz
        int soma = 0; // variável contadora

        // leitura da matriz
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 3; j++) {

                cin >> ocr[i][j];

                soma += ocr[i][j];

                codigo += char(ocr[i][j] + '0'); // converte o código em char
            }
        }

        // condição para parar
        if (soma == 0) {
            break; // sai do loop antes de imprimir qualquer coisa
        }

        // OCR - só será executado se a soma NÃO for 0
        
        // 0
        if (codigo == "000010010010000") {
            cout << "ZERO" << endl;
        }

        // 1
        else if (codigo == "110110110110110") {
            cout << "UM" << endl;
        }

        // 2
        else if (codigo == "000110000011000") {
            cout << "DOIS" << endl;
        }

        // 3
        else if (codigo == "000110000110000") {
            cout << "TRES" << endl;
        }

        // 4
        else if (codigo == "010010000110110") {
            cout << "QUATRO" << endl;
        }

        // 5
        else if (codigo == "000011000110000") {
            cout << "CINCO" << endl;
        }

        // 6
        else if (codigo == "000011000010000") {
            cout << "SEIS" << endl;
        }

        // 7
        else if (codigo == "000110110110110") {
            cout << "SETE" << endl;
        }

        // 8
        else if (codigo == "000010000010000") {
            cout << "OITO" << endl;
        }

        // 9
        else if (codigo == "000010000110000") {
            cout << "NOVE" << endl;
        }

        else {
            cout << "DESCONHECIDO" << endl;
        }

    }

    return 0;
}