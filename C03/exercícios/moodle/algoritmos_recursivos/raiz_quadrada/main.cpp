#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double raiz(double x, double x0, double e){
    if(fabs(pow(x0,2) - x) <= e){
        return x0;
    } else{
        return raiz(x, (x0 * x0 + x) / (2 * x0), e);
    }
}

int main(){
    double X;
    double X0;
    double E;
    
    cin >> X >> X0 >> E;
    
    cout << fixed << setprecision(4) << raiz(X,X0,E) << endl;
    
    return 0;
}