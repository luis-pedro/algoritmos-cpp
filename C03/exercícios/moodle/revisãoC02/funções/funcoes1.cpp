#include <iostream>
#include <cmath>

using namespace std;

int calc_a(int x){
    int resp;
    
    resp = pow(x,2)*2 + 3*x - 1;
    
    return resp;
}

int calc_b(int x){
    int resp;
    
    resp = pow(x,3);
    
    return resp;
}

int calc_c(int y){
    int resp;
    
    resp = pow(y,3);
    
    return resp;
}

int main(){
    int x, y; // valores de entrada
    int a, b, c; // valores de saída
    
    cin >> x >> y;
    
    a = calc_a(x);
    
    b = calc_b(x);
    
    c = calc_c(y);
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    
    return 0;
}