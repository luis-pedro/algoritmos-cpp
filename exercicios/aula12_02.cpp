#include <iostream>

using namespace std;

void reorganizar(int a, int b, int c, int &rp1, int &rp2, int &rp3){

    //rp1 - aparecerá primeiro (a)
    //rp2 - aparecerá no meio (b)
    //rp3 - aparecerá no final (c)

    if(c > a && c > b && b > a){
        rp1 = a;
        rp2 = b;
        rp3 = c;
    } else if(c > a && c > b && a > b){
        rp1 = b;
        rp2 = a;
        rp3 = c;
    } else if(b > a && b > c && c > a){
        rp1 = a;
        rp2 = c;
        rp3 = b;
    } else if(b > a && b > c && a > c){
        rp1 = c;
        rp2 = a;
        rp3 = b;
    } else if(a > b && a > c && c > b){
        rp1 = b;
        rp2 = c;
        rp3 = a;
    } else if(a > b && a > c && b > c){
        rp1 = c;
        rp2 = b;
        rp3 = a;
    } 
}

int main(){
    int x, y, z, r1, r2, r3;

    cin >> x >> y >> z;
    reorganizar(x,y,z, r1, r2, r3);

    cout << r1 << " - " << r2 << " - " << r3;

    return 0;
}