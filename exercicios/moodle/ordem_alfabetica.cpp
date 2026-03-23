#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    //palavra 01
    string p1;
    getline(cin >> ws, p1);
    transform(p1.begin(), p1.end(), p1.begin(), :: tolower);

    //palavra 02
    string p2;
    getline(cin >> ws, p2);
    transform(p2.begin(), p2.end(), p2.begin(), :: tolower);

    //palavra 03
    string p3;
    getline(cin >> ws, p3);
    transform(p3.begin(), p3.end(), p3.begin(), :: tolower);


    //condições
    if((p1 < p2) && (p2 < p3)){
        cout << p1 << " " << p2 << " " << p3; 
    } else if((p1 < p3) && (p3 < p2)) {
        cout << p1 << " " << p3 << " " << p2;
    } else if((p2 < p1) && (p1 < p3)){
        cout << p2 << " " << p1 << " " << p3;
    } else if((p2 < p3) && (p3 < p1)){
        cout << p2 << " " << p3 << " " << p1;
    } else if((p3 < p1) && (p1 < p2)){
        cout << p3 << " " << p1 << " " << p2;
    } else if((p3 < p2) && (p2 < p1)){
        cout << p3 << " " << p2 << " " << p1;
    } else if((p1 == p2) && p1 < p3){
        cout << p1 << " " << p2 << " " << p3;
    } else if((p1 == p2) && p3 < p1){
        cout << p3 << " " << p1 << " " << p2;
    } else if((p1 == p3) && p1 < p2){
        cout << p1 << " " << p3 << " " << p2;
    } else if((p1 == p3) && p2 < p1){
        cout << p2 << " " << p1 << " " << p3;
    } else if((p2 == p3) && p2 < p1){
        cout << p2 << " " << p3 << " " << p1;
    } else if((p2 == p3) && p1 < p2){
        cout << p1 << " " << p2 << " " << p3;
    } else if((p1 == p2) && (p1 == p3)){
        cout << p1 << " " << p2 << " " << p3;
    }

    return 0;
}