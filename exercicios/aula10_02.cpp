#include <iostream>

using namespace std;

int main(){
    int L = 3; 
    int C = 3; 
    int i, j; 

    int contX = 0;
    int contY = 0;
    int V = 0; // Vencedor
    int jogadas = 0;
    int linha, coluna;
    char mat[3][3];

    // Iniciar
    for(i=0; i<3; i++)
        for(j=0; j<3; j++) mat[i][j] = ' ';

    cout << "Bem Vindo ao jogo da Velha!" << endl;
    cout << "Jogador 1 = X" << endl;
    cout << "Jogador 2 = O" << endl;
    cout << "----------------------------" << endl;

    // Loop principal
    while(V == 0 && jogadas < 9){
        
        // Escolhe a posição
        if(jogadas % 2 == 0) cout << "Vez do Jogador 1 (X). Digite Linha e Coluna: ";
        else cout << "Vez do Jogador 2 (O). Digite Linha e Coluna: ";
        
        cin >> linha >> coluna;

        // Verifica se a posição é válida
        if(mat[linha][coluna] != ' '){
            cout << "Essa posicao ja foi usada! Tente outra." << endl;
            continue; 
        }

        // Atribui o símbolo
        if(jogadas % 2 == 0) mat[linha][coluna] = 'X';
        else mat[linha][coluna] = 'O';
        
        jogadas++;

        // Mostra o tabuleiro após a jogada
        cout << "\nTabuleiro atual:" << endl;
        for(i = 0 ; i < L ; i++){
            for(j = 0 ; j < C ; j++){
                cout << mat[i][j] << " ";  
            }
            cout << endl;
        }

        // Verificação de linhas
        for(i = 0 ; i < L ; i++){
            contX = 0; contY = 0;
            for(j = 0 ; j < C ; j++){
                if(mat[i][j] == 'X') contX++;
                else if(mat[i][j] == 'O') contY++;
            }
            if(contX == 3) V = 1;
            if(contY == 3) V = 2;
        }

        // Verificação de colunas
        for(j = 0 ; j < C ; j++){
            contX = 0; contY = 0;
            for(i = 0 ; i < L ; i++){
                if(mat[i][j] == 'X') contX++;
                else if(mat[i][j] == 'O') contY++;
            }
            if(contX == 3) V = 1;
            if(contY == 3) V = 2;
        }

        // Verificação das diagonais
        // Diagonal Principal
        contX = 0; contY = 0;
        for(i = 0; i < L; i++){
            if(mat[i][i] == 'X') contX++;
            else if(mat[i][i] == 'O') contY++;
        }
        if(contX == 3) V = 1;
        if(contY == 3) V = 2;

        // Diagonal Secundária
        contX = 0; contY = 0;
        for(i = 0; i < L; i++){
            if(mat[i][2-i] == 'X') contX++;
            else if(mat[i][2-i] == 'O') contY++;
        }
        if(contX == 3) V = 1;
        if(contY == 3) V = 2;
    }

    if(V != 0) cout << "O jogador " << V << " venceu o jogo!" << endl;
    else cout << "Empate!" << endl;

    return 0;
}