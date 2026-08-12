#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double X1, Y1, R1; //primeiro círculo
    double X2, Y2, R2; //segundo círculo

    cin >> X1 >> Y1 >> R1; //primeiro círculo (leitura)
    cin >> X2 >> Y2 >> R2; //segundo círculo (leitura)

    double D = sqrt(pow(X2 - X1,2) + pow(Y2 - Y1,2)); //distância

    double r = min(R1,R2); //raio 1
    double R = max(R1,R2); //raio 2

    double A; //área

    if(D >= R1 + R2){
        A = 0;
    }
    else if(D <= fabs(R1 - R2)){
        A = 3.14159 * r * r;
    }
    else{

        double part1 = r*r * acos((D*D + r*r - R*R)/(2*D*r));
        double part2 = R*R * acos((D*D + R*R - r*r)/(2*D*R));
        double part3 = 0.5 * sqrt((-D+r+R)*(D+r-R)*(D-r+R)*(D+r+R));

        A = part1 + part2 - part3;
    }

    cout << fixed << setprecision(2) << A << endl;

    return 0;
}