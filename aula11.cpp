#include <iostream>

using namespace std;

int soma(int a, int b){
    int s = 0;
    s = a + b;

    return s;
}

int main(){
    int x,y;
    int resp;

    cin >> x >> y;
    resp = soma(x,y);
    cout << resp << endl;

    return 0;
}