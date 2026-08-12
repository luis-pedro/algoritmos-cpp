#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

    double x;
    double m;
    double s;
    double pi = 3.14159;
    double fx;
    double e = 2.7182; //Euller
    double f;

    cin >> x;
    cin >> m;
    cin >> s;

    f = -pow((x-m),2.0)/(2*pow(s,2.0));

    fx = (1/(sqrt(2*pi*(pow(s,2.0)))))*(pow(e,f));

    cout << fixed << setprecision(4);
	cout << fx << endl;

    return 0;
}