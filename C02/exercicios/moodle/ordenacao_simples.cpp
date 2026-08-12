#include <iostream>

using namespace std;

int main() {
    int N1 = 0;
    int N2 = 0;
    int N3 = 0;
    cin >> N1 >> N2 >> N3;

    if ((N1 < N2) && (N1 < N3) && (N2 < N3)){  //N1, N2, N3
        cout << N1 << endl << N2 << endl << N3 << endl;
    } else if((N2 < N1) && (N2 < N3) && (N1 < N3)) { //N2, N1, N3
        cout << N2 << endl << N1 << endl << N3 << endl;
    } else if((N3 < N2) && (N3 < N1) && (N2 < N1)) { //N3, N2, N1
        cout << N3 << endl << N2 << endl << N1 << endl;
    } else if((N1 < N2) && (N1 < N3) && (N3 < N2)) { //N1, N3, N2
        cout << N1 << endl << N3 << endl << N2 << endl;
    } else if((N2 < N3) && (N2 < N1) && (N3 < N1)) { //N2, N3, N1
        cout << N2 << endl << N3 << endl << N1 << endl;
    } else if((N3 < N1) && (N3 < N2) && (N1 < N2)){ //N3, N1, N2
        cout << N3 << endl << N1 << endl << N2 << endl;
    } else if ((N1  == N2) && (N1 == N3) && (N3 == N2)){
        cout << N1 << endl << N2 << endl << N3 << endl;
    }

    cout << endl;

    cout << N1 << endl << N2 << endl << N3;

    return 0;
}