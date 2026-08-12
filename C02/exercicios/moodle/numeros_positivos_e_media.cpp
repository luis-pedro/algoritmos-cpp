#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float N = 0; // Número
    int C = 0; // Variável contadora
    float S = 0; // Soma
    float M = 0; // Média

    for(int i = 0 ; i < 6 ; i++){
        cin >> N;

        if(N > 0){
            C = C + 1;
            S += N;
        }
    }

    M = S / C;

    cout << C << " valores positivos" << endl;
    cout << fixed << setprecision(1) << M << endl;

    return 0;
}