#include <iostream>

using namespace std;

int main(){
    int N = 0; // Número que da tabuada
    int pos = 0; // Número multiplicador
    int res = 0; // Resultado
    
    cin >> N;
    
    for(int i = 0 ; i <= 10 ; i++){
        res = N * pos;
        
        cout << N << " x " << pos << " = " << res << endl;
        pos++;
    }
    
    return 0;
}