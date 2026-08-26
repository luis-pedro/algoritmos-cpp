#include <iostream>

using namespace std;

int fatorial(int n){ 
    if(n == 0){ // condição de parada
        return 1;
    } else { // condição recursiva
        return n*fatorial(n-1);
    }
}

int main(){
    int n;

    cin >> n;

    cout << "Fatorial de " << n << ": " << fatorial(n) << endl;

    return 0;
}