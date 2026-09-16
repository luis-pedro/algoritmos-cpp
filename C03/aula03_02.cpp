#include <iostream>

using namespace std;

void soma(int a, int b, int *s){
    *s = a + b;
}

int main(){
    int x = 2, y = 3;
    int s = 0;

    soma(x, y, &s);

    cout << "s = " << s << endl;

    return 0;
}