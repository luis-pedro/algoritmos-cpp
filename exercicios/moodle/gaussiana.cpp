#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

    double x = 0;
    double m = 0;
    double s = 0;
    double pi = 3.14159;
    double fx = 0;
    double e = 2.7182; //Euller
    double f = 0;

    cin >> x;
    cin >> m;
    cin >> s;

    f = -pow((x-m),2)/2*pow(s,2);

    fx = 1/(sqrt(2*pi*(pow(s,2))))*(pow(e,f));

    cout << fixed << setprecision(4);
	cout << fx << endl;

    return 0;
}