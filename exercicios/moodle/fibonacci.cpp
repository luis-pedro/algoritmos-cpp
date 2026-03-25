#include <iostream>

using namespace std;

int main(){
    int N = 0; //Números
    cin >> N;

    int a = 0;
    int b = 1;
    int c = 0;

    for(int i = 0 ; i < N ; i++){
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}