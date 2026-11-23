#include <iostream>
#include <iomanip>

using namespace std;

float ideal(float h, char sexo){
    float resp;
    
    if(sexo == 'M'){
        resp = (72.70 * h) - 58.00;
    } else{
        resp = (62.1 * h) - 44.7;
    }
    
    return resp;
}

int main(){
    float h; // altura da pessoa
    char sexo; // sexo da pessoa
    
    float resp;
    
    cin >> h >> sexo;
    
    resp = ideal(h,sexo);
    
    cout << fixed << setprecision(2) << "Peso ideal = " << resp << " kg" << endl;
    
    return 0;
}