#include <iostream>
#include <cmath>

using namespace std;

float calc_delta(float a, float b, float c){
    float resp;
    
    resp = pow(b,2) - (4*a*c);
    
    return resp;
}

int main(){
    float a, b, c; // valores de entrada
    float dResp; // resposta do Delta
    
    cin >> a >> b >> c;
    
    if(a != 0){
        dResp = calc_delta(a,b,c); 
    } else {
        cout << "Digite outro valor de a: ";
        cin >> a;
        
        dResp = calc_delta(a,b,c); 
    }
    
    cout << "delta = " << dResp << endl;
    
    return 0;
}