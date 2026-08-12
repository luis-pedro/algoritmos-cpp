#include <iostream>

using namespace std;

main() {
    int P1,P2,P3,P4,EX1,EX2;
    int NP1,NP2,NF;

    cin >> P1 >> P2 >> P3 >> P4 >> EX1 >> EX2;

    NP1 = ((P1+P2)/2 * 0.8) + EX1*0.2;
    NP2 = ((P3+P4)/2 * 0.8) + EX2*0.2;

    NF = (NP1 + NP2)/2;

    if (NF >= 60) {
        cout << "Você foi aprovado. Sua nota: " << NF << endl;
    } else {
        cout << "Você foi reprovado. Sua nota: " << NF << endl;
    }

    return 0;
}