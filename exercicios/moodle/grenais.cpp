#include <iostream>

using namespace std;

int main(){
    int GI = 0; //gols marcados pelo Inter
    int GG = 0; //gols marcados pelo Grêmio

    int X = 1;

    int VI = 0; //vitórias do Inter
    int VG = 0; //vitórias do Grêmio
    int E = 0; //empates
    int G = 0; //quantidade de grenais

    while(X == 1){
        G += 1;

        cin >> GI >> GG;

        if(GI > GG){
            VI += 1;
        } else if(GI < GG){
            VG += 1;
        } else if(GI == GG){
            E += 1;
        }

        do {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> X;
        } while(X != 1 && X != 2);
    }

    cout << G << " grenais" << endl;

    cout << "Inter:" << VI << endl;
    cout << "Gremio:" << VG << endl;
    cout << "Empates:" << E << endl;
    if(VI > VG){
        cout << "Inter venceu mais" << endl;
    } else if(VI < VG){
        cout << "Gremio venceu mais" << endl;
    } else{
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}