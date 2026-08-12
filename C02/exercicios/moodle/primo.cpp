#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    int i = 2;
    int primo = 1;

    if(N <= 1){
        primo = 0;
    }

    while(i < N){
        if(N % i == 0){
            primo = 0;
        }
        i++;
    }

    if(primo == 1){
        cout << "primo" << endl;
    } else {
        cout << "nao e primo" << endl;
    }

    return 0;
}